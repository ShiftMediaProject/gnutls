#!/bin/bash

# Copyright (C) 2016-2017 Red Hat, Inc.
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

tls_fuzzer_prepare() {
PRIORITY="NORMAL:-VERS-ALL:+VERS-TLS1.3:+VERS-TLS1.2:+VERS-TLS1.1:+AES-128-CCM:+AES-256-CCM:+AES-128-CCM-8"

sed -e "s|@SERVER@|$SERV|g" -e "s/@PORT@/$PORT/g" -e "s/@PRIORITY@/$PRIORITY/g" ../gnutls-nocert-tls13.json >${TMPFILE}
}

. "${srcdir}/tls-fuzzer/tls-fuzzer-common.sh"
