/*
 * Copyright (C) 2017-2018 Red Hat, Inc.
 *
 * Author: Nikos Mavrogiannopoulos
 *
 * This file is part of GnuTLS.
 *
 * GnuTLS is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * GnuTLS is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>
 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h>
#include <stdlib.h>

#if defined(_WIN32)

int main()
{
	exit(77);
}

#else

#include <string.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <gnutls/gnutls.h>
#include <gnutls/dtls.h>
#include <assert.h>
#include <signal.h>

#include "cert-common.h"
#include "utils.h"
#include "tls13/ext-parse.h"

/* This program tests whether the version in Hello Retry Request message
 * is the expected */

const char *testname = "";

#define myfail(fmt, ...) \
	fail("%s: "fmt, testname, ##__VA_ARGS__)

static void server_log_func(int level, const char *str)
{
	fprintf(stderr, "server|<%d>| %s", level, str);
}

static void client_log_func(int level, const char *str)
{
	fprintf(stderr, "client|<%d>| %s", level, str);
}

#define HANDSHAKE_SESSION_ID_POS 34

struct ctx_st {
	unsigned hrr_seen;
	unsigned hello_counter;
	uint8_t session_id[32];
	size_t session_id_len;
};

static int hello_callback(gnutls_session_t session, unsigned int htype,
			  unsigned post, unsigned int incoming, const gnutls_datum_t *msg)
{
	struct ctx_st *ctx = gnutls_session_get_ptr(session);
	assert(ctx != NULL);

	if (htype == GNUTLS_HANDSHAKE_HELLO_RETRY_REQUEST)
		ctx->hrr_seen = 1;

	if (htype == GNUTLS_HANDSHAKE_CLIENT_HELLO && post == GNUTLS_HOOK_POST) {
		size_t session_id_len;
		uint8_t *session_id;

		assert(msg->size > HANDSHAKE_SESSION_ID_POS + 1);
		session_id_len = msg->data[HANDSHAKE_SESSION_ID_POS];
		session_id = &msg->data[HANDSHAKE_SESSION_ID_POS + 1];

		if (ctx->hello_counter > 0) {
			assert(msg->size > 4);
			if (msg->data[0] != 0x03 || msg->data[1] != 0x03) {
				fail("version is %d.%d expected 3,3\n", (int)msg->data[0], (int)msg->data[1]);
			}

			if (session_id_len != ctx->session_id_len ||
			    memcmp(session_id, ctx->session_id, session_id_len) != 0) {
				fail("different legacy_session_id is sent after HRR\n");
			}
		}

		ctx->session_id_len = session_id_len;
		memcpy(ctx->session_id, session_id, session_id_len);

		ctx->hello_counter++;
	}

	return 0;
}


static void client(int fd)
{
	int ret;
	gnutls_certificate_credentials_t x509_cred;
	gnutls_session_t session;
	struct ctx_st ctx;

	memset(&ctx, 0, sizeof(ctx));

	if (debug) {
		gnutls_global_set_log_function(client_log_func);
		gnutls_global_set_log_level(7);
	}

	assert(gnutls_certificate_allocate_credentials(&x509_cred)>=0);

	assert(gnutls_init(&session, GNUTLS_CLIENT|GNUTLS_KEY_SHARE_TOP)>=0);

	gnutls_handshake_set_timeout(session, get_timeout());
	gnutls_session_set_ptr(session, &ctx);

	ret = gnutls_priority_set_direct(session, "NORMAL:-VERS-ALL:+VERS-TLS1.3:-GROUP-ALL:+GROUP-SECP256R1:+GROUP-X25519", NULL);
	if (ret < 0)
		myfail("cannot set TLS 1.3 priorities\n");

	gnutls_credentials_set(session, GNUTLS_CRD_CERTIFICATE, x509_cred);

	gnutls_handshake_set_hook_function(session, GNUTLS_HANDSHAKE_ANY,
					   GNUTLS_HOOK_BOTH,
					   hello_callback);

	gnutls_transport_set_int(session, fd);

	do {
		ret = gnutls_handshake(session);
	}
	while (ret < 0 && gnutls_error_is_fatal(ret) == 0);

	assert(ctx.hrr_seen != 0);

	close(fd);

	gnutls_deinit(session);

	gnutls_certificate_free_credentials(x509_cred);
}

static void server(int fd)
{
	int ret;
	gnutls_session_t session;
	gnutls_certificate_credentials_t x509_cred;

	if (debug) {
		gnutls_global_set_log_function(server_log_func);
		gnutls_global_set_log_level(4711);
	}

	assert(gnutls_certificate_allocate_credentials(&x509_cred)>=0);
	assert(gnutls_certificate_set_x509_key_mem(x509_cred, &server_cert,
						   &server_key,
						   GNUTLS_X509_FMT_PEM)>=0);

	gnutls_init(&session, GNUTLS_SERVER);

	gnutls_handshake_set_timeout(session, get_timeout());

	/* server only supports x25519, client advertises secp256r1 */
	assert(gnutls_priority_set_direct(session, "NORMAL:-VERS-ALL:+VERS-TLS1.3:-GROUP-ALL:+GROUP-X25519", NULL)>=0);

	gnutls_credentials_set(session, GNUTLS_CRD_CERTIFICATE, x509_cred);

	gnutls_transport_set_int(session, fd);

	do {
		ret = gnutls_handshake(session);
		if (ret == GNUTLS_E_INTERRUPTED) { /* expected */
			break;
		}
	} while (ret < 0 && gnutls_error_is_fatal(ret) == 0);

	if (ret < 0)
		myfail("handshake error: %s\n", gnutls_strerror(ret));

	if (gnutls_group_get(session) != GNUTLS_GROUP_X25519)
		myfail("group doesn't match the expected: %s\n", gnutls_group_get_name(gnutls_group_get(session)));

	close(fd);
	gnutls_deinit(session);

	gnutls_certificate_free_credentials(x509_cred);
}

static void ch_handler(int sig)
{
	int status = 0;
	wait(&status);
	check_wait_status(status);
	return;
}

void doit(void)
{
	int fd[2];
	int ret;
	pid_t child;

	signal(SIGCHLD, ch_handler);
	signal(SIGPIPE, SIG_IGN);

	ret = socketpair(AF_UNIX, SOCK_STREAM, 0, fd);
	if (ret < 0) {
		perror("socketpair");
		exit(1);
	}

	child = fork();
	if (child < 0) {
		perror("fork");
		fail("fork");
		exit(1);
	}

	if (child) {
		/* parent */
		close(fd[1]);
		client(fd[0]);
		kill(child, SIGTERM);
	} else {
		close(fd[0]);
		server(fd[1]);
		exit(0);
	}
}

#endif				/* _WIN32 */
