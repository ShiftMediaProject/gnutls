/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define to the number of bits in type 'ptrdiff_t'. */
/* #undef BITSIZEOF_PTRDIFF_T */

/* Define to the number of bits in type 'sig_atomic_t'. */
/* #undef BITSIZEOF_SIG_ATOMIC_T */

/* Define to the number of bits in type 'size_t'. */
/* #undef BITSIZEOF_SIZE_T */

/* Define to the number of bits in type 'wchar_t'. */
/* #undef BITSIZEOF_WCHAR_T */

/* Define to the number of bits in type 'wint_t'. */
/* #undef BITSIZEOF_WINT_T */

/* C99 macros are supported */
#define C99_MACROS 1

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
 systems. This function is required for `alloca.c' support on those systems.
 */
 /* #undef CRAY_STACKSEG_END */

 /* Define to 1 if using `alloca.c'. */
 /* #undef C_ALLOCA */

 /* Define as the bit index in the word where to find bit 0 of the exponent of
'double'. */
#define DBL_EXPBIT0_BIT 20

/* Define as the word index where to find the exponent of 'double'. */
#define DBL_EXPBIT0_WORD 1

/* use the given certificate blacklist file */
/* #undef DEFAULT_BLACKLIST_FILE */

/* use the given CRL file */
/* #undef DEFAULT_CRL_FILE */

/* The default priority string */
#define DEFAULT_PRIORITY_STRING "NORMAL"

/* use the given directory as default trust store */
/* #undef DEFAULT_TRUST_STORE_DIR */

/* use the given file default trust store */
/* #undef DEFAULT_TRUST_STORE_FILE */

/* use the given pkcs11 uri as default trust store */
/* #undef DEFAULT_TRUST_STORE_PKCS11 */

/* Define to 1 if // is a file system root distinct from /. */
/* #undef DOUBLE_SLASH_IS_DISTINCT_ROOT */

/* enable ALPN support */
#define ENABLE_ALPN 1

/* enable anonymous authentication */
#define ENABLE_ANON 1

/* Enable afalg support */
/* #undef ENABLE_AFALG */

/* Enable cryptodev support */
/* #undef ENABLE_CRYPTODEV */

/* enable DHE */
#define ENABLE_DHE 1

/* enable DTLS-SRTP support */
#define ENABLE_DTLS_SRTP 1

/* enable DHE */
#define ENABLE_ECDHE 1

/* Enable FIPS140-2 mode */
/* #undef ENABLE_FIPS140 */

/* enable GOST support */
/* #undef ENABLE_GOST */

/* enable heartbeat support */
#define ENABLE_HEARTBEAT 1

/* enable ktls support */
/* #undef ENABLE_KTLS */

/* nls support in libopts */
/* #undef ENABLE_NLS */

/* Enable all curves */
#define ENABLE_NON_SUITEB_CURVES 1

/* enable OCSP support */
#define ENABLE_OCSP 1

/* Enable padlock acceleration */
#define ENABLE_PADLOCK 1

/* Build PKCS#11 support */
/* #undef ENABLE_PKCS11 */

/* enable PSK authentication */
#define ENABLE_PSK 1

/* enable sha1 authentication */
/* #undef ENABLE_SHA1 */

/* enable SRP authentication */
#define ENABLE_SRP 1

/* enable SSL2.0 support for client hello */
#define ENABLE_SSL2 1

/* enable SSL3.0 support */
#define ENABLE_SSL3 1

/* enable TPM2 support */
/* #undef ENABLE_TPM2 */

/* The FIPS140-2 integrity key */
/* #undef FIPS_KEY */

#define HW_FEATURES "padlock"

#define TLS_FEATURES "ssl3 ssl2-compat srtp alpn ocsp srp psk dhe ecdhe anon heartbeat"

/* Define to nothing if C supports flexible array members, and to 1 if it does
 not. That way, with a declaration like 'struct s { int n; double
 d[FLEXIBLE_ARRAY_MEMBER]; };', the struct hack can be used with pre-C99
 compilers. When computing the size of such an object, don't use 'sizeof
 (struct s)' as it overestimates the size. Use 'offsetof (struct s, d)'
 instead. Don't use 'offsetof (struct s, d[0])', as this doesn't work with
 MSVC and with C++ compilers. */
#define FLEXIBLE_ARRAY_MEMBER /**/

 /* fopen(3) accepts a 'b' in the mode flag */
 /* #undef FOPEN_BINARY_FLAG */

 /* fopen(3) accepts a 't' in the mode flag */
 /* #undef FOPEN_TEXT_FLAG */

 /* Define to 1 if the system's ftello function has the Solaris bug. */
 /* #undef FTELLO_BROKEN_AFTER_SWITCHING_FROM_READ_TO_WRITE */

 /* Define to 1 if ungetc is broken when used on arbitrary bytes. */
 /* #undef FUNC_UNGETC_BROKEN */

 /* Define if gettimeofday clobbers the localtime buffer. */
 /* #undef GETTIMEOFDAY_CLOBBERS_LOCALTIME */

 /* Define this to 'void' or 'struct timezone' to match the system's
declaration of the second argument to gettimeofday. */
#define GETTIMEOFDAY_TIMEZONE struct timezone

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
 whether the gnulib module fscanf shall be considered present. */
#define GNULIB_FSCANF 1

 /* Define to 1 if printf and friends should be labeled with attribute
"__gnu_printf__" instead of "__printf__" */
/* #undef GNULIB_PRINTF_ATTRIBUTE_FLAVOR_GNU */

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
 whether the gnulib module scanf shall be considered present. */
#define GNULIB_SCANF 1

 /* Define to a C preprocessor expression that evaluates to 1 or 0, depending
whether the gnulib module snprintf shall be considered present. */
#define GNULIB_SNPRINTF 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
 whether the gnulib module strerror shall be considered present. */
#define GNULIB_STRERROR 1

 /* Define to 1 when the gnulib module accept should be tested. */
#define GNULIB_TEST_ACCEPT 1

/* Define to 1 when the gnulib module bind should be tested. */
#define GNULIB_TEST_BIND 1

/* Define to 1 when the gnulib module close should be tested. */
#define GNULIB_TEST_CLOSE 1

/* Define to 1 when the gnulib module connect should be tested. */
#define GNULIB_TEST_CONNECT 1

/* Define to 1 when the gnulib module dup2 should be tested. */
#define GNULIB_TEST_DUP2 1

/* Define to 1 when the gnulib module environ should be tested. */
#define GNULIB_TEST_ENVIRON 1

/* Define to 1 when the gnulib module fdopen should be tested. */
#define GNULIB_TEST_FDOPEN 1

/* Define to 1 when the gnulib module fseek should be tested. */
#define GNULIB_TEST_FSEEK 1

/* Define to 1 when the gnulib module fseeko should be tested. */
#define GNULIB_TEST_FSEEKO 1

/* Define to 1 when the gnulib module fstat should be tested. */
#define GNULIB_TEST_FSTAT 1

/* Define to 1 when the gnulib module ftell should be tested. */
#define GNULIB_TEST_FTELL 1

/* Define to 1 when the gnulib module ftello should be tested. */
#define GNULIB_TEST_FTELLO 1

/* Define to 1 when the gnulib module getaddrinfo should be tested. */
#define GNULIB_TEST_GETADDRINFO 1

/* Define to 1 when the gnulib module getdelim should be tested. */
#define GNULIB_TEST_GETDELIM 1

/* Define to 1 when the gnulib module getline should be tested. */
#define GNULIB_TEST_GETLINE 1

/* Define to 1 when the gnulib module getpagesize should be tested. */
#define GNULIB_TEST_GETPAGESIZE 1

/* Define to 1 when the gnulib module getpeername should be tested. */
#define GNULIB_TEST_GETPEERNAME 1

/* Define to 1 when the gnulib module gettimeofday should be tested. */
#define GNULIB_TEST_GETTIMEOFDAY 1

/* Define to 1 when the gnulib module listen should be tested. */
#define GNULIB_TEST_LISTEN 1

/* Define to 1 when the gnulib module lseek should be tested. */
#define GNULIB_TEST_LSEEK 1

/* Define to 1 when the gnulib module malloc-posix should be tested. */
#define GNULIB_TEST_MALLOC_POSIX 1

/* Define to 1 when the gnulib module memchr should be tested. */
#define GNULIB_TEST_MEMCHR 1

/* Define to 1 when the gnulib module memmem should be tested. */
#define GNULIB_TEST_MEMMEM 1

/* Define to 1 when the gnulib module mktime should be tested. */
#define GNULIB_TEST_MKTIME 1

/* Define to 1 when the gnulib module realloc-posix should be tested. */
#define GNULIB_TEST_REALLOC_POSIX 1

/* Define to 1 when the gnulib module recv should be tested. */
#define GNULIB_TEST_RECV 1

/* Define to 1 when the gnulib module recvfrom should be tested. */
#define GNULIB_TEST_RECVFROM 1

/* Define to 1 when the gnulib module secure_getenv should be tested. */
#define GNULIB_TEST_SECURE_GETENV 1

/* Define to 1 when the gnulib module select should be tested. */
#define GNULIB_TEST_SELECT 1

/* Define to 1 when the gnulib module send should be tested. */
#define GNULIB_TEST_SEND 1

/* Define to 1 when the gnulib module sendto should be tested. */
#define GNULIB_TEST_SENDTO 1

/* Define to 1 when the gnulib module setenv should be tested. */
#define GNULIB_TEST_SETENV 1

/* Define to 1 when the gnulib module setsockopt should be tested. */
#define GNULIB_TEST_SETSOCKOPT 1

/* Define to 1 when the gnulib module shutdown should be tested. */
#define GNULIB_TEST_SHUTDOWN 1

/* Define to 1 when the gnulib module snprintf should be tested. */
#define GNULIB_TEST_SNPRINTF 1

/* Define to 1 when the gnulib module socket should be tested. */
#define GNULIB_TEST_SOCKET 1

/* Define to 1 when the gnulib module strdup should be tested. */
#define GNULIB_TEST_STRDUP 1

/* Define to 1 when the gnulib module strerror should be tested. */
#define GNULIB_TEST_STRERROR 1

/* Define to 1 when the gnulib module strndup should be tested. */
#define GNULIB_TEST_STRNDUP 1

/* Define to 1 when the gnulib module strnlen should be tested. */
#define GNULIB_TEST_STRNLEN 1

/* Define to 1 when the gnulib module strtok_r should be tested. */
#define GNULIB_TEST_STRTOK_R 1

/* Define to 1 when the gnulib module strverscmp should be tested. */
#define GNULIB_TEST_STRVERSCMP 1

/* Define to 1 when the gnulib module timegm should be tested. */
#define GNULIB_TEST_TIMEGM 1

/* Define to 1 when the gnulib module time_r should be tested. */
#define GNULIB_TEST_TIME_R 1

/* Define to 1 when the gnulib module time_rz should be tested. */
#define GNULIB_TEST_TIME_RZ 1

/* Define to 1 when the gnulib module uninorm/u16-normalize should be tested.
 */
#define GNULIB_TEST_UNINORM_U16_NORMALIZE 1

 /* Define to 1 when the gnulib module uninorm/u32-normalize should be tested.
*/
#define GNULIB_TEST_UNINORM_U32_NORMALIZE 1

/* Define to 1 when the gnulib module uninorm/u8-normalize should be tested.
 */
#define GNULIB_TEST_UNINORM_U8_NORMALIZE 1

 /* Define to 1 when the gnulib module unsetenv should be tested. */
#define GNULIB_TEST_UNSETENV 1

/* Define to 1 when the gnulib module vasprintf should be tested. */
#define GNULIB_TEST_VASPRINTF 1

/* Define to 1 when the gnulib module vsnprintf should be tested. */
#define GNULIB_TEST_VSNPRINTF 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
 whether the gnulib module unistr/u16-mbtoucr shall be considered present.
 */
#define GNULIB_UNISTR_U16_MBTOUCR 1

 /* Define to a C preprocessor expression that evaluates to 1 or 0, depending
whether the gnulib module unistr/u16-mbtouc-unsafe shall be considered
present. */
#define GNULIB_UNISTR_U16_MBTOUC_UNSAFE 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
 whether the gnulib module unistr/u16-uctomb shall be considered present. */
#define GNULIB_UNISTR_U16_UCTOMB 1

 /* Define to a C preprocessor expression that evaluates to 1 or 0, depending
whether the gnulib module unistr/u32-mbtouc-unsafe shall be considered
present. */
#define GNULIB_UNISTR_U32_MBTOUC_UNSAFE 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
 whether the gnulib module unistr/u32-uctomb shall be considered present. */
#define GNULIB_UNISTR_U32_UCTOMB 1

 /* Define to a C preprocessor expression that evaluates to 1 or 0, depending
whether the gnulib module unistr/u8-mbtoucr shall be considered present. */
#define GNULIB_UNISTR_U8_MBTOUCR 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
 whether the gnulib module unistr/u8-mbtouc-unsafe shall be considered
 present. */
#define GNULIB_UNISTR_U8_MBTOUC_UNSAFE 1

 /* Define to a C preprocessor expression that evaluates to 1 or 0, depending
whether the gnulib module unistr/u8-uctomb shall be considered present. */
#define GNULIB_UNISTR_U8_UCTOMB 1

/* We allow temporarily usage of deprecated functions - until they are
 removed. */
#define GNUTLS_INTERNAL_BUILD 1

 /* Additional cast to bring void* to a type castable to int. */
#define GNUTLS_POINTER_TO_INT_CAST (long)

/* Define to 1 if you have 'alloca' after including <alloca.h>, a header that
 may be supplied by this distribution. */
#define HAVE_ALLOCA 1

 /* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
*/
/* #undef HAVE_ALLOCA_H */

/* Define to 1 if you have the <arpa/inet.h> header file. */
/* #undef HAVE_ARPA_INET_H */

/* Define to 1 if you have the <bp-sym.h> header file. */
/* #undef HAVE_BP_SYM_H */

/* Define to 1 if you have the <byteswap.h> header file. */
/* #undef HAVE_BYTESWAP_H */

/* Define to 1 if you have the `canonicalize_file_name' function. */
/* #undef HAVE_CANONICALIZE_FILE_NAME */

/* Define to 1 if you have the Mac OS X function CFLocaleCopyCurrent in the
 CoreFoundation framework. */
 /* #undef HAVE_CFLOCALECOPYCURRENT */

 /* Define to 1 if you have the Mac OS X function CFPreferencesCopyAppValue in
the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Define to 1 if you have the `chmod' function. */
/* #undef HAVE_CHMOD */

/* Define to 1 if you have the `clock_gettime' function. */
/* #undef HAVE_CLOCK_GETTIME */

/* Define to 1 if you have the `clock_settime' function. */
/* #undef HAVE_CLOCK_SETTIME */

/* Define if you have compound literals. */
#define HAVE_COMPOUND_LITERALS 1

/* Define to 1 if you have the <cpuid.h> header file. */
/* #undef HAVE_CPUID_H */

/* Define to 1 if you have the `nettle_curve448_mul nettle_ed448_shake256_sign' functions. */
#define HAVE_CURVE448 1

/* Define to 1 if you have the `daemon' function. */
/* #undef HAVE_DAEMON */

/* Enable the DANE library */
/* #undef HAVE_DANE */

/* Define if the GNU dcgettext() function is already present or preinstalled.
 */
 /* #undef HAVE_DCGETTEXT */

 /* Define to 1 if you have the declaration of `alarm', and to 0 if you don't.
*/
#define HAVE_DECL_ALARM 0

/* Define to 1 if you have the declaration of `fflush_unlocked', and to 0 if
 you don't. */
#define HAVE_DECL_FFLUSH_UNLOCKED 0

 /* Define to 1 if you have the declaration of `flockfile', and to 0 if you
don't. */
#define HAVE_DECL_FLOCKFILE 0

/* Define to 1 if you have the declaration of `fputs_unlocked', and to 0 if
 you don't. */
#define HAVE_DECL_FPUTS_UNLOCKED 0

 /* Define to 1 if you have the declaration of `freeaddrinfo', and to 0 if you
don't. */
#define HAVE_DECL_FREEADDRINFO 1

/* Define to 1 if you have the declaration of `fseeko', and to 0 if you don't.
 */
#define HAVE_DECL_FSEEKO 1

 /* Define to 1 if you have the declaration of `ftello', and to 0 if you don't.
*/
#define HAVE_DECL_FTELLO 1

/* Define to 1 if you have the declaration of `funlockfile', and to 0 if you
 don't. */
#define HAVE_DECL_FUNLOCKFILE 0

 /* Define to 1 if you have the declaration of `gai_strerror', and to 0 if you
don't. */
#define HAVE_DECL_GAI_STRERROR 1

/* Define to 1 if you have the declaration of `gai_strerrorA', and to 0 if you
 don't. */
#define HAVE_DECL_GAI_STRERRORA 0

 /* Define to 1 if you have the declaration of `getaddrinfo', and to 0 if you
don't. */
#define HAVE_DECL_GETADDRINFO 1

/* Define to 1 if you have the declaration of `getc_unlocked', and to 0 if you
 don't. */
#define HAVE_DECL_GETC_UNLOCKED 0

 /* Define to 1 if you have the declaration of `getdelim', and to 0 if you
don't. */
#define HAVE_DECL_GETDELIM 0

/* Define to 1 if you have the declaration of `getline', and to 0 if you
 don't. */
#define HAVE_DECL_GETLINE 0

 /* Define to 1 if you have the declaration of `getnameinfo', and to 0 if you
don't. */
#define HAVE_DECL_GETNAMEINFO 1

/* Define to 1 if you have the declaration of `getpass', and to 0 if you
 don't. */
#define HAVE_DECL_GETPASS 0

 /* Define to 1 if you have the declaration of `inet_ntop', and to 0 if you
don't. */
#define HAVE_DECL_INET_NTOP 0

/* Define to 1 if you have the declaration of `inet_pton', and to 0 if you
 don't. */
#define HAVE_DECL_INET_PTON 0

 /* Define to 1 if you have the declaration of `localtime_r', and to 0 if you
don't. */
#define HAVE_DECL_LOCALTIME_R 0

/* Define to 1 if you have the declaration of `memmem', and to 0 if you don't.
 */
#define HAVE_DECL_MEMMEM 0

 /* Define to 1 if you have the declaration of `program_invocation_name', and
to 0 if you don't. */
#define HAVE_DECL_PROGRAM_INVOCATION_NAME 0

/* Define to 1 if you have the declaration of `program_invocation_short_name',
 and to 0 if you don't. */
#define HAVE_DECL_PROGRAM_INVOCATION_SHORT_NAME 0

 /* Define to 1 if you have the declaration of `putc_unlocked', and to 0 if you
don't. */
#define HAVE_DECL_PUTC_UNLOCKED 0

/* Define to 1 if you have the declaration of `setenv', and to 0 if you don't.
 */
#define HAVE_DECL_SETENV 0

 /* Define to 1 if you have the declaration of `snprintf', and to 0 if you
don't. */
#define HAVE_DECL_SNPRINTF 1

/* Define to 1 if you have the declaration of `strdup', and to 0 if you don't.
 */
#define HAVE_DECL_STRDUP 1

 /* Define to 1 if you have the declaration of `strerror_r', and to 0 if you
don't. */
#define HAVE_DECL_STRERROR_R 0

/* Define to 1 if you have the declaration of `strncasecmp', and to 0 if you
 don't. */
#define HAVE_DECL_STRNCASECMP 1

 /* Define to 1 if you have the declaration of `strndup', and to 0 if you
don't. */
#define HAVE_DECL_STRNDUP 0

/* Define to 1 if you have the declaration of `strnlen', and to 0 if you
 don't. */
#define HAVE_DECL_STRNLEN 1

 /* Define to 1 if you have the declaration of `strtok_r', and to 0 if you
don't. */
#define HAVE_DECL_STRTOK_R 0

/* Define to 1 if you have the declaration of `tzname', and to 0 if you don't.
 */
#define HAVE_DECL_TZNAME 1

 /* Define to 1 if you have the declaration of `unsetenv', and to 0 if you
don't. */
#define HAVE_DECL_UNSETENV 0

/* Define to 1 if you have the declaration of `vsnprintf', and to 0 if you
 don't. */
#define HAVE_DECL_VSNPRINTF 1

 /* Define to 1 if you have the declaration of `_snprintf', and to 0 if you
don't. */
#define HAVE_DECL__SNPRINTF 1

/* Define to 1 if you have the declaration of `__argv', and to 0 if you don't.
 */
#define HAVE_DECL___ARGV 0

 /* Define to 1 if you have the declaration of `__fsetlocking', and to 0 if you
don't. */
#define HAVE_DECL___FSETLOCKING 0

/* Define this if /dev/zero is readable device */
/* #undef HAVE_DEV_ZERO */

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
 */
 /* #undef HAVE_DIRENT_H */

 /* Define to 1 if you have the <dlfcn.h> header file. */
 /* #undef HAVE_DLFCN_H */

 /* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
 /* #undef HAVE_DOPRNT */

 /* Define to 1 if you have the 'dup2' function. */
#define HAVE_DUP2 1

/* Define if you have the declaration of environ. */
#define HAVE_ENVIRON_DECL 1

/* Define to 1 if you have the <errno.h> header file. */
/* #undef HAVE_ERRNO_H */

/* Define to 1 if you have the `fchmod' function. */
/* #undef HAVE_FCHMOD */

/* Define to 1 if you have the <fcntl.h> header file. */
/* #undef HAVE_FCNTL_H */

/* Define to 1 if you have the <features.h> header file. */
/* #undef HAVE_FEATURES_H */

/* Define to 1 if you have the `flockfile' function. */
/* #undef HAVE_FLOCKFILE */

/* Define to 1 if you have the `fmemopen' function. */
/* #undef HAVE_FMEMOPEN */

/* Define to 1 if you have the `fork' function. */
/* #undef HAVE_FORK */

/* Define to 1 if fseeko (and presumably ftello) exists and is declared. */
#define HAVE_FSEEKO 1

/* Define to 1 if you have the `fstat' function. */
/* #undef HAVE_FSTAT */

/* Define to 1 if you have the `funlockfile' function. */
/* #undef HAVE_FUNLOCKFILE */

/* Define to 1 if you have the `getdelim' function. */
/* #undef HAVE_GETDELIM */

/* Define to 1 if you have the `getegid' function. */
/* #undef HAVE_GETEGID */

/* Enable the OpenBSD getentropy function */
/* #undef HAVE_GETENTROPY */

/* Define to 1 if you have the `geteuid' function. */
/* #undef HAVE_GETEUID */

/* Define to 1 if you have the `getexecname' function. */
/* #undef HAVE_GETEXECNAME */

/* Define to 1 if you have the `getgid' function. */
/* #undef HAVE_GETGID */

/* Define to 1 if you have the `gethostbyname' function. */
/* #undef HAVE_GETHOSTBYNAME */

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `getpass' function. */
/* #undef HAVE_GETPASS */

/* Define to 1 if you have the `getpid' function. */
/* #undef HAVE_GETPID */

/* Define to 1 if you have the `getprogname' function. */
/* #undef HAVE_GETPROGNAME */

/* Define to 1 if you have the `getpwuid_r' function. */
/* #undef HAVE_GETPWUID_R */

/* Define to 1 if you have the `getrusage' function. */
/* #undef HAVE_GETRUSAGE */

/* Define to 1 if you have the `getservbyname' function. */
/* #undef HAVE_GETSERVBYNAME */

/* Define if the GNU gettext() function is already present or preinstalled. */
/* #undef HAVE_GETTEXT */

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `getuid' function. */
/* #undef HAVE_GETUID */

/* Define if you have the iconv() function and it works. */
/* #undef HAVE_ICONV */

/* Define to 1 if you have the `inet_ntop' function. */
/* #undef HAVE_INET_NTOP */

/* Define to 1 if you have the `inet_pton' function. */
/* #undef HAVE_INET_PTON */

/* Define to 1 if the compiler supports one of the keywords 'inline',
 '__inline__', '__inline' and effectively inlines functions marked as such.
 */
#define HAVE_INLINE 1

 /* Define to 1 if the system has the type `int16_t'. */
#define HAVE_INT16_T 1

/* Define to 1 if the system has the type `int32_t'. */
#define HAVE_INT32_T 1

/* Define to 1 if the system has the type `int8_t'. */
#define HAVE_INT8_T 1

/* Define if you have the 'intmax_t' type in <stdint.h> or <inttypes.h>. */
#define HAVE_INTMAX_T 1

/* Define to 1 if the system has the type `intptr_t'. */
#define HAVE_INTPTR_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if <inttypes.h> exists, doesn't clash with <sys/types.h>, and
 declares uintmax_t. */
#define HAVE_INTTYPES_H_WITH_UINTMAX 1

 /* Define to 1 if <sys/socket.h> defines AF_INET. */
#define HAVE_IPV4 1

/* Define to 1 if <sys/socket.h> defines AF_INET6. */
#define HAVE_IPV6 1

/* Define to 1 if you have the `issetugid' function. */
/* #undef HAVE_ISSETUGID */

/* Define if you have the libcrypto library. */
/* #undef HAVE_LIBCRYPTO */

/* Define if you have the libdl library. */
/* #undef HAVE_LIBDL */

/* Define to 1 if you have the `gen' library (-lgen). */
/* #undef HAVE_LIBGEN */

/* Define to 1 if you have the <libgen.h> header file. */
/* #undef HAVE_LIBGEN_H */

/* Define if IDNA 2008 support is enabled. */
/* #undef HAVE_LIBIDN2 */

/* Define to 1 if you have the `intl' library (-lintl). */
/* #undef HAVE_LIBINTL */

/* Define to 1 if you have the <libintl.h> header file. */
/* #undef HAVE_LIBINTL_H */

/* nettle is enabled */
#define HAVE_LIBNETTLE 1

/* Define if you have the libnsl library. */
/* #undef HAVE_LIBNSL */

/* Define if you have the libpthread library. */
/* #undef HAVE_LIBPTHREAD */

/* Define if you have the librt library. */
/* #undef HAVE_LIBRT */

/* Define if you have the libseccomp library. */
/* #undef HAVE_LIBSECCOMP */

/* Define if you have the libunistring library. */
/* #undef HAVE_LIBUNISTRING */

/* Define if you have the libz library. */
#define HAVE_LIBZ 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Enable the Linux getrandom function */
/* #undef HAVE_GETRANDOM */

/* Define to 1 if you have the `localtime' function. */
#define HAVE_LOCALTIME 1

/* Define to 1 if you have the `localtime_r' function. */
/* #undef HAVE_LOCALTIME_R */

/* Define to 1 if the system has the type 'long long int'. */
#define HAVE_LONG_LONG_INT 1

/* Define if the 'malloc' function is POSIX compliant. */
/* #undef HAVE_MALLOC_POSIX */

/* Define to 1 if mmap()'s MAP_ANONYMOUS flag is available after including
 config.h and <sys/mman.h>. */
 /* #undef HAVE_MAP_ANONYMOUS */

 /* Define to 1 if you have the `mbrtowc' function. */
#define HAVE_MBRTOWC 1

/* Define to 1 if you have the `memmem' function. */
/* #undef HAVE_MEMMEM */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if <limits.h> defines the MIN and MAX macros. */
/* #undef HAVE_MINMAX_IN_LIMITS_H */

/* Define to 1 if <sys/param.h> defines the MIN and MAX macros. */
/* #undef HAVE_MINMAX_IN_SYS_PARAM_H */

/* Define to 1 if you have the `mmap' function. */
/* #undef HAVE_MMAP */

/* Define to 1 if you have the `mprotect' function. */
#define HAVE_MPROTECT 1

/* Define to 1 on MSVC platforms that have the "invalid parameter handler"
 concept. */
#define HAVE_MSVC_INVALID_PARAMETER_HANDLER 1

 /* Define to 1 if you have the `nettle_cmac_magma_update' function. */
#define HAVE_NETTLE_CMAC_MAGMA_UPDATE 1

 /* Define to 1 if you have the `nettle_cmac_kuznyechik_update' function. */
#define HAVE_NETTLE_CMAC_KUZNYECHIK_UPDATE 1

/* Define to 1 if you have the `nettle_get_gost_gc256b' function. */
#define HAVE_NETTLE_GET_GOST_GC256B 1

/* Define to 1 if you have the `nettle_get_gost_gc512a' function. */
#define HAVE_NETTLE_GET_GOST_GC512A 1

/* Define to 1 if you have the `nettle_secp_192r1' function. */
#define HAVE_NETTLE_GET_SECP_192R1 1

/* Define to 1 if you have the `nettle_gostdsa_sign' function. */
#define HAVE_NETTLE_GOSTDSA_SIGN 1

/* Define to 1 if you have the `nettle_gost28147_set_key' function. */
#define HAVE_NETTLE_GOST28147_SET_KEY 1

/* Define to 1 if you have the `nettle_kuznyechik_set_key' function. */
#define HAVE_NETTLE_KUZNYECHIK_SET_KEY 1

/* Define to 1 if you have the `nettle_magma_set_key' function. */
#define HAVE_NETTLE_MAGMA_SET_KEY 1

/* Define to 1 if you have the `nettle_streebog512_update' function. */
#define HAVE_NETTLE_STREEBOG512_UPDATE 1

/* Define to 1 if you have the `nanosleep' function. */
/* #undef HAVE_NANOSLEEP */

/* Define to 1 if you have the `nanotime' function. */
/* #undef HAVE_NANOTIME */

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <netdb.h> header file. */
/* #undef HAVE_NETDB_H */

/* Define to 1 if you have the <netinet/in.h> header file. */
/* #undef HAVE_NETINET_IN_H */

/* Define to 1 if you have the <netinet/tcp.h> header file. */
/* #undef HAVE_NETINET_TCP_H */

/* Define to 1 if you have the <OS.h> header file. */
/* #undef HAVE_OS_H */

/* Define this if pathfind(3) works */
/* #undef HAVE_PATHFIND */

/* Define to 1 if the system has the type `pid_t'. */
#define HAVE_PID_T 1

/* Define to 1 if you have the `pthread_mutex_lock' function. */
/* #undef HAVE_PTHREAD_MUTEX_LOCK */

/* Define to 1 if the system has the type `ptrdiff_t'. */
#define HAVE_PTRDIFF_T 1

/* Define to 1 if accept is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_ACCEPT */

/* Define to 1 if accept4 is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_ACCEPT4 */

/* Define to 1 if atoll is declared even after undefining macros. */
#define HAVE_RAW_DECL_ATOLL 1

/* Define to 1 if bind is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_BIND */

/* Define to 1 if btowc is declared even after undefining macros. */
#define HAVE_RAW_DECL_BTOWC 1

/* Define to 1 if canonicalize_file_name is declared even after undefining
 macros. */
 /* #undef HAVE_RAW_DECL_CANONICALIZE_FILE_NAME */

 /* Define to 1 if chdir is declared even after undefining macros. */
#define HAVE_RAW_DECL_CHDIR 1

/* Define to 1 if chown is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_CHOWN */

/* Define to 1 if connect is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_CONNECT */

/* Define to 1 if dprintf is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_DPRINTF */

/* Define to 1 if dup is declared even after undefining macros. */
#define HAVE_RAW_DECL_DUP 1

/* Define to 1 if dup2 is declared even after undefining macros. */
#define HAVE_RAW_DECL_DUP2 1

/* Define to 1 if dup3 is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_DUP3 */

/* Define to 1 if endusershell is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_ENDUSERSHELL */

/* Define to 1 if environ is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_ENVIRON */

/* Define to 1 if euidaccess is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_EUIDACCESS */

/* Define to 1 if faccessat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FACCESSAT */

/* Define to 1 if fchdir is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FCHDIR */

/* Define to 1 if fchmodat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FCHMODAT */

/* Define to 1 if fchownat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FCHOWNAT */

/* Define to 1 if fcntl is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FCNTL */

/* Define to 1 if fdatasync is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FDATASYNC */

/* Define to 1 if ffs is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FFS */

/* Define to 1 if ffsl is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FFSL */

/* Define to 1 if ffsll is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FFSLL */

/* Define to 1 if fpurge is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FPURGE */

/* Define to 1 if freeaddrinfo is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FREEADDRINFO */

/* Define to 1 if fseeko is declared even after undefining macros. */
#define HAVE_RAW_DECL_FSEEKO 1

/* Define to 1 if fstat is declared even after undefining macros. */
#define HAVE_RAW_DECL_FSTAT 1

/* Define to 1 if fstatat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FSTATAT */

/* Define to 1 if fsync is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FSYNC */

/* Define to 1 if ftello is declared even after undefining macros. */
#define HAVE_RAW_DECL_FTELLO 1

/* Define to 1 if ftruncate is declared even after undefining macros. */
#define HAVE_RAW_DECL_FTRUNCATE 1

/* Define to 1 if futimens is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FUTIMENS */

/* Define to 1 if gai_strerror is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GAI_STRERROR */

/* Define to 1 if getaddrinfo is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETADDRINFO */

/* Define to 1 if getcwd is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETCWD 1

/* Define to 1 if getdelim is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETDELIM */

/* Define to 1 if getdomainname is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETDOMAINNAME */

/* Define to 1 if getdtablesize is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETDTABLESIZE */

/* Define to 1 if getgroups is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETGROUPS */

/* Define to 1 if gethostname is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETHOSTNAME */

/* Define to 1 if getline is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETLINE */

/* Define to 1 if getloadavg is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETLOADAVG */

/* Define to 1 if getlogin is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETLOGIN */

/* Define to 1 if getlogin_r is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETLOGIN_R */

/* Define to 1 if getnameinfo is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETNAMEINFO */

/* Define to 1 if getpagesize is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETPAGESIZE */

/* Define to 1 if getpeername is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETPEERNAME */

/* Define to 1 if gets is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETS 1

/* Define to 1 if getsockname is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETSOCKNAME */

/* Define to 1 if getsockopt is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETSOCKOPT */

/* Define to 1 if getsubopt is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETSUBOPT */

/* Define to 1 if gettimeofday is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETTIMEOFDAY 1

/* Define to 1 if getusershell is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETUSERSHELL */

/* Define to 1 if grantpt is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GRANTPT */

/* Define to 1 if group_member is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GROUP_MEMBER */

/* Define to 1 if imaxabs is declared even after undefining macros. */
#define HAVE_RAW_DECL_IMAXABS 1

/* Define to 1 if imaxdiv is declared even after undefining macros. */
#define HAVE_RAW_DECL_IMAXDIV 1

/* Define to 1 if inet_ntop is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_INET_NTOP */

/* Define to 1 if inet_pton is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_INET_PTON */

/* Define to 1 if initstate is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_INITSTATE */

/* Define to 1 if initstate_r is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_INITSTATE_R */

/* Define to 1 if isatty is declared even after undefining macros. */
#define HAVE_RAW_DECL_ISATTY 1

/* Define to 1 if isblank is declared even after undefining macros. */
#define HAVE_RAW_DECL_ISBLANK 1

/* Define to 1 if lchmod is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_LCHMOD */

/* Define to 1 if lchown is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_LCHOWN */

/* Define to 1 if link is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_LINK */

/* Define to 1 if linkat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_LINKAT */

/* Define to 1 if listen is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_LISTEN */

/* Define to 1 if lseek is declared even after undefining macros. */
#define HAVE_RAW_DECL_LSEEK 1

/* Define to 1 if lstat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_LSTAT */

/* Define to 1 if mbrlen is declared even after undefining macros. */
#define HAVE_RAW_DECL_MBRLEN 1

/* Define to 1 if mbrtowc is declared even after undefining macros. */
#define HAVE_RAW_DECL_MBRTOWC 1

/* Define to 1 if mbsinit is declared even after undefining macros. */
#define HAVE_RAW_DECL_MBSINIT 1

/* Define to 1 if mbsnrtowcs is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MBSNRTOWCS */

/* Define to 1 if mbsrtowcs is declared even after undefining macros. */
#define HAVE_RAW_DECL_MBSRTOWCS 1

/* Define to 1 if memmem is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MEMMEM */

/* Define to 1 if mempcpy is declared even after undefining macros. */
#define HAVE_RAW_DECL_MEMPCPY 1

/* Define to 1 if memrchr is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MEMRCHR */

/* Define to 1 if mkdirat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKDIRAT */

/* Define to 1 if mkdtemp is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKDTEMP */

/* Define to 1 if mkfifo is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKFIFO */

/* Define to 1 if mkfifoat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKFIFOAT */

/* Define to 1 if mknod is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKNOD */

/* Define to 1 if mknodat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKNODAT */

/* Define to 1 if mkostemp is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKOSTEMP */

/* Define to 1 if mkostemps is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKOSTEMPS */

/* Define to 1 if mkstemp is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKSTEMP */

/* Define to 1 if mkstemps is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKSTEMPS */

/* Define to 1 if openat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_OPENAT */

/* Define to 1 if pclose is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_PCLOSE */

/* Define to 1 if pipe is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_PIPE */

/* Define to 1 if pipe2 is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_PIPE2 */

/* Define to 1 if popen is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_POPEN */

/* Define to 1 if posix_openpt is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_POSIX_OPENPT */

/* Define to 1 if pread is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_PREAD */

/* Define to 1 if pselect is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_PSELECT */

/* Define to 1 if pthread_sigmask is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_PTHREAD_SIGMASK */

/* Define to 1 if ptsname is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_PTSNAME */

/* Define to 1 if ptsname_r is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_PTSNAME_R */

/* Define to 1 if pwrite is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_PWRITE */

/* Define to 1 if random is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_RANDOM */

/* Define to 1 if random_r is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_RANDOM_R */

/* Define to 1 if rawmemchr is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_RAWMEMCHR */

/* Define to 1 if readlink is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_READLINK */

/* Define to 1 if readlinkat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_READLINKAT */

/* Define to 1 if realpath is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_REALPATH */

/* Define to 1 if recv is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_RECV */

/* Define to 1 if recvfrom is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_RECVFROM */

/* Define to 1 if renameat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_RENAMEAT */

/* Define to 1 if rmdir is declared even after undefining macros. */
#define HAVE_RAW_DECL_RMDIR 1

/* Define to 1 if rpmatch is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_RPMATCH */

/* Define to 1 if secure_getenv is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SECURE_GETENV */

/* Define to 1 if select is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SELECT */

/* Define to 1 if send is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SEND */

/* Define to 1 if sendto is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SENDTO */

/* Define to 1 if setenv is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SETENV */

/* Define to 1 if sethostname is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SETHOSTNAME */

/* Define to 1 if setsockopt is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SETSOCKOPT */

/* Define to 1 if setstate is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SETSTATE */

/* Define to 1 if setstate_r is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SETSTATE_R */

/* Define to 1 if setusershell is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SETUSERSHELL */

/* Define to 1 if shutdown is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SHUTDOWN */

/* Define to 1 if sigaction is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SIGACTION */

/* Define to 1 if sigaddset is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SIGADDSET */

/* Define to 1 if sigdelset is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SIGDELSET */

/* Define to 1 if sigemptyset is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SIGEMPTYSET */

/* Define to 1 if sigfillset is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SIGFILLSET */

/* Define to 1 if sigismember is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SIGISMEMBER */

/* Define to 1 if sigpending is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SIGPENDING */

/* Define to 1 if sigprocmask is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SIGPROCMASK */

/* Define to 1 if sleep is declared even after undefining macros. */
#define HAVE_RAW_DECL_SLEEP 1

/* Define to 1 if snprintf is declared even after undefining macros. */
#define HAVE_RAW_DECL_SNPRINTF 1

/* Define to 1 if socket is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SOCKET */

/* Define to 1 if srandom is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SRANDOM */

/* Define to 1 if srandom_r is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SRANDOM_R */

/* Define to 1 if stat is declared even after undefining macros. */
#define HAVE_RAW_DECL_STAT 1

/* Define to 1 if stpcpy is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STPCPY */

/* Define to 1 if stpncpy is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STPNCPY */

/* Define to 1 if strcasecmp is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRCASECMP 1

/* Define to 1 if strcasestr is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STRCASESTR */

/* Define to 1 if strchrnul is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STRCHRNUL */

/* Define to 1 if strdup is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRDUP 1

/* Define to 1 if strerror_r is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STRERROR_R */

/* Define to 1 if strncasecmp is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRNCASECMP 1

/* Define to 1 if strncat is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRNCAT 1

/* Define to 1 if strndup is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STRNDUP */

/* Define to 1 if strnlen is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRNLEN 1

/* Define to 1 if strpbrk is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRPBRK 1

/* Define to 1 if strsep is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STRSEP */

/* Define to 1 if strsignal is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STRSIGNAL */

/* Define to 1 if strtod is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRTOD 1

/* Define to 1 if strtoimax is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRTOIMAX 1

/* Define to 1 if strtok_r is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STRTOK_R */

/* Define to 1 if strtoll is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRTOLL 1

/* Define to 1 if strtoull is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRTOULL 1

/* Define to 1 if strtoumax is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRTOUMAX 1

/* Define to 1 if strverscmp is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STRVERSCMP */

/* Define to 1 if symlink is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SYMLINK */

/* Define to 1 if symlinkat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SYMLINKAT */

/* Define to 1 if tmpfile is declared even after undefining macros. */
#define HAVE_RAW_DECL_TMPFILE 1

/* Define to 1 if ttyname_r is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_TTYNAME_R */

/* Define to 1 if unlink is declared even after undefining macros. */
#define HAVE_RAW_DECL_UNLINK 1

/* Define to 1 if unlinkat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_UNLINKAT */

/* Define to 1 if unlockpt is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_UNLOCKPT */

/* Define to 1 if unsetenv is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_UNSETENV */

/* Define to 1 if usleep is declared even after undefining macros. */
#define HAVE_RAW_DECL_USLEEP 1

/* Define to 1 if utimensat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_UTIMENSAT */

/* Define to 1 if vdprintf is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_VDPRINTF */

/* Define to 1 if vsnprintf is declared even after undefining macros. */
#define HAVE_RAW_DECL_VSNPRINTF 1

/* Define to 1 if wcpcpy is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_WCPCPY */

/* Define to 1 if wcpncpy is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_WCPNCPY */

/* Define to 1 if wcrtomb is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCRTOMB 1

/* Define to 1 if wcscasecmp is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_WCSCASECMP */

/* Define to 1 if wcscat is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSCAT 1

/* Define to 1 if wcschr is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSCHR 1

/* Define to 1 if wcscmp is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSCMP 1

/* Define to 1 if wcscoll is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSCOLL 1

/* Define to 1 if wcscpy is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSCPY 1

/* Define to 1 if wcscspn is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSCSPN 1

/* Define to 1 if wcsdup is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSDUP 1

/* Define to 1 if wcslen is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSLEN 1

/* Define to 1 if wcsncasecmp is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_WCSNCASECMP */

/* Define to 1 if wcsncat is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSNCAT 1

/* Define to 1 if wcsncmp is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSNCMP 1

/* Define to 1 if wcsncpy is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSNCPY 1

/* Define to 1 if wcsnlen is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSNLEN 1

/* Define to 1 if wcsnrtombs is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_WCSNRTOMBS */

/* Define to 1 if wcspbrk is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSPBRK 1

/* Define to 1 if wcsrchr is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSRCHR 1

/* Define to 1 if wcsrtombs is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSRTOMBS 1

/* Define to 1 if wcsspn is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSSPN 1

/* Define to 1 if wcsstr is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSSTR 1

/* Define to 1 if wcstok is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSTOK 1

/* Define to 1 if wcswidth is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_WCSWIDTH */

/* Define to 1 if wcsxfrm is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSXFRM 1

/* Define to 1 if wctob is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCTOB 1

/* Define to 1 if wcwidth is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_WCWIDTH */

/* Define to 1 if wmemchr is declared even after undefining macros. */
#define HAVE_RAW_DECL_WMEMCHR 1

/* Define to 1 if wmemcmp is declared even after undefining macros. */
#define HAVE_RAW_DECL_WMEMCMP 1

/* Define to 1 if wmemcpy is declared even after undefining macros. */
#define HAVE_RAW_DECL_WMEMCPY 1

/* Define to 1 if wmemmove is declared even after undefining macros. */
#define HAVE_RAW_DECL_WMEMMOVE 1

/* Define to 1 if wmemset is declared even after undefining macros. */
#define HAVE_RAW_DECL_WMEMSET 1

/* Define to 1 if _Exit is declared even after undefining macros. */
#define HAVE_RAW_DECL__EXIT 1

/* Define if the 'realloc' function is POSIX compliant. */
/* #undef HAVE_REALLOC_POSIX */

/* Define this if we have a functional realpath(3C) */
/* #undef HAVE_REALPATH */

/* Define to 1 if you have the <runetype.h> header file. */
/* #undef HAVE_RUNETYPE_H */

/* Define to 1 if the system has the type `sa_family_t'. */
/* #undef HAVE_SA_FAMILY_T */

/* Define to 1 if you have the `scm_gc_malloc_pointerless' function. */
/* #undef HAVE_SCM_GC_MALLOC_POINTERLESS */

/* Define to 1 if you have the <search.h> header file. */
#define HAVE_SEARCH_H 1

/* Define to 1 if you have the `secure_getenv' function. */
/* #undef HAVE_SECURE_GETENV */

/* Define to 1 if you have the `setdtablesize' function. */
/* #undef HAVE_SETDTABLESIZE */

/* Define to 1 if you have the `setenv' function. */
/* #undef HAVE_SETENV */

/* Define to 1 if you have the `setitimer' function. */
/* #undef HAVE_SETITIMER */

/* Define to 1 if you have the <setjmp.h> header file. */
/* #undef HAVE_SETJMP_H */

/* Define to 1 if you have the `shutdown' function. */
/* #undef HAVE_SHUTDOWN */

/* Define to 1 if 'sig_atomic_t' is a signed integer type. */
/* #undef HAVE_SIGNED_SIG_ATOMIC_T */

/* Define to 1 if 'wchar_t' is a signed integer type. */
/* #undef HAVE_SIGNED_WCHAR_T */

/* Define to 1 if 'wint_t' is a signed integer type. */
/* #undef HAVE_SIGNED_WINT_T */

/* Define to 1 if the system has the type `sigset_t'. */
/* #undef HAVE_SIGSET_T */

/* Define to 1 if the system has the type `size_t'. */
#define HAVE_SIZE_T 1

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define if the return value of the snprintf function is the number of of
 bytes (excluding the terminating NUL) that would have been produced if the
 buffer had been large enough. */
#define HAVE_SNPRINTF_RETVAL_C99 1

 /* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if you have the <stdatomic.h> header file. */
/* #undef HAVE_STDATOMIC_H */

/* Define to 1 if you have the <stdbool.h> header file. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define if <stdint.h> exists, doesn't clash with <sys/types.h>, and declares
 uintmax_t. */
#define HAVE_STDINT_H_WITH_UINTMAX 1

 /* Define to 1 if you have the <stdio_ext.h> header file. */
 /* #undef HAVE_STDIO_EXT_H */

 /* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror_r' function. */
/* #undef HAVE_STRERROR_R */

/* Define this if strftime() works */
/* #undef HAVE_STRFTIME */

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strncasecmp' function. */
#define HAVE_STRNCASECMP 1

/* Define to 1 if you have the `strndup' function. */
/* #undef HAVE_STRNDUP */

/* Define to 1 if you have the `strnlen' function. */
#define HAVE_STRNLEN 1

/* Define to 1 if you have the `strrchr' function. */
/* #undef HAVE_STRRCHR */

/* Define to 1 if you have the `strsignal' function. */
/* #undef HAVE_STRSIGNAL */

/* Define to 1 if you have the `strtok_r' function. */
/* #undef HAVE_STRTOK_R */

/* Define to 1 if the system has the type `struct addrinfo'. */
#define HAVE_STRUCT_ADDRINFO 1

/* Define to 1 if `iov_basea' is a member of `struct iovec'. */
/* #undef HAVE_STRUCT_IOVEC_IOV_BASEA */

/* Define to 1 if `sa_len' is a member of `struct sockaddr'. */
/* #undef HAVE_STRUCT_SOCKADDR_SA_LEN */

/* Define to 1 if the system has the type `struct sockaddr_storage'. */
#define HAVE_STRUCT_SOCKADDR_STORAGE 1

/* Define to 1 if `ss_family' is a member of `struct sockaddr_storage'. */
#define HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY 1

/* Define to 1 if `tm_zone' is a member of `struct tm'. */
/* #undef HAVE_STRUCT_TM_TM_ZONE */

/* Define to 1 if you have the `strverscmp' function. */
/* #undef HAVE_STRVERSCMP */

/* Define to 1 if you have the `symlink' function. */
/* #undef HAVE_SYMLINK */

/* Define to 1 if you have the <sysexits.h> header file. */
/* #undef HAVE_SYSEXITS_H */

/* Define to 1 if you have the <sys/bitypes.h> header file. */
/* #undef HAVE_SYS_BITYPES_H */

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
 */
 /* #undef HAVE_SYS_DIR_H */

 /* Define to 1 if you have the <sys/inttypes.h> header file. */
 /* #undef HAVE_SYS_INTTYPES_H */

 /* Define to 1 if you have the <sys/limits.h> header file. */
 /* #undef HAVE_SYS_LIMITS_H */

 /* Define to 1 if you have the <sys/mman.h> header file. */
 /* #undef HAVE_SYS_MMAN_H */

 /* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
*/
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
/* #undef HAVE_SYS_PARAM_H */

/* Define to 1 if you have the <sys/poll.h> header file. */
/* #undef HAVE_SYS_POLL_H */

/* Define to 1 if you have the <sys/procset.h> header file. */
/* #undef HAVE_SYS_PROCSET_H */

/* Define to 1 if you have the <sys/select.h> header file. */
/* #undef HAVE_SYS_SELECT_H */

/* Define to 1 if you have the <sys/socket.h> header file. */
/* #undef HAVE_SYS_SOCKET_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/stropts.h> header file. */
/* #undef HAVE_SYS_STROPTS_H */

/* Define to 1 if you have the <sys/timeb.h> header file. */
/* #undef HAVE_SYS_TIMEB_H */

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
/* #undef HAVE_SYS_UIO_H */

/* Define to 1 if you have the <sys/un.h> header file. */
/* #undef HAVE_SYS_UN_H */

/* Define to 1 if you have the <sys/wait.h> header file. */
/* #undef HAVE_SYS_WAIT_H */

/* Define to 1 if you have the `tcgetattr' function. */
/* #undef HAVE_TCGETATTR */

/* Define to 1 if you have the `tcsetattr' function. */
/* #undef HAVE_TCSETATTR */

/* Define to 1 if you have the <termios.h> header file. */
/* #undef HAVE_TERMIOS_H */

/* Define to 1 if you have the `timegm' function. */
#define HAVE_TIMEGM 1

/* Define to 1 if the system has the type `timezone_t'. */
/* #undef HAVE_TIMEZONE_T */

/* Define if struct tm has the tm_gmtoff member. */
/* #undef HAVE_TM_GMTOFF */

/* Define to 1 if your `struct tm' has `tm_zone'. Deprecated, use
 `HAVE_STRUCT_TM_TM_ZONE' instead. */
 /* #undef HAVE_TM_ZONE */

 /* Enable TPM */
 /* #undef HAVE_TROUSERS */

 /* Define to 1 if you have the `tsearch' function. */
#define HAVE_TSEARCH 1

 /* Enable TSS2 */
 /* #undef HAVE_TSS2 */

/* Define to 1 if you don't have `tm_zone' but do have the external array
 `tzname'. */
#define HAVE_TZNAME 1

 /* Define to 1 if you have the `tzset' function. */
#define HAVE_TZSET 1

/* Define to 1 if the system has the type `uint16_t'. */
#define HAVE_UINT16_T 1

/* Define to 1 if the system has the type `uint32_t'. */
#define HAVE_UINT32_T 1

/* Define to 1 if the system has the type `uint8_t'. */
#define HAVE_UINT8_T 1

/* Define to 1 if the system has the type `uintptr_t'. */
#define HAVE_UINTPTR_T 1

/* Define to 1 if the system has the type `uint_t'. */
#define HAVE_UINT_T 1

/* Define to 1 if you have the <unistd.h> header file. */
/* #undef HAVE_UNISTD_H */

/* Define to 1 if you have the `unsetenv' function. */
/* #undef HAVE_UNSETENV */

/* Define if you have the union nettle_block8 type */
#define HAVE_UNION_NETTLE_BLOCK8 1

/* Define to 1 if the system has the type 'unsigned long long int'. */
#define HAVE_UNSIGNED_LONG_LONG_INT 1

/* Define to 1 if you have the <utime.h> header file. */
/* #undef HAVE_UTIME_H */

/* Define to 1 if you have the <values.h> header file. */
/* #undef HAVE_VALUES_H */

/* Define to 1 if you have the <varargs.h> header file. */
/* #undef HAVE_VARARGS_H */

/* Define if you have a global __progname variable */
/* #undef HAVE_VAR___PROGNAME */

/* Define to 1 if you have the `vasnprintf' function. */
/* #undef HAVE_VASNPRINTF */

/* Have va_copy() */
/* #undef HAVE_VA_COPY */

/* Define to 1 if you have the `vfork' function. */
/* #undef HAVE_VFORK */

/* Define to 1 if you have the <vfork.h> header file. */
/* #undef HAVE_VFORK_H */

/* Define to 1 if you have the `vprintf' function. */
/* #undef HAVE_VPRINTF */

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define to 1 if the system has the type `wchar_t'. */
#define HAVE_WCHAR_T 1

/* Define to 1 if you have the `wcrtomb' function. */
#define HAVE_WCRTOMB 1

/* Define to 1 if you have the `wcslen' function. */
#define HAVE_WCSLEN 1

/* Define to 1 if you have the `wcsnlen' function. */
#define HAVE_WCSNLEN 1

/* Define to 1 if you have the <winsock2.h> header file. */
#define HAVE_WINSOCK2_H 1

/* Define to 1 if the system has the type `wint_t'. */
#define HAVE_WINT_T 1

/* Define to 1 if `fork' works. */
/* #undef HAVE_WORKING_FORK */

/* Define to 1 if O_NOATIME works. */
#define HAVE_WORKING_O_NOATIME 0

/* Define to 1 if O_NOFOLLOW works. */
#define HAVE_WORKING_O_NOFOLLOW 0

/* Define to 1 if `vfork' works. */
/* #undef HAVE_WORKING_VFORK */

/* Define to 1 if you have the <ws2tcpip.h> header file. */
#define HAVE_WS2TCPIP_H 1

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define to 1 if you have the `_fseeki64' function. */
#define HAVE__FSEEKI64 1

/* Define to 1 if you have the `_ftelli64' function. */
#define HAVE__FTELLI64 1

/* Define to 1 if you have the `_ftime' function. */
#define HAVE__FTIME 1

/* Define to 1 if you have the `_set_invalid_parameter_handler' function. */
#define HAVE__SET_INVALID_PARAMETER_HANDLER 1

/* Define to 1 if you have the `__fsetlocking' function. */
/* #undef HAVE___FSETLOCKING */

/* Define to 1 if you have the `__register_atfork' function. */
/* #undef HAVE___REGISTER_ATFORK */

/* Define to 1 if you have the `__secure_getenv' function. */
/* #undef HAVE___SECURE_GETENV */

/* Have __va_copy() */
/* #undef HAVE___VA_COPY */

/* inih maximum line size */
#define INI_MAX_LINE 2048

/* whether to allowin inline comments */
#define INI_ALLOW_INLINE_COMMENTS 1

/* whether to stop on first error */
#define INI_STOP_ON_FIRST_ERROR 1

/* The inline comment prefixes */
#define INI_INLINE_COMMENT_PREFIXES ";#"

/* The comment prefixes */
#define INI_START_COMMENT_PREFIXES ";#"

/* Define to 1 if lseek does not detect pipes. */
#define LSEEK_PIPE_BROKEN 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* If malloc(0) is != NULL, define this to 1. Otherwise define this to 0. */
#define MALLOC_0_IS_NONNULL 1

/* Define to a substitute value for mmap()'s MAP_ANONYMOUS flag. */
/* #undef MAP_ANONYMOUS */

/* Define this if optional arguments are disallowed */
/* #undef NO_OPTIONAL_OPT_ARGS */

/* no ssize_t type was found */
/* #undef NO_SSIZE_T */

/* Name of package */
#define PACKAGE "gnutls"

/* The iteration count for PKCS\#12 key derivation */
#define PKCS12_ITER_COUNT 600000

/* Define if <inttypes.h> exists and defines unusable PRI* macros. */
/* #undef PRI_MACROS_BROKEN */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
 'ptrdiff_t'. */
 /* #undef PTRDIFF_T_SUFFIX */

 /* name of regex header file */
 /* #undef REGEX_HEADER */

 /* Define to 1 if strerror(0) does not return a message implying success. */
 /* #undef REPLACE_STRERROR_0 */

 /* Define if vasnprintf exists but is overridden by gnulib. */
 /* #undef REPLACE_VASNPRINTF */

 /* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
'sig_atomic_t'. */
/* #undef SIG_ATOMIC_T_SUFFIX */

/* The size of `char*', as computed by sizeof. */
#if defined(__x86_64) || defined(_M_X64)
#define SIZEOF_CHARP 8
#else
#define SIZEOF_CHARP 4
#endif

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 4

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `unsigned int', as computed by sizeof. */
#define SIZEOF_UNSIGNED_INT 4

/* The size of `unsigned long int', as computed by sizeof. */
#define SIZEOF_UNSIGNED_LONG_INT 4

/* The size of `void *', as computed by sizeof. */
#if defined(__x86_64) || defined(_M_X64)
#define SIZEOF_VOID_P 8
#else
#define SIZEOF_VOID_P 4
#endif

/* Define as the maximum value of type 'size_t', if the system doesn't define
 it. */
#ifndef SIZE_MAX
 /* # undef SIZE_MAX */
#endif

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
 'size_t'. */
 /* #undef SIZE_T_SUFFIX */

 /* If using the C implementation of alloca, define if you know the
direction of stack growth for your system; otherwise it will be
automatically deduced at runtime.
 STACK_DIRECTION > 0 => grows toward higher addresses
 STACK_DIRECTION < 0 => grows toward lower addresses
 STACK_DIRECTION = 0 => direction of growth unknown */
 /* #undef STACK_DIRECTION */

 /* Define to 1 if the `S_IS*' macros in <sys/stat.h> do not work properly. */
 /* #undef STAT_MACROS_BROKEN */

 /* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if strerror_r returns char *. */
/* #undef STRERROR_R_CHAR_P */

/* The system priority file */
#define SYSTEM_PRIORITY_FILE "/etc/gnutls/default-priorities"

/* Define to 1 if all 'time_t' values fit in a 'long int'. */
/* #undef TIME_T_FITS_IN_LONG_INT */

/* Define to 1 if time_t is signed. */
#define TIME_T_IS_SIGNED 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* the location of the trousers library */
#define TROUSERS_LIB ""

/* The DNSSEC root key file */
#define UNBOUND_ROOT_KEY_FILE "C:\Program Files\Unbound\root.key"

/* Enable extensions on AIX 3, Interix.*/
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable general extensions on macOS.*/
#ifndef _DARWIN_C_SOURCE
# define _DARWIN_C_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.*/
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Use GNU style printf and scanf.*/
#ifndef __USE_MINGW_ANSI_STDIO
# define __USE_MINGW_ANSI_STDIO 1
#endif
/* Enable threading extensions on Solaris.*/
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.*/
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable X/Open extensions if necessary.HP-UX 11.11 defines
 mbstate_t only if _XOPEN_SOURCE is defined to 500, regardless of
 whether compiling with -Ae or -D_HPUX_SOURCE=1.*/
#ifndef _XOPEN_SOURCE
 /* # undef _XOPEN_SOURCE */
#endif
/* Enable general extensions on Solaris.*/
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif

#include "version.h"

/* Define to 1 if unsetenv returns void instead of int. */
/* #undef VOID_UNSETENV */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
 'wchar_t'. */
 /* #undef WCHAR_T_SUFFIX */

 /* Define if WSAStartup is needed. */
#define WINDOWS_SOCKETS 1

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
 'wint_t'. */
 /* #undef WINT_T_SUFFIX */

 /* Define this if a working libregex can be found */
 /* #undef WITH_LIBREGEX */

 /* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #undef WORDS_BIGENDIAN */
# endif
#endif

/* Enable large inode numbers on Mac OS X 10.5. */
#define _DARWIN_USE_64_BIT_INODE 1

/* Number of bits in a file offset, on hosts where this is settable. */
#define _FILE_OFFSET_BITS 64

/* Define to 1 if Gnulib overrides 'struct stat' on Windows so that struct
 stat.st_size becomes 64-bit. */
#define _GL_WINDOWS_64_BIT_ST_SIZE 1

 /* Define to 1 to make fseeko visible on some hosts (e.g. glibc 2.2). */
 /* #undef _LARGEFILE_SOURCE */

 /* Define for large files, on AIX-style hosts. */
 /* #undef _LARGE_FILES */

 /* Define to 1 if on MINIX. */
 /* #undef _MINIX */

 /* Define to 1 to make NetBSD features available. MINIX 3 needs this. */
 /* #undef _NETBSD_SOURCE */

 /* The _Noreturn keyword of C11.*/
#if ! (defined _Noreturn \
 || (defined __STDC_VERSION__ && 201112 <= __STDC_VERSION__))
# if (3 <= __GNUC__ || (__GNUC__ == 2 && 8 <= __GNUC_MINOR__) \
|| 0x5110 <= __SUNPRO_C)
#define _Noreturn __attribute__ ((__noreturn__))
# elif defined _MSC_VER && 1200 <= _MSC_VER
#define _Noreturn __declspec (noreturn)
# else
#define _Noreturn
# endif
#endif

/* Define to 2 if the system does not provide POSIX.1 features except with
 this defined. */
 /* #undef _POSIX_1_SOURCE */

 /* Define to 1 in order to get the POSIX compatible declarations of socket
functions. */
/* #undef _POSIX_PII_SOCKET */

/* Define to 1 if you need to in order for 'stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define to 1 if the system <stdint.h> predates C++11. */
/* #undef __STDC_CONSTANT_MACROS */

/* Define to 1 if the system <stdint.h> predates C++11. */
/* #undef __STDC_LIMIT_MACROS */

/* Define as a replacement for the ISO C99 __func__ variable. */
/* #undef __func__ */

/* Please see the Gnulib manual for how to use these macros.

 Suppress extern inline with HP-UX cc, as it appears to be broken; see
 <http://lists.gnu.org/archive/html/bug-texinfo/2013-02/msg00030.html>.

 Suppress extern inline with Sun C in standards-conformance mode, as it
 mishandles inline functions that call each other.E.g., for 'inline void f
 (void) { } inline void g (void) { f (); }', c99 incorrectly complains
 'reference to static identifier "f" in extern inline function'.
 This bug was observed with Sun C 5.12 SunOS_i386 2011/11/16.

 Suppress the use of extern inline on problematic Apple configurations.
 OS X 10.8 and earlier mishandle it; see, e.g.,
 <http://lists.gnu.org/archive/html/bug-gnulib/2012-12/msg00023.html>.
 OS X 10.9 has a macro __header_inline indicating the bug is fixed for C and
 for clang but remains for g++; see <http://trac.macports.org/ticket/41033>.
 Perhaps Apple will fix this some day.*/
#if (defined __APPLE__ \
 && (defined __header_inline \
 ? (defined __cplusplus && defined __GNUC_STDC_INLINE__ \
&& ! defined __clang__) \
 : ((! defined _DONT_USE_CTYPE_INLINE_ \
 && (defined __GNUC__ || defined __cplusplus)) \
|| (defined _FORTIFY_SOURCE && 0 < _FORTIFY_SOURCE \
&& defined __GNUC__ && ! defined __cplusplus))))
# define _GL_EXTERN_INLINE_APPLE_BUG
#endif
#if ((__GNUC__ \
? defined __GNUC_STDC_INLINE__ && __GNUC_STDC_INLINE__ \
: (199901L <= __STDC_VERSION__ \
 && !defined __HP_cc \
 && !(defined __SUNPRO_C && __STDC__))) \
 && !defined _GL_EXTERN_INLINE_APPLE_BUG)
# define _GL_INLINE inline
# define _GL_EXTERN_INLINE extern inline
# define _GL_EXTERN_INLINE_IN_USE
#elif (2 < __GNUC__ + (7 <= __GNUC_MINOR__) && !defined __STRICT_ANSI__ \
 && !defined _GL_EXTERN_INLINE_APPLE_BUG)
# if defined __GNUC_GNU_INLINE__ && __GNUC_GNU_INLINE__
 /* __gnu_inline__ suppresses a GCC 4.2 diagnostic.*/
#define _GL_INLINE extern inline __attribute__ ((__gnu_inline__))
# else
#define _GL_INLINE extern inline
# endif
# define _GL_EXTERN_INLINE extern
# define _GL_EXTERN_INLINE_IN_USE
#else
# define _GL_INLINE static _GL_UNUSED
# define _GL_EXTERN_INLINE static _GL_UNUSED
#endif

#if 4 < __GNUC__ + (6 <= __GNUC_MINOR__)
# if defined __GNUC_STDC_INLINE__ && __GNUC_STDC_INLINE__
#define _GL_INLINE_HEADER_CONST_PRAGMA
# else
#define _GL_INLINE_HEADER_CONST_PRAGMA \
 _Pragma ("GCC diagnostic ignored \"-Wsuggest-attribute=const\"")
# endif
 /* Suppress GCC's bogus "no previous prototype for 'FOO'"
and "no previous declaration for 'FOO'"diagnostics,
when FOO is an inline function in the header; see
<http://gcc.gnu.org/bugzilla/show_bug.cgi?id=54113>.*/
# define _GL_INLINE_HEADER_BEGIN \
_Pragma ("GCC diagnostic push") \
_Pragma ("GCC diagnostic ignored \"-Wmissing-prototypes\"") \
_Pragma ("GCC diagnostic ignored \"-Wmissing-declarations\"") \
_GL_INLINE_HEADER_CONST_PRAGMA
# define _GL_INLINE_HEADER_END \
_Pragma ("GCC diagnostic pop")
#else
# define _GL_INLINE_HEADER_BEGIN
# define _GL_INLINE_HEADER_END
#endif

 /* Define to `int' if <sys/types.h> doesn't define. */
#define gid_t int

/* Define to `__inline__' or `__inline' if that's what the C compiler
 calls it, or to nothing if 'inline' is not supported under any name.*/
#ifndef __cplusplus
 /* #undef inline */
#endif

/* Define to long or long long if <stdint.h> and <inttypes.h> don't define. */
/* #undef intmax_t */

/* Work around a bug in Apple GCC 4.0.1 build 5465: In C99 mode, it supports
 the ISO C 99 semantics of 'extern inline' (unlike the GNU C semantics of
 earlier versions), but does not display it by setting __GNUC_STDC_INLINE__.
 __APPLE__ && __MACH__ test for Mac OS X.
 __APPLE_CC__ tests for the Apple compiler and its version.
 __STDC_VERSION__ tests for the C99 mode.*/
#if defined __APPLE__ && defined __MACH__ && __APPLE_CC__ >= 5465 && !defined __cplusplus && __STDC_VERSION__ >= 199901L && !defined __GNUC_STDC_INLINE__
# define __GNUC_STDC_INLINE__ 1
#endif

 /* Define to the real name of the mktime_internal function. */
 /* #undef mktime_internal */

 /* Define to `int' if <sys/types.h> does not define. */
 /* #undef mode_t */

 /* Define to the name of the strftime replacement function. */
#define my_strftime nstrftime

/* Define to the type of st_nlink in struct stat, or a supertype. */
#define nlink_t int

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define as the type of the result of subtracting two pointers, if the system
 doesn't define it. */
 /* #undef ptrdiff_t */

 /* static lib rename */
#define read_file _gnutls_read_file

/* static lib rename */
#define secure_getenv _gnutls_secure_getenv

/* Define to the equivalent of the C99 'restrict' keyword, or to
 nothing if this is not supported.Do not define if restrict is
 supported directly.*/
#define restrict //__restrict
 /* Work around a bug in Sun C++: it does not support _Restrict or
__restrict__, even though the corresponding Sun C compiler ends up with
"#define restrict _Restrict" or "#define restrict __restrict__" in the
previous line.Perhaps some future version of Sun C++ will work with
restrict; if so, hopefully it defines __RESTRICT like Sun C does.*/
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* type to use in place of socklen_t if not defined */
/* #undef socklen_t */

/* Define as a signed type of the same size as size_t. */
/* #undef ssize_t */

/* Define to `int' if <sys/types.h> doesn't define. */
#define uid_t int

/* Define as a marker that can be attached to declarations that might not
be used.This helps to reduce warnings, such as from
GCC -Wunused-parameter.*/
#if __GNUC__ >= 3 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)
# define _GL_UNUSED __attribute__ ((__unused__))
#else
# define _GL_UNUSED
#endif
/* The name _UNUSED_PARAMETER_ is an earlier spelling, although the name
 is a misnomer outside of parameter lists.*/
#define _UNUSED_PARAMETER_ _GL_UNUSED

 /* gcc supports the "unused" attribute on possibly unused labels, and
g++ has since version 4.5.Note to support C++ as well as C,
_GL_UNUSED_LABEL should be used with a trailing ;*/
#if !defined __cplusplus || __GNUC__ > 4 \
|| (__GNUC__ == 4 && __GNUC_MINOR__ >= 5)
# define _GL_UNUSED_LABEL _GL_UNUSED
#else
# define _GL_UNUSED_LABEL
#endif

/* The __pure__ attribute was added in gcc 2.96.*/
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 96)
# define _GL_ATTRIBUTE_PURE __attribute__ ((__pure__))
#else
# define _GL_ATTRIBUTE_PURE /* empty */
#endif

/* The __const__ attribute was added in gcc 2.95.*/
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 95)
# define _GL_ATTRIBUTE_CONST __attribute__ ((__const__))
#else
# define _GL_ATTRIBUTE_CONST /* empty */
#endif

/* The nodiscard attribute was added in gcc 3.4.*/
#if __GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
# define _GL_ATTRIBUTE_NODISCARD __attribute__ ((warn_unused_result))
#else
# define _GL_ATTRIBUTE_NODISCARD /* empty */
#endif

/* The nodiscard attribute was added in gcc 3.3.*/
#if __GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 3)
# define _GL_ATTRIBUTE_NONNULL(...) __attribute__ ((nonnull __VA_ARGS__))
#else
# define _GL_ATTRIBUTE_NONNULL(...) /* empty */
#endif

/* The nodiscard attribute was added in gcc 3.0.*/
#if __GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 0)
# define _GL_ATTRIBUTE_MAYBE_UNUSED __attribute__ ((unused))
#else
# define _GL_ATTRIBUTE_MAYBE_UNUSED /* empty */
#endif

/* The nodiscard attribute was added in gcc 3.0.*/
#if __GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 0)
# define _GL_ATTRIBUTE_FALLTHROUGH __attribute__ ((fallthrough))
#else
# define _GL_ATTRIBUTE_FALLTHROUGH /* empty */
#endif

/* The deprecated attribute was added in gcc 3.1.*/
#  if __GNUC__ < 3 || (__GNUC__ == 3 && __GNUC_MINOR__ < 1)
#   define _GL_ATTRIBUTE_DEPRECATED /* empty */
#  else
#   define _GL_ATTRIBUTE_DEPRECATED __attribute__ ((__deprecated__))
#  endif

#define _GL_CMP(n1, n2) (((n1) > (n2)) - ((n1) < (n2)))

#ifndef WORD_BIT
/* Assume 'int' is 32 bits wide.*/
# define WORD_BIT 32
#endif

/* Define as `fork' if `vfork' does not work. */
/* #undef vfork */
