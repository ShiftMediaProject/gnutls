/*
 * Gnulib stdio.h compatibility header.
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

#ifndef SMP_STDIO_H
#ifndef _GL_ALREADY_INCLUDING_STDIO_H
#define SMP_STDIO_H
#endif

#ifndef _MSC_VER
#   include_next <stdio.h>
#else

#include <crtversion.h>
#if _VC_CRT_MAJOR_VERSION >= 14
#   include <../ucrt/stdio.h>
#else
#   include <../include/stdio.h>
#   define snprintf _snprintf
#endif

#include <unistd.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>
#include <errno.h>
#include <stdarg.h>

#ifndef SSIZE_MAX
#   define SSIZE_MAX ((ssize_t) (SIZE_MAX / 2))
#endif

#define fseeko _fseeki64
#define ftello _ftelli64

#ifndef _GL_ALREADY_INCLUDING_STDIO_H
extern FILE *rpl_fopen(const char *filename, const char *mode);
#define fopen(filename, mode) rpl_fopen(filename, mode)
#endif
extern ssize_t getdelim(char **lineptr, size_t *n, int delimiter, FILE *fp);
extern ssize_t getline(char **lineptr, size_t *n, FILE *stream);
extern int vasprintf(char **resultp, const char *format, va_list args);


#endif /* _MSC_VER */

#endif /* SMP_STDIO_H */