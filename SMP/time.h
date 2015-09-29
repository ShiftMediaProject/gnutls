/*
 * MSVC time.h compatibility header.
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

#ifndef _SMP_TIME_H_
#define _SMP_TIME_H_

#ifndef _MSC_VER
#   include_next <time.h>
#else

#include <crtversion.h>
#if _VC_CRT_MAJOR_VERSION >= 14
#   include <../ucrt/time.h>
#else
#   include <../include/time.h>
struct timespec
{
    time_t tv_sec;
    long int tv_nsec;
};
#endif

#define gmtime_r(x,y) ((gmtime_s(y,x)==0)?x:NULL)
#define localtime_r ((localtime_s(y,x)==0)?x:NULL)

#endif /* _MSC_VER */

#endif /* _SMP_TIME_H_ */