#!/bin/sh
# Copyright (C) 2017 Red Hat, Inc.
#
# This file is part of GnuTLS.
#
# This file is free software; you can redistribute it and/or modify it
# under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3 of the License, or
# (at your option) any later version.
#
# This file is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>

srcdir="${srcdir:-.}"
export LD_LIBRARY_PATH=${srcdir}/../lib/.libs/

cat ${srcdir}/../config.log|grep afl-gcc >/dev/null 2>&1
if test $? != 0;then
	echo "compile first library as:"
	echo "CC=afl-gcc ./configure"
	exit 1
else
	fuzz=afl-gcc
fi

if test -z "$1";then
	echo "Usage: $0 test-case"
	echo "Example: $0 gnutls_x509_parser_fuzzer"
	exit 1
fi

TEST=$1
rm -f ${TEST}
export LD_LIBRARY_PATH=$(pwd)/../lib/.libs/
export CFLAGS="-g -O2 -I/usr/local/include -I../lib/includes -I.."
${fuzz} ${CFLAGS} -o ${TEST} main.c ${TEST}.c -L../lib/.libs/ -lgnutls || exit 1

TMPOUT=${TEST}.$$.out
mkdir -p ${TMPOUT}
afl-fuzz -i ${TEST}.in -o ${TMPOUT} -- ./${TEST}

echo "output was stored in $TMPOUT"

exit 0
