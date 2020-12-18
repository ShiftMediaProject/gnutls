/* cmac-magma.c - GOST R 34.12-2015 (Magma) cipher implementation
 *
 * Copyright: 2017 Dmitry Eremin-Solenikov <dbaryshkov@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#if HAVE_CONFIG_H
#include "config.h"
#endif

#ifndef HAVE_NETTLE_CMAC_MAGMA_UPDATE

#include <nettle/cmac.h>

#include "magma.h"
#include "cmac.h"

void
cmac_magma_set_key(struct cmac_magma_ctx *ctx, const uint8_t *key)
{
  CMAC64_SET_KEY(ctx, magma_set_key, magma_encrypt, key);
}

void
cmac_magma_update (struct cmac_magma_ctx *ctx,
		   size_t length, const uint8_t *data)
{
  CMAC64_UPDATE (ctx, magma_encrypt, length, data);
}

void
cmac_magma_digest(struct cmac_magma_ctx *ctx,
		  size_t length, uint8_t *digest)
{
  CMAC64_DIGEST(ctx, magma_encrypt, length, digest);
}
#endif
