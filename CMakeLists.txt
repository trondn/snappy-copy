CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

INCLUDE(CheckIncludeFiles)
INCLUDE(CheckLibraryExists)
INCLUDE(CheckCXXSourceCompiles)

CHECK_INCLUDE_FILES("windows.h" HAVE_WINDOWS_H)
CHECK_INCLUDE_FILES("byteswap.h" HAVE_BYTESWAP_H)
CHECK_INCLUDE_FILES("dlfcn.h" HAVE_DLFCN_H)
CHECK_INCLUDE_FILES("inttypes.h" HAVE_INTTYPES_H)
CHECK_INCLUDE_FILES("memory.h" HAVE_MEMORY_H)
CHECK_INCLUDE_FILES("stddef.h" HAVE_STDDEF_H)
CHECK_INCLUDE_FILES("stdint.h" HAVE_STDINT_H)
CHECK_INCLUDE_FILES("stdlib.h" HAVE_STDLIB_H)
CHECK_INCLUDE_FILES("strings.h" HAVE_STRINGS_H)
CHECK_INCLUDE_FILES("string.h" HAVE_STRING_H)
CHECK_INCLUDE_FILES("sys/byteswap.h" HAVE_SYS_BYTESWAP_H)
CHECK_INCLUDE_FILES("sys/endian.h" HAVE_SYS_ENDIAN_H)
CHECK_INCLUDE_FILES("stdint.h" HAVE_STDINT_H)
CHECK_INCLUDE_FILES("sys/mman.h" HAVE_SYS_MMAN_H)
CHECK_INCLUDE_FILES("sys/resource.h" HAVE_SYS_RESOURCE_H)
CHECK_INCLUDE_FILES("sys/stat.h" HAVE_SYS_STAT_H)
CHECK_INCLUDE_FILES("sys/time.h" HAVE_SYS_TIME_H)
CHECK_INCLUDE_FILES("sys/types.h" HAVE_SYS_TYPES_H)
CHECK_INCLUDE_FILES("unistd.h" HAVE_UNISTD_H)
CHECK_INCLUDE_FILES("sys/uio.h" HAVE_SYS_UIO_H)

CHECK_LIBRARY_EXISTS(z deflate "" HAVE_LIBZ)

CHECK_CXX_SOURCE_COMPILES("int main(void) { return __builtin_expect(0, 1) ? 1 : 0; }"
                          HAVE_BUILTIN_EXPECT)

CHECK_CXX_SOURCE_COMPILES("int main(void) { return __builtin_ctzll(0) ? 1 : 0; }"
                          HAVE_BUILTIN_CTZ)


CONFIGURE_FILE(config.cmake.h config.h)
CONFIGURE_FILE(snappy-stubs-public.cmake.h.in snappy-stubs-public.h)
ADD_DEFINITIONS(-D_CRT_SECURE_NO_WARNINGS)
ADD_DEFINITIONS(-DHAVE_CONFIG_H)

IF (HAVE_LIBZ)
   SET(EXTRA_LIBS ${EXTRA_LIBS} z)
ENDIF (HAVE_LIBZ)

ADD_LIBRARY(snappy SHARED
            snappy-c.cc
            snappy-c.h
            snappy-sinksource.cc
            snappy-sinksource.h
            snappy-stubs-internal.cc
            snappy-stubs-public.h
            snappy-visibility.h
            snappy.cc
            snappy.h)
TARGET_LINK_LIBRARIES(snappy ${EXTRA_LIBS})

INSTALL(FILES snappy.h
              snappy-c.h
              snappy-sinksource.h
              snappy-stubs-public.h
              snappy-visibility.h
        DESTINATION include)

INSTALL(TARGETS snappy
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)

ENABLE_TESTING()
ADD_EXECUTABLE(snappy-unittest snappy_unittest.cc snappy-test.cc)
TARGET_LINK_LIBRARIES(snappy-unittest snappy)
ADD_TEST(snappy-unittest snappy-unittest)
