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
#include <sys/types.h>
#include <Winsock2.h>
#if _VC_CRT_MAJOR_VERSION >= 14
#include <../ucrt/stdio.h>
#else
#include <../include/stdio.h>
#endif

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

extern int rpl_getdtablesize(void);
#define getdtablesize rpl_getdtablesize
extern int rpl_dup2(int oldfd, int newfd);
#define dup2 rpl_dup2
extern ssize_t rpl_read(int fd, void *buf, size_t count);
#define read rpl_read
extern ssize_t rpl_write(int fd, const void *buf, size_t count);
#define write rpl_write
extern off_t rpl_lseek(int fd, off_t offset, int whence);
#define lseek rpl_lseek
extern int rpl_close(int fd);
#define close rpl_close

// Prevent undefined functions from being used
#define access(...) error
#define chdir(...) error
#define chown(...) error
#define copy_file_range(...) error
#define dup(...) error
#define dup3(...) error
#define euidaccess(...) error
#define execl(...) error
#define execle(...) error
#define execlp(...) error
#define execv(...) error
#define execve(...) error
#define execvp(...) error
#define execvpe(...) error
#define faccessat(...) error
#define fchdir(...) error
#define fchownat(...) error
#define fdatasync(...) error
#define fsync(...) error
#define ftruncate(...) error
#define getcwd(...) error
#define getdomainname(...) error
#define getentropy(...) error
#define getgroups(...) error
#define gethostname(...) error
#define getlogin(...) error
#define getlogin_r(...) error
#define getpagesize(...) error
#define getpass(...) error
#define getpid(...) error
#define getusershell(...) error
#define setusershell(...) error
#define endusershell(...) error
#define group_member(...) error
#define isatty(...) error
#define lchown(...) error
#define link(...) error
#define linkat(...) error
#define pipe(...) error
#define pipe2(...) error
#define pread(...) error
#define pwrite(...) error
#define readlink(...) error
#define readlinkat(...) error
#define rmdir(...) error
#define sethostname(...) error
#define sleep(...) error
#define swab(...) error
#define symlink(...) error
#define symlinkat(...) error
#define truncate(...) error
#define ttyname_r(...) error
#define unlink(...) error
#define unlinkat(...) error
#define usleep(...) error
#define pread(...) error

#endif /* _MSC_VER */

#endif /* SMP_UNISTD_H */