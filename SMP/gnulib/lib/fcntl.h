/*
 * Gnulib fcntl.h compatibility header.
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

#ifndef SMP_FCNTL_H
#ifndef __need_system_fcntl_h
#define SMP_FCNTL_H
#endif

#ifndef _MSC_VER
#   include_next <fcntl.h>
#else
	
#include <io.h>
#include <unistd.h>
#include <crtversion.h>
#if _VC_CRT_MAJOR_VERSION >= 14
#   include <../ucrt/fcntl.h>
#else
#   include <../include/fcntl.h>
#endif

#ifndef __need_system_fcntl_h
extern int rpl_fcntl(int fd, int action, ...);
#define fcntl rpl_fcntl

extern int rpl_open(const char *filename, int flags, ...);
#define open rpl_open
#endif

#ifndef FD_CLOEXEC
# define FD_CLOEXEC 1
#endif

#ifndef F_DUPFD_CLOEXEC
# define F_DUPFD_CLOEXEC 0x40000000
# define GNULIB_defined_F_DUPFD_CLOEXEC 1
#elif !defined(GNULIB_defined_F_DUPFD_CLOEXEC)
# define GNULIB_defined_F_DUPFD_CLOEXEC 0
#endif

#ifndef F_DUPFD
# define F_DUPFD 1
#endif

#ifndef F_GETFD
# define F_GETFD 2
#endif

#if !defined O_DIRECT && defined O_DIRECTIO
# define O_DIRECT O_DIRECTIO
#endif

#if !defined O_CLOEXEC && defined O_NOINHERIT
# define O_CLOEXEC O_NOINHERIT
#endif

#ifndef O_CLOEXEC
# define O_CLOEXEC 0x40000000
# define GNULIB_defined_O_CLOEXEC 1
#else
# define GNULIB_defined_O_CLOEXEC 0
#endif

#ifndef O_DIRECT
# define O_DIRECT 0
#endif

#ifndef O_DIRECTORY
# define O_DIRECTORY 0
#endif

#ifndef O_DSYNC
# define O_DSYNC 0
#endif

#ifndef O_EXEC
# define O_EXEC O_RDONLY
#endif

#ifndef O_IGNORE_CTTY
# define O_IGNORE_CTTY 0
#endif

#ifndef O_NDELAY
# define O_NDELAY 0
#endif

#ifndef O_NOATIME
# define O_NOATIME 0
#endif

#ifndef O_NONBLOCK
# define O_NONBLOCK O_NDELAY
#endif

#if O_NONBLOCK
# ifndef GNULIB_defined_O_NONBLOCK
#  define GNULIB_defined_O_NONBLOCK 0
# endif
#else
# define GNULIB_defined_O_NONBLOCK 1
# undef O_NONBLOCK
# define O_NONBLOCK 0x40000000
#endif

#ifndef O_NOCTTY
# define O_NOCTTY 0
#endif

#ifndef O_NOFOLLOW
# define O_NOFOLLOW 0
#endif

#ifndef O_NOLINK
# define O_NOLINK 0
#endif

#ifndef O_NOLINKS
# define O_NOLINKS 0
#endif

#ifndef O_NOTRANS
# define O_NOTRANS 0
#endif

#ifndef O_RSYNC
# define O_RSYNC 0
#endif

#ifndef O_SEARCH
# define O_SEARCH O_RDONLY
#endif

#ifndef O_SYNC
# define O_SYNC 0
#endif

#ifndef O_TTY_INIT
# define O_TTY_INIT 0
#endif

#if !defined O_BINARY && defined _O_BINARY
# define O_BINARY _O_BINARY
# define O_TEXT _O_TEXT
#endif

#ifndef O_BINARY
# define O_BINARY 0
# define O_TEXT 0
#endif

#ifndef AT_FDCWD
# define AT_FDCWD (-3041965)
#endif

#ifndef AT_SYMLINK_NOFOLLOW
# define AT_SYMLINK_NOFOLLOW 4096
#endif

#ifndef AT_REMOVEDIR
# define AT_REMOVEDIR 1
#endif

#ifndef AT_SYMLINK_FOLLOW
# define AT_SYMLINK_FOLLOW 2
#endif

#ifndef AT_EACCESS
# define AT_EACCESS 4
#endif

#ifndef HANDLE_FLAG_INHERIT
# define HANDLE_FLAG_INHERIT 0x00000001
#endif

#endif /* _MSC_VER */

#endif /* SMP_FCNTL_H */
