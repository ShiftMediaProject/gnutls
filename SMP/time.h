
#ifndef _TIME_H_
#define _TIME_H_

#if defined(_MSC_VER)
#   include <../include/time.h>
#else
#error "Use this header only with Microsoft Visual C++ compilers!"
#endif

struct timespec
{
    time_t tv_sec;
    long int tv_nsec;
};

#define gmtime_r(x,y) ((gmtime_s(y,x)==0)?x:NULL)
#define localtime_r ((localtime_s(y,x)==0)?x:NULL)

#endif