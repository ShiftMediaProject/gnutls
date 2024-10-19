/*
 * GNUlib unistd.h compatibility header.
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

#ifndef SMP_UNISTD_H
#define SMP_UNISTD_H

#ifndef _MSC_VER
#   include_next <unistd.h>
#else

#include <stdlib.h>
#include <process.h>
#include <direct.h>
#include <fcntl.h>

#define mkdir(path, mode) _mkdir(path)

#ifndef STDIN_FILENO
# define STDIN_FILENO 0
#endif
#ifndef STDOUT_FILENO
# define STDOUT_FILENO 1
#endif
#ifndef STDERR_FILENO
# define STDERR_FILENO 2
#endif

#define F_OK 0
#define X_OK 1
#define W_OK 2
#define R_OK 4

#define inline __inline
typedef int mode_t;
#include <BaseTsd.h>
typedef SSIZE_T ssize_t;

#define getdtablesize rpl_getdtablesize
extern int getdtablesize(void);
#define dup2 rpl_dup2
extern int dup2(int oldfd, int newfd);
#define read rpl_read
extern ssize_t read(int fd, void *buf, size_t count);
#define write rpl_write
extern ssize_t write(int fd, const void *buf, size_t count);

#endif /* _MSC_VER */

#endif /* SMP_UNISTD_H */