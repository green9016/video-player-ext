#configuration
CONFIG +=  cross_compile static qpa rtti no_mocdepend release qt_no_framework
host_build {
    QT_ARCH = x86_64
    QT_TARGET_ARCH = i386
} else {
    QT_ARCH = i386
    QMAKE_DEFAULT_LIBDIRS = /usr/lib/gcc/i686-w64-mingw32/7.3-win32 /usr/i686-w64-mingw32/lib
    QMAKE_DEFAULT_INCDIRS = /usr/lib/gcc/i686-w64-mingw32/7.3-win32/include/c++ /usr/lib/gcc/i686-w64-mingw32/7.3-win32/include/c++/i686-w64-mingw32 /usr/lib/gcc/i686-w64-mingw32/7.3-win32/include/c++/backward /usr/lib/gcc/i686-w64-mingw32/7.3-win32/include /usr/lib/gcc/i686-w64-mingw32/7.3-win32/include-fixed /usr/i686-w64-mingw32/include
}
QT_CONFIG +=  minimal-config small-config medium-config large-config full-config no-pkg-config c++11 c++14 c++1z accessibility static qpa reduce_relocations getaddrinfo jpeg png no-gif no-freetype harfbuzz zlib concurrent no-qml-debug release

#versioning
QT_VERSION = 5.6.3
QT_MAJOR_VERSION = 5
QT_MINOR_VERSION = 6
QT_PATCH_VERSION = 3

#namespaces
QT_LIBINFIX = 
QT_NAMESPACE = 

QT_EDITION = OpenSource

QT_DEFAULT_QPA_PLUGIN = qwindows

# pkgconfig
PKG_CONFIG_SYSROOT_DIR = 
PKG_CONFIG_LIBDIR = /usr/i686-w64-mingw32/lib/pkgconfig

QT_COMPILER_STDCXX = 199711
QT_GCC_MAJOR_VERSION = 7
QT_GCC_MINOR_VERSION = 3
QT_GCC_PATCH_VERSION = 0
