/*
 * Copyright (C) 2001 Nikos Mavroyanopoulos <nmav@hellug.gr>
 *
 * This file is part of GNUTLS.
 *
 * GNUTLS-EXTRA is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * GNUTLS-EXTRA is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */

#include "gnutls_int.h"

#ifdef ENABLE_SRP

/* this a modified base64 for srp !!! 
 * It seems that everybody makes it's own base64 convertion.
 */
static const uint8 b64table[64] =
    "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz./";

static const uint8 asciitable[128] = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0x3e, 0x3f,
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05,
	0x06, 0x07, 0x08, 0x09, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0x0a,
	0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10,
	0x11, 0x12, 0x13, 0x14, 0x15, 0x16,
	0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c,
	0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22,
	0x23, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0x24, 0x25, 0x26, 0x27, 0x28,
	0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e,
	0x2f, 0x30, 0x31, 0x32, 0x33, 0x34,
	0x35, 0x36, 0x37, 0x38, 0x39, 0x3a,
	0x3b, 0x3c, 0x3d, 0xff, 0xff, 0xff,
	0xff, 0xff
};

inline static int encode(uint8 * result, const uint8 * rdata, int left)
{

	int data_len;
	int c, ret = 4;
	uint8 data[3];

	if (left > 3)
		data_len = 3;
	else
		data_len = left;

	data[0] = data[1] = data[2] = 0;
	memcpy(data, rdata, data_len);

	switch (data_len) {
	case 3:
		result[0] = b64table[((data[0] & 0xfc) >> 2)];
		result[1] =
		    b64table[(((((data[0] & 0x03) & 0xff) << 4) & 0xff) |
			      ((data[1] & 0xf0) >> 4))];
		result[2] =
		    b64table[((((data[1] & 0x0f) << 2) & 0xff) |
			      ((data[2] & 0xc0) >> 6))];
		result[3] = b64table[(data[2] & 0x3f) & 0xff];
		break;
	case 2:
		if ((c = ((data[0] & 0xf0) >> 4)) != 0) {
			result[0] = b64table[c];
			result[1] =
			    b64table[((((data[0] & 0x0f) << 2) & 0xff) |
				      ((data[1] & 0xc0) >> 6))];
			result[2] = b64table[(data[1] & 0x3f) & 0xff];
			result[3] = '\0';
			ret -= 1;
		} else {
			if ((c =
			     ((data[0] & 0x0f) << 2) | ((data[1] & 0xc0) >>
							6)) != 0) {
				result[0] = b64table[c];
				result[1] = b64table[data[1] & 0x3f];
				result[2] = '\0';
				result[3] = '\0';
				ret -= 2;
			} else {
				result[0] = b64table[data[0] & 0x3f];
				result[1] = '\0';
				result[2] = '\0';
				result[3] = '\0';
				ret -= 3;
			}
		}
		break;
	case 1:
		if ((c = ((data[0] & 0xc0) >> 6)) != 0) {
			result[0] = b64table[c];
			result[1] = b64table[(data[0] & 0x3f) & 0xff];
			result[2] = '\0';
			result[3] = '\0';
			ret -= 2;
		} else {
			result[0] = b64table[(data[0] & 0x3f) & 0xff];
			result[1] = '\0';
			result[2] = '\0';
			result[3] = '\0';
			ret -= 3;
		}
		break;
	default:
		return -1;
	}

	return ret;

}

/* encodes data and puts the result into result (localy alocated)
 * The result_size is the return value
 */
int _gnutls_sbase64_encode(uint8 * data, size_t data_size, uint8 ** result)
{
	uint i,j;
	int ret, tmp;
	char tmpres[4];
	int mod = data_size % 3;

	ret = mod;
	if (ret != 0)
		ret = 4;
	else
		ret = 0;

	ret += (data_size * 4) / 3;

	(*result) = gnutls_calloc( 1, ret + 1);
	if ((*result) == NULL)
		return -1;

	i = j = 0;
/* encode the bytes that are not a multiple of 3 
 */
	if (mod > 0) {
		tmp = encode(tmpres, &data[0], mod);
		if (tmp < 0) {
			gnutls_free( (*result));
			return tmp;
		}

		memcpy(&(*result)[0], tmpres, tmp);
		i = mod;
		j = tmp;

	}
/* encode the rest
 */
	for (; i < data_size; i += 3, j += 4) {
		tmp = encode(tmpres, &data[i], data_size - i);
		if (tmp < 0) {
			gnutls_free( (*result));
			return tmp;
		}
		memcpy(&(*result)[j], tmpres, tmp);
	}

	return strlen(*result);
}


/* data must be 4 bytes
 * result should be 3 bytes
 */
#define TOASCII(c) (c < 127 ? asciitable[c] : 0xff)
inline static int decode(uint8 * result, const uint8 * data)
{
	uint8 a1, a2;
	int ret = 3;

	memset( result, 0, 3);

	a1 = TOASCII(data[3]);
	a2 = TOASCII(data[2]);
	if (a1 != 0xff) result[2] = a1 & 0xff;
	else return -1;
	if (a2 != 0xff) result[2] |= ((a2 & 0x03) << 6) & 0xff;

	a1 = a2;
	a2 = TOASCII(data[1]);
	if (a1 != 0xff) result[1] = ((a1 & 0x3c) >> 2);
	if (a2 != 0xff) result[1] |= ((a2 & 0x0f) << 4);
	else if (a1==0xff || result[1] == 0) ret--;
	
	a1 = a2;
	a2 = TOASCII(data[0]);
	if (a1 != 0xff) result[0] = (((a1 & 0x30) >> 4) & 0xff);
	if (a2 != 0xff) result[0] |= ((a2 << 2) & 0xff);
	else if (a1==0xff || result[0] == 0) ret--;

	return ret;
}

/* decodes data and puts the result into result (localy alocated)
 * The result_size is the return value.
 * That function does not ignore newlines tabs etc. You should remove them
 * before calling it.
 */
int _gnutls_sbase64_decode(uint8 * data, size_t idata_size, uint8 ** result)
{
	uint i,j;
	int ret, left;
	int data_size, tmp;
	uint8 datrev[4];
	uint8 tmpres[3];

	data_size = (idata_size/4)*4;
	left = idata_size % 4;

	ret = (data_size / 4) * 3;

	if (left > 0)
		ret += 3;

	(*result) = gnutls_malloc(ret+1);
	if ((*result) == NULL)
		return -1;

	/* the first "block" is treated with special care */
	tmp = 0;
	if (left > 0) {
		memset( datrev, 0, 4);
		memcpy( &datrev[4-left], data, left);
		
		tmp = decode( tmpres, datrev);
		if (tmp < 0) {
			gnutls_free( (*result));
			return tmp;
		}

		memcpy( *result, &tmpres[3-tmp], tmp);
		if (tmp < 3)
			ret -= (3 - tmp);
	}

	/* rest data */
	for (i = left, j = tmp; i < idata_size; i += 4) {
		tmp = decode(tmpres, &data[i]);
		if (tmp < 0) {
			gnutls_free( (*result));
			return tmp;
		}
		memcpy(&(*result)[j], tmpres, tmp);
		if (tmp < 3)
			ret -= (3 - tmp);
		j += 3;
	}

	return ret;
}

#ifdef B64_TEST
int main()
{
	char x[100 * 1024];
	int siz;
	uint8 *b64;

/*	for (i = 0; i < 128; i++) {
		if (i % 6 == 0)
			fprintf(stdout, "\n");
		if (strchr(b64table, i) == NULL)
			fprintf(stdout, "0x%.2x, ", 0xff);
		else
			fprintf(stdout, "0x%.2x, ",
				(int) ((int) index(b64table, i) -
				       (int) b64table));


	}
	return 0;*/
	siz = fread(x, 1, sizeof(x), stdin);

//	siz = _gnutls_sbase64_encode(x, siz, &b64);
	siz = _gnutls_sbase64_decode(x, siz, &b64);


	if (siz < 0) {
		_gnutls_log( "ERROR %d\n", siz);
		exit(1);
	}

	fwrite(b64, siz, 1, stdout);
	return 0;


}
#endif

#endif /* ENABLE_SRP */
