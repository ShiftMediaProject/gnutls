#!/bin/bash

# Copyright (c) 2010-2016, Free Software Foundation, Inc.
# Copyright (c) 2012-2018, Nikos Mavrogiannopoulos
# All rights reserved.
#
# Author: Nikos Mavrogiannopoulos
#
# This file is part of GnuTLS.
#
# Redistribution and use in source and binary forms, with or without modification,
# are permitted provided that the following conditions are met:
#
# 1. Redistributions of source code must retain the above copyright notice, this
# list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright notice,
# this list of conditions and the following disclaimer in the documentation and/or
# other materials provided with the distribution.
# 3. Neither the name of the copyright holder nor the names of its contributors may
# be used to endorse or promote products derived from this software without specific
# prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
# EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
# SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
# TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
# BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
# CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY
# WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

: ${srcdir=.}
: ${SERV=../../src/gnutls-serv${EXEEXT}}
: ${CLI=../../src/gnutls-cli${EXEEXT}}
unset RETCODE

if ! test -x "${CLI}"; then
	exit 77
fi

if ! test -z "${VALGRIND}"; then
	VALGRIND="${LIBTOOL:-libtool} --mode=execute ${VALGRIND}"
fi

if test "${WINDIR}" != ""; then
	exit 77
fi

. "${srcdir}/../scripts/common.sh"

skip_if_no_datefudge

. "${srcdir}/testcompat-common"

: ${PORT=${RPORT}}

: ${OPENSSL=openssl}

if test -z "$OUTPUT";then
OUTPUT=/dev/null
fi

>${OUTPUT}

echo_cmd() {
	tee -a ${OUTPUT} <<<$(echo $1)
}

echo_cmd "Compatibility checks using "`${OPENSSL} version`

echo_cmd "#################################################"
echo_cmd "# Client mode tests (gnutls cli-openssl server) #"
echo_cmd "#################################################"

OCIPHERSUITES="TLS_AES_128_CCM_SHA256:TLS_AES_128_GCM_SHA256:TLS_AES_256_GCM_SHA384:TLS_CHACHA20_POLY1305_SHA256:TLS_AES_128_CCM_8_SHA256"

ADD=$1
PREFIX=""
if ! test -z "${ADD}"; then
	PREFIX="$(echo $ADD|sed 's/://g'): "
fi


eval "${GETPORT}"
launch_bare_server "$OPENSSL" s_server -ciphersuites ${OCIPHERSUITES} -groups 'X25519:P-256:X448:P-521:P-384' -quiet -www -accept "${PORT}" -keyform pem -certform pem ${OPENSSL_DH_PARAMS_OPT} -key "${RSA_KEY}" -cert "${RSA_CERT}" -CAfile "${CA_CERT}"
PID=$!
wait_server ${PID}

#AES-128-CCM
for i in AES-128-GCM AES-256-GCM CHACHA20-POLY1305 AES-128-CCM AES-128-CCM-8;do
	echo_cmd "${PREFIX}Checking TLS 1.3 with ${i}..."
	${VALGRIND} "${CLI}" ${DEBUG} -p "${PORT}" 127.0.0.1 --priority "NORMAL:-VERS-ALL:+VERS-TLS1.3:-CIPHER-ALL:+${i}${ADD}" --insecure </dev/null >>${OUTPUT} || \
		fail ${PID} "Failed"
done

for i in GROUP-X25519 GROUP-SECP256R1 GROUP-SECP384R1 GROUP-SECP521R1;do
	echo_cmd "${PREFIX}Checking TLS 1.3 with $i..."
	${VALGRIND} "${CLI}" ${DEBUG} -p "${PORT}" 127.0.0.1 --priority "NORMAL:-VERS-ALL:+VERS-TLS1.3:-GROUP-ALL:+${i}${ADD}" --insecure </dev/null >>${OUTPUT} || \
		fail ${PID} "Failed"
done

echo_cmd "${PREFIX}Checking TLS 1.3 with double rekey..."
${VALGRIND} "${CLI}" ${DEBUG} -p "${PORT}" 127.0.0.1 --priority "NORMAL:-VERS-ALL:+VERS-TLS1.3${ADD}" --insecure --inline-commands <<<$(echo -e "^rekey^\n^rekey1^\nGET / HTTP/1.0\r\n\r\n") >>${OUTPUT} || \
	fail ${PID} "Failed"

# Try hello retry request
echo_cmd "${PREFIX}Checking TLS 1.3 with HRR..."
${VALGRIND} "${CLI}" ${DEBUG} -p "${PORT}" 127.0.0.1 --single-key-share --priority "NORMAL:-VERS-ALL:+VERS-TLS1.3:-GROUP-ALL:+GROUP-FFDHE2048:+GROUP-FFDHE4096:+GROUP-SECP256R1${ADD}" --insecure </dev/null >>${OUTPUT} || \
	fail ${PID} "Failed"

kill ${PID}
wait


#test PSK ciphersuites
# disabled as I do not seem to be able to connect to openssl s_server with PSK
eval "${GETPORT}"
launch_bare_server "$OPENSSL" s_server -quiet -www -accept "${PORT}" -psk_identity ${PSKID} -psk ${PSKKEY} -nocert
PID=$!
wait_server ${PID}

# by default only SHA256 is supported under PSK as PRF, so we cannot try all
# ciphers; only the ones which use SHA256 PRF.
for i in AES-128-GCM;do
# plain PSK with (EC)DHE not supported by openssl
#              echo_cmd "${PREFIX}Checking TLS 1.3 with PSK with ${i}..."
#              ${VALGRIND} "${CLI}" ${DEBUG} -p "${PORT}" 127.0.0.1 --priority "NORMAL:-VERS-ALL:+VERS-TLS1.3:+PSK:-CIPHER-ALL:+${i}${ADD}" --pskusername ${PSKID} --pskkey ${PSKKEY} </dev/null || \
#                      fail ${PID} "Failed"

	echo_cmd "${PREFIX}Checking TLS 1.3 with DHE-PSK with ${i}..."
	${VALGRIND} "${CLI}" ${DEBUG} -p "${PORT}" 127.0.0.1 --priority "NORMAL:-VERS-ALL:+DHE-PSK:+VERS-TLS1.3:-CIPHER-ALL:+${i}${ADD}" --pskusername ${PSKID} --pskkey ${PSKKEY} </dev/null >>${OUTPUT} || \
		fail ${PID} "Failed"
done

kill ${PID}
wait

#test client certificates
eval "${GETPORT}"
launch_bare_server "$OPENSSL" s_server -cipher "ALL" -quiet -www -accept "${PORT}" -keyform pem -certform pem ${OPENSSL_DH_PARAMS_OPT} -key "${RSA_KEY}" -cert "${RSA_CERT}" -Verify 1 -CAfile "${CA_CERT}" >>${OUTPUT} 2>&1
PID=$!
wait_server ${PID}

for i in GROUP-SECP256R1;do
	echo_cmd "${PREFIX}Checking TLS 1.3 with RSA client cert and $i..."
	${VALGRIND} "${CLI}" ${DEBUG} -p "${PORT}" 127.0.0.1 --priority "NORMAL:-VERS-ALL:+VERS-TLS1.3:-GROUP-ALL:+${i}${ADD}" --insecure --x509certfile "${CLI_CERT}" --x509keyfile "${CLI_KEY}" </dev/null >>${OUTPUT} || \
		fail ${PID} "Failed"

	echo_cmd "${PREFIX}Checking TLS 1.3 with secp256r1 client cert and $i..."
	${VALGRIND} "${CLI}" ${DEBUG} -p "${PORT}" 127.0.0.1 --priority "NORMAL:-VERS-ALL:+VERS-TLS1.3:-GROUP-ALL:+${i}${ADD}" --insecure --x509certfile "${ECC_CLI_CERT}" --x509keyfile "${ECC_CLI_KEY}" </dev/null >>${OUTPUT} || \
		fail ${PID} "Failed"

	echo_cmd "${PREFIX}Checking TLS 1.3 with Ed25519 client cert and $i..."
	${VALGRIND} "${CLI}" ${DEBUG} -p "${PORT}" 127.0.0.1 --priority "NORMAL:-VERS-ALL:+VERS-TLS1.3:-GROUP-ALL:+${i}${ADD}" --insecure --x509certfile "${ED25519_CLI_CERT}" --x509keyfile "${ED25519_CLI_KEY}" </dev/null >>${OUTPUT} || \
		fail ${PID} "Failed"

	echo_cmd "${PREFIX}Checking TLS 1.3 with RSA-PSS client cert and $i..."
	${VALGRIND} "${CLI}" ${DEBUG} -p "${PORT}" 127.0.0.1 --priority "NORMAL:-VERS-ALL:+VERS-TLS1.3:-GROUP-ALL:+${i}${ADD}" --insecure --x509certfile "${RSA_PSS_CLI_CERT}" --x509keyfile "${RSA_PSS_CLI_KEY}" </dev/null >>${OUTPUT} || \
		fail ${PID} "Failed"
done

kill ${PID}
wait

echo_cmd "${PREFIX}Checking TLS 1.3 with Ed25519 certificate..."
eval "${GETPORT}"
launch_bare_server "$OPENSSL" s_server -quiet -www -accept "${PORT}" -keyform pem -certform pem ${OPENSSL_DH_PARAMS_OPT} -key "${ED25519_KEY}" -cert "${ED25519_CERT}" -CAfile "${CA_CERT}"
PID=$!
wait_server ${PID}

${VALGRIND} "${CLI}" ${DEBUG} -p "${PORT}" 127.0.0.1 --priority "NORMAL:-VERS-ALL:+VERS-TLS1.3${ADD}" --insecure </dev/null >>${OUTPUT} || \
	fail ${PID} "Failed"

kill ${PID}
wait

echo_cmd "${PREFIX}Checking TLS 1.3 with Ed448 certificate..."
eval "${GETPORT}"
launch_bare_server "$OPENSSL" s_server -quiet -www -accept "${PORT}" -keyform pem -certform pem ${OPENSSL_DH_PARAMS_OPT} -key "${ED448_KEY}" -cert "${ED448_CERT}" -CAfile "${CA_CERT}"
PID=$!
wait_server ${PID}

${VALGRIND} "${CLI}" ${DEBUG} -p "${PORT}" 127.0.0.1 --priority "NORMAL:-VERS-ALL:+VERS-TLS1.3${ADD}" --insecure </dev/null >>${OUTPUT} || \
	fail ${PID} "Failed"

kill ${PID}
wait

echo_cmd "${PREFIX}Checking TLS 1.3 with secp256r1 certificate..."
eval "${GETPORT}"
launch_bare_server "$OPENSSL" s_server -quiet -www -accept "${PORT}" -keyform pem -certform pem ${OPENSSL_DH_PARAMS_OPT} -key "${ECC_KEY}" -cert "${ECC_CERT}" -CAfile "${CA_CERT}"
PID=$!
wait_server ${PID}

${VALGRIND} "${CLI}" ${DEBUG} -p "${PORT}" 127.0.0.1 --priority "NORMAL:-VERS-ALL:+VERS-TLS1.3${ADD}" --insecure </dev/null >>${OUTPUT} || \
	fail ${PID} "Failed"

kill ${PID}
wait

echo_cmd "${PREFIX}Checking TLS 1.3 with RSA-PSS certificate..."
eval "${GETPORT}"
launch_bare_server "$OPENSSL" s_server -quiet -www -accept "${PORT}" -keyform pem -certform pem ${OPENSSL_DH_PARAMS_OPT} -key "${RSA_PSS_KEY}" -cert "${RSA_PSS_CERT}" -CAfile "${CA_CERT}"
PID=$!
wait_server ${PID}

${VALGRIND} "${CLI}" ${DEBUG} -p "${PORT}" 127.0.0.1 --priority "NORMAL:-VERS-ALL:+VERS-TLS1.3${ADD}" --insecure </dev/null >>${OUTPUT} || \
	fail ${PID} "Failed"

kill ${PID}
wait

# Try resumption
echo_cmd "${PREFIX}Checking TLS 1.3 with resumption..."
testdir=`create_testdir tls13-openssl-resumption`
eval "${GETPORT}"
launch_bare_server "$OPENSSL" s_server -quiet -www -accept "${PORT}" -keyform pem -certform pem ${OPENSSL_DH_PARAMS_OPT} -key "${RSA_KEY}" -cert "${RSA_CERT}" -CAfile "${CA_CERT}"
PID=$!
wait_server ${PID}

${VALGRIND} "${CLI}" ${DEBUG} -p "${PORT}" 127.0.0.1 --priority "NORMAL:-VERS-ALL:+VERS-TLS1.3:+GROUP-ALL${ADD}" --insecure --inline-commands <<< $(echo -e "^resume^\nGET / HTTP/1.0\r\n\r\n")| tee "${testdir}/client.out" >> ${OUTPUT}
grep '^\*\*\* This is a resumed session' "${testdir}/client.out" || \
	fail ${PID} "Failed"

kill ${PID}
wait

# Try resumption with HRR
echo_cmd "${PREFIX}Checking TLS 1.3 with resumption and HRR..."
eval "${GETPORT}"
launch_bare_server "$OPENSSL" s_server -quiet -www -accept "${PORT}" -groups 'X25519:P-256' -keyform pem -certform pem ${OPENSSL_DH_PARAMS_OPT} -key "${RSA_KEY}" -cert "${RSA_CERT}" -CAfile "${CA_CERT}"
PID=$!
wait_server ${PID}

${VALGRIND} "${CLI}" ${DEBUG} -p "${PORT}" 127.0.0.1 --priority "NORMAL:-VERS-ALL:+VERS-TLS1.3:-GROUP-ALL:+GROUP-FFDHE2048:+GROUP-SECP256R1${ADD}" --single-key-share --insecure --inline-commands <<< $(echo -e "^resume^\nGET / HTTP/1.0\r\n\r\n")| tee "${testdir}/client.out" >> ${OUTPUT}
grep '^\*\*\* This is a resumed session' "${testdir}/client.out" || \
	fail ${PID} "Failed"

kill ${PID}
wait

# # Try resumption with early data
# echo_cmd "${PREFIX}Checking TLS 1.3 with resumption with early data..."
# testdir=`create_testdir tls13-openssl-earlydata`
# eval "${GETPORT}"
# launch_bare_server "$OPENSSL" s_server -quiet -accept "${PORT}" -keyform pem -certform pem ${OPENSSL_DH_PARAMS_OPT} -key "${RSA_KEY}" -cert "${RSA_CERT}" -CAfile "${CA_CERT}" -early_data
# PID=$!
# wait_server ${PID}

# echo "This file contains early data sent by the client" > "${testdir}/earlydata.txt"
# ${VALGRIND} "${CLI}" ${DEBUG} -p "${PORT}" 127.0.0.1 --priority "NORMAL:-VERS-ALL:+VERS-TLS1.3:+GROUP-ALL${ADD}" --earlydata "${testdir}/earlydata.txt" --insecure --inline-commands <<< '^resume^'| tee "${testdir}/client.out" >> ${OUTPUT}
# grep '^\*\*\* This is a resumed session' "${testdir}/client.out" || \
#       fail ${PID} "Failed"

# kill ${PID}
# wait

# # Try resumption with early data with small limit
# echo_cmd "${PREFIX}Checking TLS 1.3 with resumption with early data..."
# testdir=`create_testdir tls13-openssl-earlydata-limit`
# eval "${GETPORT}"
# launch_bare_server "$OPENSSL" s_server -quiet -accept "${PORT}" -keyform pem -certform pem ${OPENSSL_DH_PARAMS_OPT} -key "${RSA_KEY}" -cert "${RSA_CERT}" -CAfile "${CA_CERT}" -early_data -max_early_data 1
# PID=$!
# wait_server ${PID}

# echo "This file contains early data sent by the client" > "${testdir}/earlydata.txt"
# ${VALGRIND} "${CLI}" ${DEBUG} -p "${PORT}" 127.0.0.1 --priority "NORMAL:-VERS-ALL:+VERS-TLS1.3:+GROUP-ALL${ADD}" --earlydata "${testdir}/earlydata.txt" --insecure --inline-commands <<< '^resume^'|& tee "${testdir}/client.out" >> ${OUTPUT}
# grep '^\*\*\* This is a resumed session' "${testdir}/client.out" || \
#       fail ${PID} "Failed"
# grep '^\*\*\* Received alert \[10\]: Unexpected message' "${testdir}/client.out" || \
#       fail ${PID} "Failed"

# kill ${PID}
# wait

# Try exporting keying material
echo_cmd "${PREFIX}Checking TLS 1.3 to export keying material..."
testdir=`create_testdir tls13-openssl-keymatexport`
eval "${GETPORT}"
LOGFILE="${testdir}/server.out"
launch_bare_server "$OPENSSL" s_server -accept "${PORT}" -keyform pem -certform pem ${OPENSSL_DH_PARAMS_OPT} -key "${RSA_KEY}" -cert "${RSA_CERT}" -CAfile "${CA_CERT}" -keymatexport label -keymatexportlen 20
unset LOGFILE
PID=$!
wait_server ${PID}

${VALGRIND} "${CLI}" ${DEBUG} -p "${PORT}" 127.0.0.1 --priority "NORMAL:-VERS-ALL:+VERS-TLS1.3:+GROUP-ALL${ADD}" --keymatexport label --keymatexportsize 20| tee "${testdir}/client.out" >> ${OUTPUT}
grep '^- Key material: ' "${testdir}/client.out" | \
sed -e 's/^.*: //' -e 'y/abcdef/ABCDEF/' > "${testdir}/client.key" || \
	fail ${PID} "Failed"
grep '^    Keying material: ' "${testdir}/server.out" | \
sed -e 's/^.*: //' -e 'y/abcdef/ABCDEF/' > "${testdir}/server.key" || \
	fail ${PID} "Failed"
diff "${testdir}/client.key" "${testdir}/server.key" || \
	fail ${PID} "Failed"
kill ${PID}
wait

rm -rf "${testdir}"
