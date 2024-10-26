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

#ifndef _GL_ALREADY_INCLUDING_STDIO_H
extern FILE *rpl_fopen(const char *filename, const char *mode);
#define fopen rpl_fopen
extern int rpl_fclose(FILE *stream);
#define fclose rpl_fclose
extern FILE *rpl_fdopen(int fd, const char *mode);
#define fdopen rpl_fdopen
extern int rpl_fflush(FILE *gl_stream);
#define fflush rpl_fflush
extern int rpl_fprintf(FILE *restrict fp, const char *restrict format, ...);
#define fprintf rpl_fprintf
#define GNULIB_overrides_fprintf 1
extern int rpl_scanf(const char *format, ...);
#define scanf rpl_scanf
extern int rpl_fscanf(FILE *stream, const char *format, ...);
#define fscanf rpl_fscanf
int rpl_vscanf(const char *format, va_list args);
#define vscanf rpl_vscanf
int rpl_vfscanf(FILE *stream, const char *format, va_list args);
#define vfscanf rpl_vfscanf
#if GNULIB_NONBLOCKING
extern int rpl_getchar(void);
#define getchar rpl_getchar
extern int rpl_fgetc(FILE *stream);
#define fgetc rpl_fgetc
extern char *rpl_fgets(char *s, int n, FILE *stream);
#define fgets rpl_fgets
extern size_t rpl_fread(void *restrict ptr, size_t s, size_t n, FILE *restrict stream);
#define fread rpl_fread
#endif
extern int rpl_fpurge(FILE *gl_stream);
#define fpurge rpl_fpurge
extern int rpl_fseek(FILE *fp, long offset, int whence);
#define fseek rpl_fseek
extern int rpl_fseeko(FILE *fp, off_t offset, int whence);
#define fseeko rpl_fseeko
extern int rpl_printf(const char *format, ...);
#define printf rpl_printf
extern int rpl_vprintf(const char *format, va_list args);
#define vprintf rpl_vprintf
extern int rpl_vfprintf(FILE *fp, const char *format, va_list args);
#define vfprintf rpl_vfprintf
#if GNULIB_NONBLOCKING
extern int rpl_putchar(int c);
#define putchar rpl_putchar
extern int rpl_fputc(int c, FILE *stream);
#define fputc rpl_fputc
extern int rpl_fputs(const char *string, FILE *stream);
#define fputs rpl_fputs
extern int rpl_puts(const char *string);
#define puts rpl_puts
extern size_t rpl_fwrite(const void *ptr, size_t s, size_t n, FILE *stream);
#define fwrite rpl_fwrite
#endif
extern long rpl_ftell(FILE *fp);
#define ftell rpl_ftell
extern off_t rpl_ftello(FILE *fp);
#define ftello rpl_ftello
extern int rpl_snprintf(char *str, size_t size, const char *format, ...);
#define snprintf rpl_snprintf
extern int rpl_sprintf(char *str, const char *format, ...);
#define sprintf rpl_sprintf
#endif
extern ssize_t rpl_getdelim(char **lineptr, size_t *n, int delimiter, FILE *fp);
#define getdelim rpl_getdelim
extern ssize_t rpl_getline(char **lineptr, size_t *n, FILE *stream);
#define getline rpl_getline
extern int rpl_vasprintf(char **resultp, const char *format, va_list args);
#define vasprintf rpl_vasprintf
extern char *rpl_vasnprintf(char *resultbuf, size_t *lengthp, const char *format, va_list args);
#define vasnprintf rpl_vasnprintf

// Prevent undefined functions from being used
#define dprintf(...) error
#define fcloseall(...) error
#define freopen(...) error
#define getw(...) error
#define obstack_printf(...) error
#define obstack_vprintf(...) error
#define pclose(...) error
#define perror(...) error
#define popen(...) error
#define putw(...) error
#define remove(...) error
#define rename(...) error
#define renameat(...) error
#define tempnam(...) error
#define tmpfile(...) error
#define asprintf(...) error
#define vdprintf(...) error
#define vsnprintf(...) error
#define vsprintf(...) error
#define asprintf(...) error
#define asprintf(...) error

#endif /* _MSC_VER */

#endif /* SMP_STDIO_H */