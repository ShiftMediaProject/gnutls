#!/bin/sh

# Copyright (c) 2010-2015, Free Software Foundation, Inc.
# Copyright (c) 2012-2015, Nikos Mavrogiannopoulos
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
: ${CLI=../../src/gnutls-cli${EXEEXT}}
LOGFILE=polarssl.log
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


TXT=`"${CLI}" --priority NORMAL --list|grep SECP224`
if test -z "${TXT}"; then
	ALL_CURVES=0
else
	ALL_CURVES=1
fi


echo "Compatibility checks using polarssl"

for POLARSSL_CLI in \
		/usr/bin/polarssl_ssl_client2 \
		/usr/bin/mbedtls_ssl_client2 \
		/usr/libexec/mbedtls/ssl_client2 \
		""; do
	test -x "${POLARSSL_CLI}" && break
done

if test -z "${POLARSSL_CLI}"; then
	echo "PolarSSL is required for this test to run"
	exit 77
fi

"${POLARSSL_CLI}" >/dev/null 2>&1
if test $? = 0; then
	echo "PolarSSL 1.3.x is required for the tests to run"
	exit 77
fi


. "${srcdir}/testcompat-common"

echo ""
echo "##################################################"
echo "# Server mode tests (gnutls server-polarssl cli) #"
echo "##################################################"
SERV="../../src/gnutls-serv${EXEEXT} -q"

rm -f "${LOGFILE}"

ADD=$1
PREFIX=""
if ! test -z "${ADD}"; then
	PREFIX="$(echo $ADD|sed 's/://g'): "
fi

eval "${GETPORT}"

#TLS 1.0

echo "${PREFIX}Check TLS 1.0 with DHE-RSA ciphersuite"
launch_server  --priority "NONE:+CIPHER-ALL:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.0:+DHE-RSA${ADD}" --x509certfile "${SERV_CERT}" --x509keyfile "${SERV_KEY}" --x509cafile "${CA_CERT}" --dhparams "${DH_PARAMS}"
PID=$!
wait_server ${PID}

"${POLARSSL_CLI}"  server_name=localhost min_version=tls1 max_version=tls1 server_port="${PORT}" crt_file="${CLI_CERT}" key_file="${CLI_KEY}" ca_file="${CA_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
	fail ${PID} "Failed"

kill ${PID}
wait

#echo "${PREFIX}Check TLS 1.0 with DHE-DSS ciphersuite"
#launch_server  --priority "NONE:+CIPHER-ALL:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.0:+DHE-DSS${ADD}" --x509certfile "${SERV_DSA_CERT}" --x509keyfile "${SERV_DSA_KEY}" --dhparams "${DH_PARAMS}"
#PID=$!
#wait_server ${PID}

#"${POLARSSL_CLI}"  server_name=localhost min_version=tls1 max_version=tls1 server_port="${PORT}" crt_file="${CLI_CERT}" key_file="${CLI_KEY}" ca_file="${CA_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
#  fail ${PID} "Failed"

#kill ${PID}
#wait

eval "${GETPORT}"
echo "${PREFIX}Check TLS 1.0 with ECDHE-RSA ciphersuite"
launch_server  --priority "NONE:+CIPHER-ALL:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.0:+ECDHE-RSA:+CURVE-ALL${ADD}" --x509certfile "${SERV_CERT}" --x509keyfile "${SERV_KEY}" --x509cafile "${CA_CERT}"
PID=$!
wait_server ${PID}

#-cipher ECDHE-RSA-AES128-SHA
"${POLARSSL_CLI}"  server_name=localhost min_version=tls1 max_version=tls1 server_port="${PORT}" crt_file="${CLI_CERT}" key_file="${CLI_KEY}" ca_file="${CA_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
	fail ${PID} "Failed"

kill ${PID}
wait

eval "${GETPORT}"
echo "${PREFIX}Check TLS 1.0 with PSK ciphersuite"
launch_server  --priority "NONE:+CIPHER-ALL:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.0:+PSK:+CURVE-ALL${ADD}" --pskpasswd "${SERV_PSK}" --x509certfile "${SERV_CERT}" --x509keyfile "${SERV_KEY}" --x509cafile "${CA_CERT}"
PID=$!
wait_server ${PID}

#-cipher PSK-AES128-SHA
"${POLARSSL_CLI}"  server_name=localhost psk_identity=jas psk=9e32cf7786321a828ef7668f09fb35db min_version=tls1 max_version=tls1 server_port="${PORT}" crt_file="${CLI_CERT}" key_file="${CLI_KEY}" ca_file="${CA_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
	fail ${PID} "Failed"

kill ${PID}
wait

eval "${GETPORT}"
echo "${PREFIX}Check TLS 1.0 with DHE-PSK ciphersuite"
launch_server  --priority "NONE:+CIPHER-ALL:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.0:+DHE-PSK:+CURVE-ALL${ADD}" --pskpasswd "${SERV_PSK}" --x509certfile "${SERV_CERT}" --x509keyfile "${SERV_KEY}" --x509cafile "${CA_CERT}"
PID=$!
wait_server ${PID}

#-cipher PSK-AES128-SHA
"${POLARSSL_CLI}"  server_name=localhost psk_identity=jas psk=9e32cf7786321a828ef7668f09fb35db min_version=tls1 max_version=tls1 server_port="${PORT}" crt_file="${CLI_CERT}" key_file="${CLI_KEY}" ca_file="${CA_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
	fail ${PID} "Failed"

kill ${PID}
wait

eval "${GETPORT}"
echo "${PREFIX}Check TLS 1.0 with ECDHE-PSK ciphersuite"
launch_server  --priority "NONE:+CIPHER-ALL:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.0:+ECDHE-PSK:+CURVE-ALL${ADD}" --pskpasswd "${SERV_PSK}" --x509certfile "${SERV_CERT}" --x509keyfile "${SERV_KEY}" --x509cafile "${CA_CERT}"
PID=$!
wait_server ${PID}

#-cipher PSK-AES128-SHA
"${POLARSSL_CLI}"  server_name=localhost psk_identity=jas psk=9e32cf7786321a828ef7668f09fb35db min_version=tls1 max_version=tls1 server_port="${PORT}" crt_file="${CLI_CERT}" key_file="${CLI_KEY}" ca_file="${CA_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
	fail ${PID} "Failed"

kill ${PID}
wait

eval "${GETPORT}"
echo "${PREFIX}Check TLS 1.0 with RSA-PSK ciphersuite"
launch_server  --priority "NONE:+CIPHER-ALL:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.0:+RSA-PSK:+CURVE-ALL${ADD}" --pskpasswd "${SERV_PSK}" --x509certfile "${SERV_CERT}" --x509keyfile "${SERV_KEY}" --x509cafile "${CA_CERT}"
PID=$!
wait_server ${PID}

#-cipher RSA-PSK-AES128-SHA
"${POLARSSL_CLI}"  server_name=localhost psk_identity=jas psk=9e32cf7786321a828ef7668f09fb35db min_version=tls1 max_version=tls1 server_port="${PORT}" crt_file="${CLI_CERT}" key_file="${CLI_KEY}" ca_file="${CA_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
	fail ${PID} "Failed"

kill ${PID}
wait

if test ${ALL_CURVES} = 1; then
	eval "${GETPORT}"
	echo "${PREFIX}Check TLS 1.0 with ECDHE-ECDSA ciphersuite (SECP224R1)"
	launch_server  --priority "NONE:+CIPHER-ALL:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.0:+ECDHE-ECDSA:+CURVE-ALL${ADD}" --x509certfile "${ECC224_CERT}" --x509keyfile "${ECC224_KEY}" --x509cafile "${CA_ECC_CERT}"
	PID=$!
	wait_server ${PID}

	#-cipher ECDHE-ECDSA-AES128-SHA
	"${POLARSSL_CLI}"  server_name=localhost min_version=tls1 max_version=tls1 server_port="${PORT}" crt_file="${ECC224_CERT}" key_file="${ECC224_KEY}" ca_file="${CA_ECC_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
		fail ${PID} "Failed"

	kill ${PID}
	wait
fi

eval "${GETPORT}"
echo "${PREFIX}Check TLS 1.0 with ECDHE-ECDSA ciphersuite (SECP256R1)"
launch_server  --priority "NONE:+CIPHER-ALL:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.0:+ECDHE-ECDSA:+CURVE-ALL${ADD}" --x509certfile "${ECC256_CERT}" --x509keyfile "${ECC256_KEY}" --x509cafile "${CA_ECC_CERT}"
PID=$!
wait_server ${PID}

#-cipher ECDHE-ECDSA-AES128-SHA
"${POLARSSL_CLI}"  server_name=localhost min_version=tls1 max_version=tls1 server_port="${PORT}" crt_file="${ECC256_CERT}" key_file="${ECC256_KEY}" ca_file="${CA_ECC_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
	fail ${PID} "Failed"

kill ${PID}
wait

eval "${GETPORT}"
echo "${PREFIX}Check TLS 1.0 with ECDHE-ECDSA ciphersuite (SECP384R1)"
launch_server  --priority "NONE:+CIPHER-ALL:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.0:+ECDHE-ECDSA:+CURVE-ALL${ADD}" --x509certfile "${ECC384_CERT}" --x509keyfile "${ECC384_KEY}" --x509cafile "${CA_ECC_CERT}"
PID=$!
wait_server ${PID}

#-cipher ECDHE-ECDSA-AES128-SHA
"${POLARSSL_CLI}"  server_name=localhost min_version=tls1 max_version=tls1 server_port="${PORT}" crt_file="${ECC384_CERT}" key_file="${ECC384_KEY}" ca_file="${CA_ECC_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
	fail ${PID} "Failed"

kill ${PID}
wait

eval "${GETPORT}"
echo "${PREFIX}Check TLS 1.0 with ECDHE-ECDSA ciphersuite (SECP521R1)"
launch_server  --priority "NONE:+CIPHER-ALL:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.0:+ECDHE-ECDSA:+CURVE-ALL${ADD}" --x509certfile "${ECC521_CERT}" --x509keyfile "${ECC521_KEY}" --x509cafile "${CA_ECC_CERT}"
PID=$!
wait_server ${PID}

#-cipher ECDHE-ECDSA-AES128-SHA
"${POLARSSL_CLI}"  server_name=localhost min_version=tls1 max_version=tls1 server_port="${PORT}" crt_file="${ECC521_CERT}" key_file="${ECC521_KEY}" ca_file="${CA_ECC_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
	fail ${PID} "Failed"

kill ${PID}
wait

eval "${GETPORT}"
echo "${PREFIX}Check TLS 1.2 with DHE-RSA ciphersuite"
launch_server  --priority "NONE:+CIPHER-ALL:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.2:+DHE-RSA${ADD}" --x509certfile "${SERV_CERT}" --x509keyfile "${SERV_KEY}" --x509cafile "${CA_CERT}" --dhparams "${DH_PARAMS}"
PID=$!
wait_server ${PID}

"${POLARSSL_CLI}"  server_name=localhost min_version=tls1_2 max_version=tls1_2 server_port="${PORT}" crt_file="${CLI_CERT}" key_file="${CLI_KEY}" ca_file="${CA_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
	fail ${PID} "Failed"

kill ${PID}
wait

eval "${GETPORT}"
echo "${PREFIX}Check TLS 1.2 with CAMELLIA-128-GCM-DHE-RSA ciphersuite"
launch_server  --priority "NONE:-CIPHER-ALL:+CAMELLIA-128-GCM:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.2:+DHE-RSA${ADD}" --x509certfile "${SERV_CERT}" --x509keyfile "${SERV_KEY}" --x509cafile "${CA_CERT}" --dhparams "${DH_PARAMS}"
PID=$!
wait_server ${PID}

"${POLARSSL_CLI}"  server_name=localhost min_version=tls1_2 max_version=tls1_2 server_port="${PORT}" crt_file="${CLI_CERT}" key_file="${CLI_KEY}" ca_file="${CA_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
	fail ${PID} "Failed"

kill ${PID}
wait

eval "${GETPORT}"
echo "${PREFIX}Check TLS 1.2 with CAMELLIA-256-GCM-DHE-RSA ciphersuite"
launch_server  --priority "NONE:-CIPHER-ALL:+CAMELLIA-256-GCM:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.2:+DHE-RSA${ADD}" --x509certfile "${SERV_CERT}" --x509keyfile "${SERV_KEY}" --x509cafile "${CA_CERT}" --dhparams "${DH_PARAMS}"
PID=$!
wait_server ${PID}

"${POLARSSL_CLI}"  server_name=localhost min_version=tls1_2 max_version=tls1_2 server_port="${PORT}" crt_file="${CLI_CERT}" key_file="${CLI_KEY}" ca_file="${CA_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
	fail ${PID} "Failed"

kill ${PID}
wait

eval "${GETPORT}"
echo "${PREFIX}Check TLS 1.2 with AES-128-CCM-DHE-RSA ciphersuite"
launch_server  --priority "NONE:-CIPHER-ALL:+AES-128-CCM:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.2:+DHE-RSA${ADD}" --x509certfile "${SERV_CERT}" --x509keyfile "${SERV_KEY}" --x509cafile "${CA_CERT}" --dhparams "${DH_PARAMS}"
PID=$!
wait_server ${PID}

"${POLARSSL_CLI}"  server_name=localhost min_version=tls1_2 max_version=tls1_2 server_port="${PORT}" crt_file="${CLI_CERT}" key_file="${CLI_KEY}" ca_file="${CA_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
	fail ${PID} "Failed"

kill ${PID}
wait

eval "${GETPORT}"
echo "${PREFIX}Check TLS 1.2 with AES-128-CCM-8-DHE-RSA ciphersuite"
launch_server  --priority "NONE:-CIPHER-ALL:+AES-128-CCM-8:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.2:+DHE-RSA${ADD}" --x509certfile "${SERV_CERT}" --x509keyfile "${SERV_KEY}" --x509cafile "${CA_CERT}" --dhparams "${DH_PARAMS}"
PID=$!
wait_server ${PID}

"${POLARSSL_CLI}"  server_name=localhost min_version=tls1_2 max_version=tls1_2 server_port="${PORT}" crt_file="${CLI_CERT}" key_file="${CLI_KEY}" ca_file="${CA_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
	fail ${PID} "Failed"

kill ${PID}
wait

#echo "${PREFIX}Check TLS 1.2 with DHE-DSS ciphersuite"
#launch_server  --priority "NONE:+CIPHER-ALL:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.2:+DHE-DSS${ADD}" --x509certfile "${SERV_DSA_CERT}" --x509keyfile "${SERV_DSA_KEY}" --dhparams "${DH_PARAMS}"
#PID=$!
#wait_server ${PID}
#
#"${POLARSSL_CLI}"  server_name=localhost min_version=tls1_2 max_version=tls1_2 server_port="${PORT}" crt_file="${CLI_CERT}" key_file="${CLI_KEY}" ca_file="${CA_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
#  fail ${PID} "Failed"
#
#kill ${PID}
#wait

eval "${GETPORT}"
echo "${PREFIX}Check TLS 1.2 with ECDHE-RSA ciphersuite"
launch_server  --priority "NONE:+CIPHER-ALL:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.2:+ECDHE-RSA:+CURVE-ALL${ADD}" --x509certfile "${SERV_CERT}" --x509keyfile "${SERV_KEY}" --x509cafile "${CA_CERT}"
PID=$!
wait_server ${PID}

#-cipher ECDHE-RSA-AES128-SHA
"${POLARSSL_CLI}"  server_name=localhost min_version=tls1_2 max_version=tls1_2 server_port="${PORT}" crt_file="${CLI_CERT}" key_file="${CLI_KEY}" ca_file="${CA_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
	fail ${PID} "Failed"

kill ${PID}
wait

if test ${ALL_CURVES} = 1; then
	eval "${GETPORT}"
	echo "${PREFIX}Check TLS 1.2 with ECDHE-ECDSA ciphersuite (SECP224R1)"
	launch_server  --priority "NONE:+CIPHER-ALL:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.2:+ECDHE-ECDSA:+CURVE-ALL${ADD}" --x509certfile "${ECC224_CERT}" --x509keyfile "${ECC224_KEY}" --x509cafile "${CA_ECC_CERT}"
	PID=$!
	wait_server ${PID}

	#-cipher ECDHE-ECDSA-AES128-SHA
	"${POLARSSL_CLI}"  server_name=localhost min_version=tls1_2 max_version=tls1_2 server_port="${PORT}" crt_file="${ECC224_CERT}" key_file="${ECC224_KEY}" ca_file="${CA_ECC_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
		fail ${PID} "Failed"

	kill ${PID}
	wait
fi

eval "${GETPORT}"
echo "${PREFIX}Check TLS 1.2 with ECDHE-ECDSA ciphersuite (SECP256R1)"
launch_server  --priority "NONE:+CIPHER-ALL:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.2:+ECDHE-ECDSA:+CURVE-ALL${ADD}" --x509certfile "${ECC256_CERT}" --x509keyfile "${ECC256_KEY}" --x509cafile "${CA_ECC_CERT}"
PID=$!
wait_server ${PID}

#-cipher ECDHE-ECDSA-AES128-SHA
"${POLARSSL_CLI}"  server_name=localhost min_version=tls1_2 max_version=tls1_2 server_port="${PORT}" crt_file="${ECC256_CERT}" key_file="${ECC256_KEY}" ca_file="${CA_ECC_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
	fail ${PID} "Failed"

kill ${PID}
wait

eval "${GETPORT}"
echo "${PREFIX}Check TLS 1.2 with ECDHE-ECDSA ciphersuite (SECP384R1)"
launch_server  --priority "NONE:+CIPHER-ALL:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.2:+ECDHE-ECDSA:+CURVE-ALL${ADD}" --x509certfile "${ECC384_CERT}" --x509keyfile "${ECC384_KEY}" --x509cafile "${CA_ECC_CERT}"
PID=$!
wait_server ${PID}

#-cipher ECDHE-ECDSA-AES128-SHA
"${POLARSSL_CLI}"  server_name=localhost min_version=tls1_2 max_version=tls1_2 server_port="${PORT}" crt_file="${ECC384_CERT}" key_file="${ECC384_KEY}" ca_file="${CA_ECC_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
	fail ${PID} "Failed"

kill ${PID}
wait

eval "${GETPORT}"
echo "${PREFIX}Check TLS 1.2 with ECDHE-ECDSA ciphersuite (SECP521R1)"
launch_server  --priority "NONE:+CIPHER-ALL:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.2:+ECDHE-ECDSA:+CURVE-ALL${ADD}" --x509certfile "${ECC521_CERT}" --x509keyfile "${ECC521_KEY}" --x509cafile "${CA_ECC_CERT}"
PID=$!
wait_server ${PID}

#-cipher ECDHE-ECDSA-AES128-SHA
"${POLARSSL_CLI}"  server_name=localhost min_version=tls1_2 max_version=tls1_2 server_port="${PORT}" crt_file="${ECC521_CERT}" key_file="${ECC521_KEY}" ca_file="${CA_ECC_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
	fail ${PID} "Failed"

kill ${PID}
wait

eval "${GETPORT}"
echo "${PREFIX}Check TLS 1.2 with PSK ciphersuite"
launch_server  --priority "NONE:+CIPHER-ALL:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.2:+PSK:+CURVE-ALL${ADD}" --pskpasswd "${SERV_PSK}" --x509certfile "${SERV_CERT}" --x509keyfile "${SERV_KEY}" --x509cafile "${CA_CERT}"
PID=$!
wait_server ${PID}

#-cipher PSK-AES128-SHA
"${POLARSSL_CLI}"  server_name=localhost psk_identity=jas psk=9e32cf7786321a828ef7668f09fb35db min_version=tls1_2 max_version=tls1_2 server_port="${PORT}" crt_file="${CLI_CERT}" key_file="${CLI_KEY}" ca_file="${CA_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
	fail ${PID} "Failed"

kill ${PID}
wait

eval "${GETPORT}"
echo "${PREFIX}Check TLS 1.2 with DHE-PSK ciphersuite"
launch_server  --priority "NONE:+CIPHER-ALL:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.2:+DHE-PSK:+CURVE-ALL${ADD}" --pskpasswd "${SERV_PSK}" --x509certfile "${SERV_CERT}" --x509keyfile "${SERV_KEY}" --x509cafile "${CA_CERT}"
PID=$!
wait_server ${PID}

#-cipher PSK-AES128-SHA
"${POLARSSL_CLI}"  server_name=localhost psk_identity=jas psk=9e32cf7786321a828ef7668f09fb35db min_version=tls1_2 max_version=tls1_2 server_port="${PORT}" crt_file="${CLI_CERT}" key_file="${CLI_KEY}" ca_file="${CA_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
	fail ${PID} "Failed"

kill ${PID}
wait

eval "${GETPORT}"
echo "${PREFIX}Check TLS 1.2 with ECDHE-PSK ciphersuite"
launch_server  --priority "NONE:+CIPHER-ALL:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.2:+ECDHE-PSK:+CURVE-ALL${ADD}" --pskpasswd "${SERV_PSK}" --x509certfile "${SERV_CERT}" --x509keyfile "${SERV_KEY}" --x509cafile "${CA_CERT}"
PID=$!
wait_server ${PID}

#-cipher PSK-AES128-SHA
"${POLARSSL_CLI}"  server_name=localhost psk_identity=jas psk=9e32cf7786321a828ef7668f09fb35db min_version=tls1_2 max_version=tls1_2 server_port="${PORT}" crt_file="${CLI_CERT}" key_file="${CLI_KEY}" ca_file="${CA_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
	fail ${PID} "Failed"

kill ${PID}
wait

eval "${GETPORT}"
echo "${PREFIX}Check TLS 1.2 with RSA-PSK ciphersuite"
launch_server  --priority "NONE:+CIPHER-ALL:+SIGN-ALL:+COMP-NULL:+MAC-ALL:+VERS-TLS1.2:+RSA-PSK:+CURVE-ALL${ADD}" --pskpasswd "${SERV_PSK}" --x509certfile "${SERV_CERT}" --x509keyfile "${SERV_KEY}" --x509cafile "${CA_CERT}"
PID=$!
wait_server ${PID}

#-cipher RSA-PSK-AES128-SHA
"${POLARSSL_CLI}"  server_name=localhost psk_identity=jas psk=9e32cf7786321a828ef7668f09fb35db min_version=tls1_2 max_version=tls1_2 server_port="${PORT}" crt_file="${CLI_CERT}" key_file="${CLI_KEY}" ca_file="${CA_CERT}" </dev/null >>"${LOGFILE}" 2>&1 || \
	fail ${PID} "Failed"

kill ${PID}
wait
