/*
 * Copyright (C) 2013 Red Hat
 *
 * Author: Nikos Mavrogiannopoulos
 *
 * This file is part of GnuTLS.
 *
 * The GnuTLS is free software; you can redistribute it and/or
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
#include "gnutls_int.h"
#include <gnutls/gnutls.h>
#include <gnutls/crypto.h>
#include <unistd.h>
#include "errors.h"
#include "file.h"
#include "inih/ini.h"
#include <fips.h>
#include <gnutls/self-test.h>
#include <stdio.h>
#include <extras/hex.h>
#include <random.h>

#include "gthreads.h"

unsigned int _gnutls_lib_state = LIB_STATE_POWERON;

struct gnutls_fips140_context_st {
	gnutls_fips140_operation_state_t state;
	struct gnutls_fips140_context_st *next;
};

#ifdef ENABLE_FIPS140

#include <dlfcn.h>

#define FIPS_KERNEL_FILE "/proc/sys/crypto/fips_enabled"
#define FIPS_SYSTEM_FILE "/etc/system-fips"

/* We provide a per-thread FIPS-mode so that an application
 * can use gnutls_fips140_set_mode() to override a specific
 * operation on a thread */
static gnutls_fips_mode_t _global_fips_mode = -1;
static _Thread_local gnutls_fips_mode_t _tfips_mode = -1;

static _Thread_local gnutls_fips140_context_t _tfips_context = NULL;

static int _skip_integrity_checks = 0;

/* Returns:
 * a gnutls_fips_mode_t value
 */
unsigned _gnutls_fips_mode_enabled(void)
{
	unsigned f1p = 0, f2p;
	FILE* fd;
	const char *p;
	unsigned ret;

	/* We initialize this threads' mode, and
	 * the global mode if not already initialized.
	 * When the global mode is initialized, then
	 * the thread mode is copied from it. As this
	 * is called on library initialization, the
	 * _global_fips_mode is always set during app run.
	 */
	if (_tfips_mode != (gnutls_fips_mode_t)-1)
		return _tfips_mode;

	if (_global_fips_mode != (gnutls_fips_mode_t)-1) {
		return _global_fips_mode;
	}

	p = secure_getenv("GNUTLS_SKIP_FIPS_INTEGRITY_CHECKS");
	if (p && p[0] == '1') {
		_skip_integrity_checks = 1;
	}

	p = secure_getenv("GNUTLS_FORCE_FIPS_MODE");
	if (p) {
		if (p[0] == '1')
			ret = GNUTLS_FIPS140_STRICT;
		else if (p[0] == '2')
			ret = GNUTLS_FIPS140_SELFTESTS;
		else if (p[0] == '3')
			ret = GNUTLS_FIPS140_LAX;
		else if (p[0] == '4')
			ret = GNUTLS_FIPS140_LOG;
		else
			ret = GNUTLS_FIPS140_DISABLED;

		goto exit;
	}

	fd = fopen(FIPS_KERNEL_FILE, "re");
	if (fd != NULL) {
		f1p = fgetc(fd);
		fclose(fd);

		if (f1p == '1') f1p = 1;
		else f1p = 0;
	}

	if (f1p != 0) {
		_gnutls_debug_log("FIPS140-2 mode enabled\n");
		ret = GNUTLS_FIPS140_STRICT;
		goto exit;
	}

	f2p = !access(FIPS_SYSTEM_FILE, F_OK);
	if (f2p != 0) {
		/* a funny state where self tests are performed
		 * and ignored */
		_gnutls_debug_log("FIPS140-2 ZOMBIE mode enabled\n");
		ret = GNUTLS_FIPS140_SELFTESTS;
		goto exit;
	}

	ret = GNUTLS_FIPS140_DISABLED;
	goto exit;

 exit:
	_global_fips_mode = ret;
	return ret;
}

/* This _fips_mode == 2 is a strange mode where checks are being
 * performed, but its output is ignored. */
void _gnutls_fips_mode_reset_zombie(void)
{
	if (_global_fips_mode == GNUTLS_FIPS140_SELFTESTS) {
		_global_fips_mode = GNUTLS_FIPS140_DISABLED;
	}
}

/* These only works with the platform where SONAME is part of the ABI.
 * For example, *_SONAME will be set to "none" on Windows platforms. */
#define GNUTLS_LIBRARY_NAME GNUTLS_LIBRARY_SONAME
#define NETTLE_LIBRARY_NAME NETTLE_LIBRARY_SONAME
#define HOGWEED_LIBRARY_NAME HOGWEED_LIBRARY_SONAME
#define GMP_LIBRARY_NAME GMP_LIBRARY_SONAME

#define HMAC_SIZE 32
#define HMAC_ALGO GNUTLS_MAC_SHA256
#define HMAC_FILE_NAME ".gnutls.hmac"
#define HMAC_FORMAT_VERSION 1

struct hmac_entry
{
	char path[GNUTLS_PATH_MAX];
	uint8_t hmac[HMAC_SIZE];
};

typedef struct
{
	int version;
	struct hmac_entry gnutls;
	struct hmac_entry nettle;
	struct hmac_entry hogweed;
	struct hmac_entry gmp;
} hmac_file;

static int get_library_path(const char* lib, const char* symbol, char* path, size_t path_size)
{
	int ret;
	void *dl, *sym;
	Dl_info info;

	dl = dlopen(lib, RTLD_LAZY);
	if (dl == NULL)
		return gnutls_assert_val(GNUTLS_E_FILE_ERROR);

	sym = dlsym(dl, symbol);
	if (sym == NULL) {
		ret = gnutls_assert_val(GNUTLS_E_FILE_ERROR);
		goto cleanup;
	}

	ret = dladdr(sym, &info);
	if (ret == 0) {
		ret = gnutls_assert_val(GNUTLS_E_FILE_ERROR);
		goto cleanup;
	}

	ret = snprintf(path, path_size, "%s", info.dli_fname);
	if ((size_t)ret >= path_size) {
		ret = gnutls_assert_val(GNUTLS_E_SHORT_MEMORY_BUFFER);
		goto cleanup;
	}

	ret = 0;
cleanup:
	dlclose(dl);
	return ret;
}

/* Parses hmac data and copies hex value into dest.
 * dest must point to at least HMAC_SIZE amount of memory
 */
static int get_hmac(uint8_t *dest, const char *value)
{
	int ret;
	size_t hmac_size;
	gnutls_datum_t data;

	data.size = strlen(value);
	data.data = (unsigned char *)value;

	hmac_size = HMAC_SIZE;
	ret = gnutls_hex_decode(&data, dest, &hmac_size);
	if (ret < 0)
		return gnutls_assert_val(GNUTLS_E_PARSING_ERROR);

	if (hmac_size != HMAC_SIZE)
		return gnutls_assert_val(GNUTLS_E_PARSING_ERROR);

	return 0;
}

static int
lib_handler(struct hmac_entry *entry,
	    const char *section, const char *name, const char *value)
{
	if (!strcmp(name, "path")) {
		snprintf(entry->path, GNUTLS_PATH_MAX, "%s", value);
	} else if (!strcmp(name, "hmac")) {
		if (get_hmac(entry->hmac, value) < 0)
			return 0;
	} else {
		return 0;
	}
	return 1;
}

static int handler(void *user, const char *section, const char *name, const char *value)
{
	hmac_file *p = (hmac_file *)user;

	if (!strcmp(section, "global")) {
		if (!strcmp(name, "format-version")) {
			p->version = strtol(value, NULL, 10);
		} else {
			return 0;
		}
	} else if (!strcmp(section, GNUTLS_LIBRARY_NAME)) {
		return lib_handler(&p->gnutls, section, name, value);
	} else if (!strcmp(section, NETTLE_LIBRARY_NAME)) {
		return lib_handler(&p->nettle, section, name, value);
	} else if (!strcmp(section, HOGWEED_LIBRARY_NAME)) {
		return lib_handler(&p->hogweed, section, name, value);
	} else if (!strcmp(section, GMP_LIBRARY_NAME)) {
		return lib_handler(&p->gmp, section, name, value);
	} else {
		return 0;
	}
	return 1;
}

static int get_hmac_path(char *mac_file, size_t mac_file_size)
{
	int ret;
	char *p;
	char file[GNUTLS_PATH_MAX];

	ret = get_library_path(GNUTLS_LIBRARY_NAME, "gnutls_global_init",
			       file, sizeof(file));
	if (ret < 0)
		return ret;

	p = strrchr(file, '/');

	if (p == NULL)
		ret = snprintf(mac_file, mac_file_size, HMAC_FILE_NAME);
	else
		ret = snprintf(mac_file, mac_file_size,
			       "%.*s/"HMAC_FILE_NAME, (int)(p - file), file);
	if ((size_t)ret >= mac_file_size)
		return gnutls_assert_val(GNUTLS_E_SHORT_MEMORY_BUFFER);

	ret = _gnutls_file_exists(mac_file);
	if (ret == 0)
		return GNUTLS_E_SUCCESS;

	if (p == NULL)
		ret = snprintf(mac_file, mac_file_size, "fipscheck/"HMAC_FILE_NAME);
	else
		ret = snprintf(mac_file, mac_file_size,
			       "%.*s/fipscheck/"HMAC_FILE_NAME, (int)(p - file), file);
	if ((size_t)ret >= mac_file_size)
		return gnutls_assert_val(GNUTLS_E_SHORT_MEMORY_BUFFER);

	ret = _gnutls_file_exists(mac_file);
	if (ret == 0)
		return GNUTLS_E_SUCCESS;

	return GNUTLS_E_FILE_ERROR;
}

static int load_hmac_file(hmac_file *p)
{
	int ret;
	FILE *stream;
	char hmac_path[GNUTLS_PATH_MAX];

	ret = get_hmac_path(hmac_path, sizeof(hmac_path));
	if (ret < 0)
		return gnutls_assert_val(ret);

	stream = fopen(hmac_path, "r");
	if (stream == NULL)
		return gnutls_assert_val(GNUTLS_E_FILE_ERROR);

	gnutls_memset(p, 0, sizeof(*p));
	ret = ini_parse_file(stream, handler, p);
	fclose(stream);
	if (ret < 0)
		return gnutls_assert_val(GNUTLS_E_PARSING_ERROR);

	if (p->version != HMAC_FORMAT_VERSION)
		return gnutls_assert_val(GNUTLS_E_PARSING_ERROR);

	return 0;
}

/* Run an HMAC using the key above on the library binary data.
 * Returns 0 on success and negative value on error.
 */
static int check_lib_hmac(struct hmac_entry *entry,
			  const char *lib, const char *sym)
{
	int ret;
	unsigned prev;
	char path[GNUTLS_PATH_MAX];
	uint8_t hmac[HMAC_SIZE];
	gnutls_datum_t data;

	ret = get_library_path(lib, sym, path, sizeof(path));
	if (ret < 0) {
		_gnutls_debug_log("Could not get lib path for %s: %s\n",
				  lib, gnutls_strerror(ret));
		return gnutls_assert_val(ret);
	}

	if (strncmp(entry->path, path, GNUTLS_PATH_MAX)) {
		_gnutls_debug_log("Library path for %s does not match with HMAC file\n", lib);
		return gnutls_assert_val(GNUTLS_E_PARSING_ERROR);
	}

	_gnutls_debug_log("Loading: %s\n", path);
	ret = gnutls_load_file(path, &data);
	if (ret < 0) {
		_gnutls_debug_log("Could not load %s: %s\n",
				  path, gnutls_strerror(ret));
		return gnutls_assert_val(ret);
	}

	prev = _gnutls_get_lib_state();
	_gnutls_switch_lib_state(LIB_STATE_OPERATIONAL);
	ret = gnutls_hmac_fast(HMAC_ALGO, FIPS_KEY, sizeof(FIPS_KEY)-1,
			       data.data, data.size, hmac);
	_gnutls_switch_lib_state(prev);

	gnutls_free(data.data);
	if (ret < 0) {
		_gnutls_debug_log("Could not calculate HMAC for %s: %s\n",
				  path, gnutls_strerror(ret));
		return gnutls_assert_val(ret);
	}

	if (gnutls_memcmp(entry->hmac, hmac, HMAC_SIZE)) {
		_gnutls_debug_log("Calculated MAC for %s does not match\n", path);
		return gnutls_assert_val(GNUTLS_E_PARSING_ERROR);
	}
	_gnutls_debug_log("Successfully verified MAC for %s\n", path);

	return 0;
}

static int check_binary_integrity(void)
{
	int ret;
	hmac_file file;

	ret = load_hmac_file(&file);
	if (ret < 0) {
		_gnutls_debug_log("Could not load hmac file: %s\n",
				  gnutls_strerror(ret));
		return ret;
	}

	ret = check_lib_hmac(&file.gnutls, GNUTLS_LIBRARY_NAME, "gnutls_global_init");
	if (ret < 0)
		return ret;
	ret = check_lib_hmac(&file.nettle, NETTLE_LIBRARY_NAME, "nettle_aes_set_encrypt_key");
	if (ret < 0)
		return ret;
	ret = check_lib_hmac(&file.hogweed, HOGWEED_LIBRARY_NAME, "nettle_mpz_sizeinbase_256_u");
	if (ret < 0)
		return ret;
	ret = check_lib_hmac(&file.gmp, GMP_LIBRARY_NAME, "__gmpz_init");
	if (ret < 0)
		return ret;

	return 0;
}

int _gnutls_fips_perform_self_checks1(void)
{
	int ret;

	/* Tests the FIPS algorithms used by nettle internally.
	 * In our case we test AES-CBC since nettle's AES is used by
	 * the DRBG-AES.
	 */

	/* ciphers - one test per cipher */
	ret = gnutls_cipher_self_test(0, GNUTLS_CIPHER_AES_128_CBC);
	if (ret < 0) {
		return gnutls_assert_val(GNUTLS_E_SELF_TEST_ERROR);
	}

	return 0;
}

int _gnutls_fips_perform_self_checks2(void)
{
	int ret;

	/* Tests the FIPS algorithms */

	/* ciphers - one test per cipher */
	ret = gnutls_cipher_self_test(0, GNUTLS_CIPHER_AES_256_CBC);
	if (ret < 0) {
		return gnutls_assert_val(GNUTLS_E_SELF_TEST_ERROR);
	}

	ret = gnutls_cipher_self_test(0, GNUTLS_CIPHER_AES_256_GCM);
	if (ret < 0) {
		return gnutls_assert_val(GNUTLS_E_SELF_TEST_ERROR);
	}

	ret = gnutls_cipher_self_test(0, GNUTLS_CIPHER_AES_256_XTS);
	if (ret < 0) {
		return gnutls_assert_val(GNUTLS_E_SELF_TEST_ERROR);
	}

	ret = gnutls_cipher_self_test(0, GNUTLS_CIPHER_AES_256_CFB8);
	if (ret < 0) {
		return gnutls_assert_val(GNUTLS_E_SELF_TEST_ERROR);
	}

	/* Digest tests */
	ret = gnutls_digest_self_test(0, GNUTLS_DIG_SHA3_224);
	if (ret < 0) {
		return gnutls_assert_val(GNUTLS_E_SELF_TEST_ERROR);
	}

	ret = gnutls_digest_self_test(0, GNUTLS_DIG_SHA3_256);
	if (ret < 0) {
		return gnutls_assert_val(GNUTLS_E_SELF_TEST_ERROR);
	}

	ret = gnutls_digest_self_test(0, GNUTLS_DIG_SHA3_384);
	if (ret < 0) {
		return gnutls_assert_val(GNUTLS_E_SELF_TEST_ERROR);
	}

	ret = gnutls_digest_self_test(0, GNUTLS_DIG_SHA3_512);
	if (ret < 0) {
		return gnutls_assert_val(GNUTLS_E_SELF_TEST_ERROR);
	}

	/* MAC (includes message digest test) */
	ret = gnutls_mac_self_test(0, GNUTLS_MAC_SHA1);
	if (ret < 0) {
		return gnutls_assert_val(GNUTLS_E_SELF_TEST_ERROR);
	}

	ret = gnutls_mac_self_test(0, GNUTLS_MAC_SHA224);
	if (ret < 0) {
		return gnutls_assert_val(GNUTLS_E_SELF_TEST_ERROR);
	}

	ret = gnutls_mac_self_test(0, GNUTLS_MAC_SHA256);
	if (ret < 0) {
		return gnutls_assert_val(GNUTLS_E_SELF_TEST_ERROR);
	}

	ret = gnutls_mac_self_test(0, GNUTLS_MAC_SHA384);
	if (ret < 0) {
		return gnutls_assert_val(GNUTLS_E_SELF_TEST_ERROR);
	}

	ret = gnutls_mac_self_test(0, GNUTLS_MAC_SHA512);
	if (ret < 0) {
		return gnutls_assert_val(GNUTLS_E_SELF_TEST_ERROR);
	}

	ret = gnutls_mac_self_test(0, GNUTLS_MAC_AES_CMAC_256);
	if (ret < 0) {
		return gnutls_assert_val(GNUTLS_E_SELF_TEST_ERROR);
	}

	/* PK */
	ret = gnutls_pk_self_test(0, GNUTLS_PK_RSA);
	if (ret < 0) {
		return gnutls_assert_val(GNUTLS_E_SELF_TEST_ERROR);
	}

	ret = gnutls_pk_self_test(0, GNUTLS_PK_DSA);
	if (ret < 0) {
		return gnutls_assert_val(GNUTLS_E_SELF_TEST_ERROR);
	}

	ret = gnutls_pk_self_test(0, GNUTLS_PK_EC);
	if (ret < 0) {
		return gnutls_assert_val(GNUTLS_E_SELF_TEST_ERROR);
	}

	ret = gnutls_pk_self_test(0, GNUTLS_PK_DH);
	if (ret < 0) {
		return gnutls_assert_val(GNUTLS_E_SELF_TEST_ERROR);
	}

	/* HKDF */
	ret = gnutls_hkdf_self_test(0, GNUTLS_MAC_SHA256);
	if (ret < 0) {
		return gnutls_assert_val(GNUTLS_E_SELF_TEST_ERROR);
	}

	/* PBKDF2 */
	ret = gnutls_pbkdf2_self_test(0, GNUTLS_MAC_SHA256);
	if (ret < 0) {
		return gnutls_assert_val(GNUTLS_E_SELF_TEST_ERROR);
	}

	/* TLS-PRF */
	ret = gnutls_tlsprf_self_test(0, GNUTLS_MAC_SHA256);
	if (ret < 0) {
		return gnutls_assert_val(GNUTLS_E_SELF_TEST_ERROR);
	}

	if (_gnutls_rnd_ops.self_test == NULL) {
		return gnutls_assert_val(GNUTLS_E_SELF_TEST_ERROR);
	}

	/* this does not require rng initialization */
	ret = _gnutls_rnd_ops.self_test();
	if (ret < 0) {
		return gnutls_assert_val(GNUTLS_E_SELF_TEST_ERROR);
	}

	if (_skip_integrity_checks == 0) {
		ret = check_binary_integrity();
		if (ret < 0) {
			return gnutls_assert_val(GNUTLS_E_SELF_TEST_ERROR);
		}
	}

	return 0;
}
#endif

/**
 * gnutls_fips140_mode_enabled:
 *
 * Checks whether this library is in FIPS140 mode. The returned
 * value corresponds to the library mode as set with
 * gnutls_fips140_set_mode().
 *
 * If gnutls_fips140_set_mode() was called with %GNUTLS_FIPS140_SET_MODE_THREAD
 * then this function will return the current thread's FIPS140 mode, otherwise
 * the global value is returned.
 *
 * Returns: return non-zero if true or zero if false.
 *
 * Since: 3.3.0
 **/
unsigned gnutls_fips140_mode_enabled(void)
{
#ifdef ENABLE_FIPS140
	unsigned ret = _gnutls_fips_mode_enabled();

	if (ret > GNUTLS_FIPS140_DISABLED) {
		/* If the previous run of selftests has failed, return as if
		 * the FIPS mode is disabled. We could use HAVE_LIB_ERROR, if
		 * we can assume that all the selftests run atomically from
		 * the ELF constructor.
		 */
		if (_gnutls_get_lib_state() == LIB_STATE_ERROR)
			return 0;

		return ret;
	}
#endif
	return 0;
}

/**
 * gnutls_fips140_set_mode:
 * @mode: the FIPS140-2 mode to switch to
 * @flags: should be zero or %GNUTLS_FIPS140_SET_MODE_THREAD
 *
 * That function is not thread-safe when changing the mode with no flags
 * (globally), and should be called prior to creating any threads. Its
 * behavior with no flags after threads are created is undefined.
 *
 * When the flag %GNUTLS_FIPS140_SET_MODE_THREAD is specified
 * then this call will change the FIPS140-2 mode for this particular
 * thread and not for the whole process. That way an application
 * can utilize this function to set and reset mode for specific
 * operations.
 *
 * This function never fails but will be a no-op if used when
 * the library is not in FIPS140-2 mode. When asked to switch to unknown
 * values for @mode or to %GNUTLS_FIPS140_SELFTESTS mode, the library
 * switches to %GNUTLS_FIPS140_STRICT mode.
 *
 * Since: 3.6.2
 **/
void gnutls_fips140_set_mode(gnutls_fips_mode_t mode, unsigned flags)
{
#ifdef ENABLE_FIPS140
	gnutls_fips_mode_t prev = _gnutls_fips_mode_enabled();
	if (prev == GNUTLS_FIPS140_DISABLED || prev == GNUTLS_FIPS140_SELFTESTS) {
		/* we need to run self-tests first to be in FIPS140-2 mode */
		_gnutls_audit_log(NULL, "The library should be initialized in FIPS140-2 mode to do that operation\n");
		return;
	}

	switch (mode) {
		case GNUTLS_FIPS140_STRICT:
		case GNUTLS_FIPS140_LAX:
		case GNUTLS_FIPS140_LOG:
		case GNUTLS_FIPS140_DISABLED:
			break;
		case GNUTLS_FIPS140_SELFTESTS:
			_gnutls_audit_log(NULL, "Cannot switch library to FIPS140-2 self-tests mode; defaulting to strict\n");
			mode = GNUTLS_FIPS140_STRICT;
			break;
		default:
			_gnutls_audit_log(NULL, "Cannot switch library to mode %u; defaulting to strict\n", (unsigned)mode);
			mode = GNUTLS_FIPS140_STRICT;
			break;
	}

	if (flags & GNUTLS_FIPS140_SET_MODE_THREAD)
		_tfips_mode = mode;
	else {
		_global_fips_mode = mode;
		_tfips_mode = -1;
	}
#endif
}

void _gnutls_lib_simulate_error(void)
{
	_gnutls_switch_lib_state(LIB_STATE_ERROR);
}

void _gnutls_lib_force_operational(void)
{
	_gnutls_switch_lib_state(LIB_STATE_OPERATIONAL);
}

/**
 * gnutls_fips140_context_init:
 * @context: location to store @gnutls_fips140_context_t
 *
 * Create and initialize the FIPS context object.
 *
 * Returns: 0 upon success, a negative error code otherwise
 *
 * Since: 3.7.3
 */
int
gnutls_fips140_context_init(gnutls_fips140_context_t *context)
{
	*context = gnutls_malloc(sizeof(struct gnutls_fips140_context_st));
	if (!*context) {
		return gnutls_assert_val(GNUTLS_E_MEMORY_ERROR);
	}
	(*context)->state = GNUTLS_FIPS140_OP_INITIAL;
	return 0;
}

/**
 * gnutls_fips140_context_deinit:
 * @context: a #gnutls_fips140_context_t
 *
 * Uninitialize and release the FIPS context @context.
 *
 * Since: 3.7.3
 */
void
gnutls_fips140_context_deinit(gnutls_fips140_context_t context)
{
	gnutls_free(context);
}

/**
 * gnutls_fips140_get_operation_state:
 * @context: a #gnutls_fips140_context_t
 *
 * Get the previous operation state of @context in terms of FIPS.
 *
 * Returns: a #gnutls_fips140_operation_state_t
 *
 * Since: 3.7.3
 */
gnutls_fips140_operation_state_t
gnutls_fips140_get_operation_state(gnutls_fips140_context_t context)
{
	return context->state;
}

/**
 * gnutls_fips140_push_context:
 * @context: a #gnutls_fips140_context_t
 *
 * Associate the FIPS @context to the current thread, diverting the
 * currently active context. If a cryptographic operation is ongoing
 * in the current thread, e.g., gnutls_aead_cipher_init() is called
 * but gnutls_aead_cipher_deinit() is not yet called, it returns an
 * error %GNUTLS_E_INVALID_REQUEST.
 *
 * The operation state of @context will be reset to
 * %GNUTLS_FIPS140_OP_INITIAL.
 *
 * This function is no-op if FIPS140 is not compiled in nor enabled
 * at run-time.
 *
 * Returns: 0 upon success, a negative error code otherwise
 *
 * Since: 3.7.3
 */
int
gnutls_fips140_push_context(gnutls_fips140_context_t context)
{
#ifdef ENABLE_FIPS140
	if (_gnutls_fips_mode_enabled() != GNUTLS_FIPS140_DISABLED) {
		context->next = _tfips_context;
		_tfips_context = context;

		context->state = GNUTLS_FIPS140_OP_INITIAL;
	}
	return 0;
#else
	return GNUTLS_E_INVALID_REQUEST;
#endif
}

/**
 * gnutls_fips140_pop_context:
 *
 * Dissociate the FIPS context currently
 * active on the current thread, reverting to the previously active
 * context. If a cryptographic operation is ongoing in the current
 * thread, e.g., gnutls_aead_cipher_init() is called but
 * gnutls_aead_cipher_deinit() is not yet called, it returns an error
 * %GNUTLS_E_INVALID_REQUEST.
 *
 * This function is no-op if FIPS140 is not compiled in nor enabled
 * at run-time.
 *
 * Returns: 0 upon success, a negative error code otherwise
 *
 * Since: 3.7.3
 */
int
gnutls_fips140_pop_context(void)
{
#ifdef ENABLE_FIPS140
	if (_gnutls_fips_mode_enabled() != GNUTLS_FIPS140_DISABLED) {
		if (!_tfips_context) {
			return gnutls_assert_val(GNUTLS_E_INVALID_REQUEST);
		}

		_tfips_context = _tfips_context->next;
	}
	return 0;
#else
	return GNUTLS_E_INVALID_REQUEST;
#endif
}

#ifdef ENABLE_FIPS140

static inline const char *
operation_state_to_string(gnutls_fips140_operation_state_t state)
{
	switch (state) {
	case GNUTLS_FIPS140_OP_INITIAL:
		return "initial";
	case GNUTLS_FIPS140_OP_APPROVED:
		return "approved";
	case GNUTLS_FIPS140_OP_NOT_APPROVED:
		return "not-approved";
	case GNUTLS_FIPS140_OP_ERROR:
		return "error";
	default:
		/*NOTREACHED*/
		assert(0);
		return NULL;
	}
}

void
_gnutls_switch_fips_state(gnutls_fips140_operation_state_t state)
{
	gnutls_fips_mode_t mode = _gnutls_fips_mode_enabled();
	if (mode == GNUTLS_FIPS140_DISABLED) {
		return;
	}

	if (!_tfips_context) {
		_gnutls_debug_log("FIPS140-2 context is not set\n");
		return;
	}

	if (_tfips_context->state == state) {
		return;
	}

	switch (_tfips_context->state) {
	case GNUTLS_FIPS140_OP_INITIAL:
		/* initial can be transitioned to any state */
		if (mode != GNUTLS_FIPS140_LAX) {
			_gnutls_audit_log(NULL, "FIPS140-2 operation mode switched from initial to %s\n",
					  operation_state_to_string(state));
		}
		_tfips_context->state = state;
		break;
	case GNUTLS_FIPS140_OP_APPROVED:
		/* approved can only be transitioned to not-approved */
		if (likely(state == GNUTLS_FIPS140_OP_NOT_APPROVED)) {
			if (mode != GNUTLS_FIPS140_LAX) {
				_gnutls_audit_log(NULL, "FIPS140-2 operation mode switched from approved to %s\n",
						  operation_state_to_string(state));
			}
			_tfips_context->state = state;
			return;
		}
		FALLTHROUGH;
	default:
		/* other transitions are prohibited */
		if (mode != GNUTLS_FIPS140_LAX) {
			_gnutls_audit_log(NULL, "FIPS140-2 operation mode cannot be switched from %s to %s\n",
					  operation_state_to_string(_tfips_context->state),
					  operation_state_to_string(state));
		}
		break;
	}
}

#else

void
_gnutls_switch_fips_state(gnutls_fips140_operation_state_t state)
{
	(void)state;
}

#endif

/**
 * gnutls_fips140_run_self_tests:
 *
 * Manually perform the second round of the FIPS140 self-tests,
 * including:
 *
 * - Known answer tests (KAT) for the selected set of symmetric
 *   cipher, MAC, public key, KDF, and DRBG
 * - Library integrity checks
 *
 * Upon failure with FIPS140 mode enabled, it makes the library
 * unusable.  This function is not thread-safe.
 *
 * Returns: 0 upon success, a negative error code otherwise
 *
 * Since: 3.7.7
 */
int
gnutls_fips140_run_self_tests(void)
{
#ifdef ENABLE_FIPS140
	int ret;
	unsigned prev_lib_state;
	gnutls_fips140_context_t fips_context = NULL;

	/* Save the FIPS context, because self tests change it */
	if (gnutls_fips140_mode_enabled() != GNUTLS_FIPS140_DISABLED) {
		if (gnutls_fips140_context_init(&fips_context) < 0 ||
		    gnutls_fips140_push_context(fips_context) < 0) {
			gnutls_fips140_context_deinit(fips_context);
			fips_context = NULL;
		}
	}

	/* Temporarily switch to LIB_STATE_SELFTEST as some of the
	 * algorithms are implemented using special constructs in
	 * self-tests (such as deterministic variants) */
	prev_lib_state = _gnutls_get_lib_state();
	_gnutls_switch_lib_state(LIB_STATE_SELFTEST);

	ret = _gnutls_fips_perform_self_checks2();
	if (gnutls_fips140_mode_enabled() != GNUTLS_FIPS140_DISABLED &&
	    ret < 0) {
		_gnutls_switch_lib_state(LIB_STATE_ERROR);
		_gnutls_audit_log(NULL, "FIPS140-2 self testing part 2 failed\n");
	} else {
		/* Restore the previous library state */
		_gnutls_switch_lib_state(prev_lib_state);
	}

	/* Restore the previous FIPS context */
	if (gnutls_fips140_mode_enabled() != GNUTLS_FIPS140_DISABLED && fips_context) {
		if (gnutls_fips140_pop_context() < 0) {
			_gnutls_switch_lib_state(LIB_STATE_ERROR);
			_gnutls_audit_log(NULL, "FIPS140-2 context restoration failed\n");
		}
		gnutls_fips140_context_deinit(fips_context);
	}
	return ret;
#else
	return 0;
#endif
}
