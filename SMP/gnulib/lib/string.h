/*
 * GNUlib string.h compatibility header.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef SMP_STRING_H
#define SMP_STRING_H

#ifndef _MSC_VER
#   include_next <string.h>
#else

#include <crtversion.h>
#if _VC_CRT_MAJOR_VERSION >= 14
#   include <../ucrt/string.h>
#else
#   include <../include/string.h>
#   define strtoll _strtoi64
#endif

#include <stdint.h>
#include <ctype.h>

#define  S_N    0x0
#define  S_I    0x3
#define  S_F    0x6
#define  S_Z    0x9

#define  CMP    2
#define  LEN    3

#define strtok_r strtok_s
#define strcasecmp _stricmp
#define strncasecmp _strnicmp

extern void *rpl_memmem(const void *haystack, size_t haystack_len, const void *needle, size_t needle_len);
#define memmem rpl_memmem
extern int rpl_strverscmp(const char *s1, const char *s2);
#define strverscmp rpl_strverscmp
extern void rpl_explicit_bzero(void *s, size_t len);
#define explicit_bzero rpl_explicit_bzero

__inline void mbszero (mbstate_t *ps) { memset (ps, 0, sizeof(mbstate_t)); }

#endif /* _MSC_VER */

#endif /* SMP_STRING_H */