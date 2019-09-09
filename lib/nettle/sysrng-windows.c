/*
 * Copyright (C) 2010-2016 Free Software Foundation, Inc.
 * Copyright (C) 2015-2016 Red Hat, Inc.
 * Copyright (C) 2000, 2001, 2008 Niels Möller
 *
 * Author: Nikos Mavrogiannopoulos
 *
 * This file is part of GNUTLS.
 *
 * The GNUTLS library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>
 *
 */

/* Here are the common parts of the random generator layer. 
 * Some of this code was based on the LSH 
 * random generator (the trivia and device source functions for POSIX)
 * and modified to fit gnutls' needs. Relicenced with permission. 
 * Original author Niels Möller.
 */

#include "gnutls_int.h"
#include "errors.h"
#include <locks.h>
#include <num.h>
#include <nettle/yarrow.h>
#include <errno.h>
#include <rnd-common.h>
#include <hash-pjw-bare.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/* The windows randomness gatherer.
 */

#include <windows.h>
#include <wincrypt.h>

get_entropy_func _rnd_get_system_entropy = NULL;

#if defined(WINAPI_FAMILY_PARTITION) && WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) && !WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
 #define WINRT
 static BCRYPT_ALG_HANDLE device_fd = 0;
#else
static HCRYPTPROV device_fd = 0;
#endif

static
int _rnd_get_system_entropy_win32(void* rnd, size_t size)
{
#ifdef WINRT
	NTSTATUS status;
	if (!BCRYPT_SUCCESS(status = BCryptGenRandom(device_fd, rnd, (ULONG)size, 0))) {
		_gnutls_debug_log("Error in BCryptGenRandom: %s\n",
						  status);
		return GNUTLS_E_RANDOM_DEVICE_ERROR;
	}
#else
	if (!CryptGenRandom(device_fd, (DWORD) size, rnd)) {
		_gnutls_debug_log("Error in CryptGenRandom: %d\n",
					(int)GetLastError());
		return GNUTLS_E_RANDOM_DEVICE_ERROR;
	}
#endif 

	return 0;
}

int _rnd_system_entropy_check(void)
{
	return 0;
}

int _rnd_system_entropy_init(void)
{
#ifdef WINRT
	NTSTATUS status;
	if (!BCRYPT_SUCCESS(status = BCryptOpenAlgorithmProvider(&device_fd, BCRYPT_RNG_ALGORITHM, NULL, 0))) {
		_gnutls_debug_log("error in BCryptOpenAlgorithmProvider: %s\n",
						  status);
		return GNUTLS_E_RANDOM_DEVICE_ERROR;
	}
#else
	if (!CryptAcquireContext
		(&device_fd, NULL, NULL, PROV_RSA_FULL,
		 CRYPT_SILENT | CRYPT_VERIFYCONTEXT)) {
		_gnutls_debug_log
			("error in CryptAcquireContext!\n");
		return GNUTLS_E_RANDOM_DEVICE_ERROR;
	}
#endif

	_rnd_get_system_entropy = _rnd_get_system_entropy_win32;
	return 0;
}

void _rnd_system_entropy_deinit(void)
{
#ifdef WINRT
	BCryptCloseAlgorithmProvider(device_fd, 0);
#else
	CryptReleaseContext(device_fd, 0);
#endif
}
