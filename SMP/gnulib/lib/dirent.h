/*
* GNUlib dirent.h compatibility header.
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

#ifndef SMP_DIRENT_H
#define SMP_DIRENT_H

#ifndef _MSC_VER
#   include_next <dirent.h>
#else

#if !defined(_68K_) && !defined(_MPPC_) && !defined(_X86_) && !defined(_IA64_) && !defined(_AMD64_) && defined(_M_IX86)
#   define _X86_
#endif
#include <stdio.h>
#include <stdarg.h>
#include <wtypes.h>
#include <windef.h>
#include <winbase.h>
#include <wchar.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

# if !GNULIB_defined_struct_dirent
struct dirent
{
  char d_type;
  char d_name[1];
};
struct wdirent
{
  char d_type;
  size_t d_namlen;
  wchar_t d_name[1];
};
# define DT_UNKNOWN 0
# define DT_FIFO    1
# define DT_CHR     2
# define DT_DIR     4
# define DT_BLK     6
# define DT_REG     8
# define DT_LNK    10
# define DT_SOCK   12
# define DT_WHT    14
typedef struct gl_directory DIR;
typedef struct _WDIR
{
  int status;
  HANDLE current;
  WIN32_FIND_DATAW entry;
  wchar_t dir_name_mask[1];
} WDIR;
# define GNULIB_defined_struct_dirent 1
#endif

extern DIR *rpl_opendir(const char *dir_name);
#define opendir rpl_opendir
#define GNULIB_defined_opendir 1
extern struct dirent *rpl_readdir(DIR *dirp);
#define readdir rpl_readdir
extern int rpl_closedir(DIR *dirp);
#define closedir rpl_closedir
#define GNULIB_defined_closedir 1
extern WDIR *rpl_wopendir(const wchar_t *dir_name);
#define wopendir rpl_wopendir
extern struct wdirent *rpl_wreaddir(WDIR *dirp);
#define wreaddir rpl_wreaddir
extern int rpl_wclosedir(WDIR *dirp);
#define wclosedir rpl_wclosedir

// Prevent undefined functions from being used
#define rewinddir(...) error
#define dirfd(...) error
#define fdopendir(...) error
#define scandir(...) error
#define alphasort(...) error
#define wrewinddir(...) error
#define wdirfd(...) error
#define wfdopendir(...) error
#define wscandir(...) error
#define walphasort(...) error

#ifdef _UNICODE
#define _tdirent wdirent
#define _TDIR WDIR
#define _topendir wopendir
#define _treaddir wreaddir
#define _tclosedir wclosedir
#else
#define _tdirent dirent
#define _TDIR DIR
#define _topendir opendir
#define _treaddir readdir
#define _tclosedir closedir
#endif

#endif /* _MSC_VER */

#endif /*SMP_DIRENT_H*/
