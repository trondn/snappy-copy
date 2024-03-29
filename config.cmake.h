/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 if the compiler supports __builtin_ctz and friends. */
#cmakedefine HAVE_BUILTIN_CTZ ${HAVE_BUILTIN_CTZ}

/* Define to 1 if the compiler supports __builtin_expect. */
#cmakedefine HAVE_BUILTIN_EXPECT ${HAVE_BUILTIN_EXPECT}

/* Define to 1 if you have the <byteswap.h> header file. */
#cmakedefine HAVE_BYTESWAP_H ${HAVE_BYTESWAP_H}

/* Define to 1 if you have the <dlfcn.h> header file. */
#cmakedefine HAVE_DLFCN_H ${HAVE_DLFCN_H}

/* Use the gflags package for command-line parsing. */
/* #undef HAVE_GFLAGS */

/* Defined when Google Test is available. */
/* #undef HAVE_GTEST */

/* Define to 1 if you have the <inttypes.h> header file. */
#cmakedefine HAVE_INTTYPES_H ${HAVE_INTTYPES_H}

/* Define to 1 if you have the `fastlz' library (-lfastlz). */
/* #undef HAVE_LIBFASTLZ */

/* Define to 1 if you have the `lzf' library (-llzf). */
/* #undef HAVE_LIBLZF */

/* Define to 1 if you have the `lzo2' library (-llzo2). */
/* #undef HAVE_LIBLZO2 */

/* Define to 1 if you have the `quicklz' library (-lquicklz). */
/* #undef HAVE_LIBQUICKLZ */

/* Define to 1 if you have the `z' library (-lz). */
#cmakedefine HAVE_LIBZ ${HAVE_LIBZ}

/* Define to 1 if you have the <sys/uio.h> header file. */
#cmakedefine HAVE_SYS_UIO_H ${HAVE_SYS_UIO_H}

/* Define to 1 if you have the <memory.h> header file. */
#cmakedefine HAVE_MEMORY_H ${HAVE_MEMORY_H}

/* Define to 1 if you have the <stddef.h> header file. */
#cmakedefine HAVE_STDDEF_H ${HAVE_STDDEF_H}

/* Define to 1 if you have the <stdint.h> header file. */
#cmakedefine HAVE_STDINT_H ${HAVE_STDINT_H}

/* Define to 1 if you have the <stdlib.h> header file. */
#cmakedefine HAVE_STDLIB_H ${HAVE_STDLIB_H}

/* Define to 1 if you have the <strings.h> header file. */
#cmakedefine HAVE_STRINGS_H ${HAVE_STRINGS_H}

/* Define to 1 if you have the <string.h> header file. */
#cmakedefine HAVE_STRING_H ${HAVE_STRING_H}

/* Define to 1 if you have the <sys/byteswap.h> header file. */
#cmakedefine HAVE_SYS_BYTESWAP_H ${HAVE_SYS_BYTESWAP_H}

/* Define to 1 if you have the <sys/endian.h> header file. */
#cmakedefine HAVE_SYS_ENDIAN_H ${HAVE_SYS_ENDIAN_H}

/* Define to 1 if you have the <sys/mman.h> header file. */
#cmakedefine HAVE_SYS_MMAN_H ${HAVE_SYS_MMAN_H}

/* Define to 1 if you have the <sys/resource.h> header file. */
#cmakedefine HAVE_SYS_RESOURCE_H ${HAVE_SYS_RESOURCE_H}

/* Define to 1 if you have the <sys/stat.h> header file. */
#cmakedefine HAVE_SYS_STAT_H ${HAVE_SYS_STAT_H}

/* Define to 1 if you have the <sys/time.h> header file. */
#cmakedefine HAVE_SYS_TIME_H ${HAVE_SYS_TIME_H}

/* Define to 1 if you have the <sys/types.h> header file. */
#cmakedefine HAVE_SYS_TYPES_H ${HAVE_SYS_TYPES}

/* Define to 1 if you have the <unistd.h> header file. */
#cmakedefine HAVE_UNISTD_H ${HAVE_UNISTD_H}

/* Define to 1 if you have the <windows.h> header file. */
#cmakedefine HAVE_WINDOWS_H ${HAVE_WINDOWS_H}

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel and VAX). */
#if defined __BIG_ENDIAN__
# define WORDS_BIGENDIAN 1
#elif ! defined __LITTLE_ENDIAN__
/* # undef WORDS_BIGENDIAN */
#endif

