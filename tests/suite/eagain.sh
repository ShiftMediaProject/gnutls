#!/bin/sh

# Copyright (C) 2006-2008, 2010, 2012 Free Software Foundation, Inc.
#
# Author: Simon Josefsson
#
# This file is part of GnuTLS.
#
# GnuTLS is free software; you can redistribute it and/or modify it
# under the terms of the GNU General Public License as published by the
# Free Software Foundation; either version 3 of the License, or (at
# your option) any later version.
#
# GnuTLS is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with GnuTLS; if not, write to the Free Software Foundation,
# Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.

: ${srcdir=.}
: ${SERV=../../src/gnutls-serv${EXEEXT}}

if ! test -x "${SERV}"; then
	exit 77
fi

SERV="${SERV} -q"

. "${srcdir}/../scripts/common.sh"

eval "${GETPORT}"

KEY1=${srcdir}/../../doc/credentials/x509/key-rsa.pem
CERT1=${srcdir}/../../doc/credentials/x509/cert-rsa.pem

launch_server --echo --x509keyfile ${KEY1} --x509certfile ${CERT1}
PID=$!
wait_server ${PID}

export PORT

./eagain-cli
if [ $? != 0 ]; then
	exit 1
fi

if [ "${PID}" != "" ]; then
	kill ${PID}
	wait
fi

exit 0
