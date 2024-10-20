/*
 * MSVC sys/socket.h compatibility header.
 * Copyright (c) 2015 Matthew Oliver
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

#ifndef SMP_SYS_SOCKET_H
#define SMP_SYS_SOCKET_H

#ifndef _MSC_VER
#   include_next <sys/socket.h>
#else

#include <Winsock2.h>
#include <ws2tcpip.h>
#include <sys/types.h>
#include <io.h>
#include <unistd.h>

#if !GNULIB_defined_rpl_fd_isset
inline int rpl_fd_isset(SOCKET fd, fd_set * set)
{
  u_int i;
  if (set == NULL)
    return 0;

  for (i = 0; i < set->fd_count; i++)
    if (set->fd_array[i] == fd)
      return 1;

  return 0;
}
# define GNULIB_defined_rpl_fd_isset 1
#endif

#undef FD_ISSET
#define FD_ISSET(fd, set) rpl_fd_isset(fd, set)

extern int rpl_connect(int fd, const struct sockaddr *addr, socklen_t addrlen);
#define connect rpl_connect
extern ssize_t rpl_recv(int fd, void *buf, size_t len, int flags);
#define recv rpl_recv
extern ssize_t rpl_send(int fd, const void *buf, size_t len, int flags);
#define send rpl_send
extern int rpl_setsockopt(int fd, int level, int optname, const void * optval, socklen_t optlen);
#define setsockopt rpl_setsockopt

// Prevent undefined functions from being used
#define socket(...) error
#define accept(...) error
#define bind(...) error
#define getpeername(...) error
#define getsockname(...) error
#define getsockopt(...) error
#define listen(...) error
#define recvfrom(...) error
#define sendto(...) error
#define shutdown(...) error
#define accept4(...) error

#endif /* _MSC_VER */

#endif /* SMP_SYS_SOCKET_H */