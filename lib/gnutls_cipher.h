/*
 *      Copyright (C) 2000 Nikos Mavroyanopoulos
 *
 * This file is part of GNUTLS.
 *
 * GNUTLS is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * GNUTLS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */

int _gnutls_encrypt( gnutls_session session, const char* headers, size_t headers_size, const char* data, size_t data_size, 
	opaque* ciphertext, size_t ciphertext_size, ContentType type, int random_pad);

int _gnutls_decrypt(gnutls_session session, char *ciphertext,
		    size_t ciphertext_size, uint8 * data, size_t data_size,
		    ContentType type);
int _gnutls_compressed2ciphertext(gnutls_session session, opaque* cipher_data, int cipher_size, gnutls_datum compressed, 
	ContentType _type, int random_pad);
int _gnutls_ciphertext2compressed(gnutls_session session, opaque * compress_data, int compress_size, 
	gnutls_datum ciphertext, uint8 type);
