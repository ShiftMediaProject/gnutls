/*
 * MSVC stdio.h compatibility header.
 * Copyright (c) 2015 Matthew Oliver
 *
 * This file is part of Shift Media Project.
 *
 * Shift Media Project is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * Shift Media Project is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with the code; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef _SMP_STDIO_H_
#define _SMP_STDIO_H_

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

#ifndef SSIZE_MAX
#   define SSIZE_MAX ((ssize_t) (SIZE_MAX / 2))
#endif

__inline ssize_t getdelim (char **lineptr, size_t *n, int delimiter, FILE *fp)
{
    ssize_t result;
    size_t cur_len = 0;

    if (lineptr == NULL || n == NULL || fp == NULL) {
        errno = EINVAL;
        return -1;
    }
    if (*lineptr == NULL || *n == 0) {
        char *new_lineptr;
        *n = 120;
        new_lineptr = (char *) realloc (*lineptr, *n);
        if (new_lineptr == NULL) {
            result = -1;
            return result;
        }
        *lineptr = new_lineptr;
    }

    for (;;) {
        int i;
        i = getc( fp );
        if (i == EOF) {
            result = -1;
            break;
        }
        if (cur_len + 1 >= *n) {
            size_t needed_max =
            SSIZE_MAX < SIZE_MAX ? (size_t) SSIZE_MAX + 1 : SIZE_MAX;
            size_t needed = 2 * *n + 1;
            char *new_lineptr;
            if (needed_max < needed)
            needed = needed_max;
            if (cur_len + 1 >= needed) {
                result = -1;
                errno = EOVERFLOW;
                return result;
            }
            new_lineptr = (char *) realloc (*lineptr, needed);
            if (new_lineptr == NULL) {
                result = -1;
                return result;
            }
            *lineptr = new_lineptr;
            *n = needed;
        }
        (*lineptr)[cur_len] = i;
        cur_len++;
        if (i == delimiter)
            break;
    }
    (*lineptr)[cur_len] = '\0';
    result = cur_len ? cur_len : result;

    return result;
}

__inline ssize_t getline (char **lineptr, size_t *n, FILE *stream)
{
    return getdelim (lineptr, n, '\n', stream);
}

__inline int vasprintf(char **res, char const *fmt, va_list args)
{
    int	sz, r;
    sz = _vscprintf(fmt, args);
    if (sz < 0)
        return sz;
    if (sz >= 0) {
        if ((*res = malloc(sz + 1)) == NULL)
                return -1;
        if ((sz = sprintf(*res, fmt, args)) < 0) {
            free(*res);
            *res = NULL;
        }
        return sz;
    }
#define MAXLN 65535
        *res = NULL;
        for (sz = 128; sz <= MAXLN; sz *= 2) {
            if ((*res = realloc(*res, sz)) == NULL)
                return -1;
            r = vsnprintf(*res, sz, fmt, args);
            if (r > 0 && r < sz)
                return r;
        }
        errno = ENOMEM;
        if (*res) {
                free(*res);
                *res = NULL;
        }
        return -1;
}

#define fseeko _fseeki64
#define ftello _ftelli64

#endif /* _MSC_VER */

#endif /* _SMP_STDIO_H_ */