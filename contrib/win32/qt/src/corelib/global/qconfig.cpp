/* License Info */
static const char qt_configure_licensee_str          [256 + 12] = "qt_lcnsuser=Open Source";
static const char qt_configure_licensed_products_str [256 + 12] = "qt_lcnsprod=OpenSource";

/* Installation date */
static const char qt_configure_installation          [12+11]    = "qt_instdate=2012-12-20";

/* Installation Info */
static const char qt_configure_prefix_path_str       [256 + 12] = "qt_prfxpath=/home/osboxes/Documents/vlc-3.0/contrib/i686-w64-mingw32";
#ifdef QT_BUILD_QMAKE
static const char qt_configure_ext_prefix_path_str   [256 + 12] = "qt_epfxpath=/home/osboxes/Documents/vlc-3.0/contrib/i686-w64-mingw32";
static const char qt_configure_host_prefix_path_str  [256 + 12] = "qt_hpfxpath=/home/osboxes/Documents/vlc-3.0/contrib/i686-w64-mingw32";
#endif

static const short qt_configure_str_offsets[] = {
     0, 4, 12, 16, 20, 24, 32, 40, 44, 46, 48, 61, 70,
#ifdef QT_BUILD_QMAKE
     76, 77, 81, 85, 87, 97,
#endif
};
static const char qt_configure_strs[] =
    "doc\0"
    "include\0"
    "lib\0"
    "bin\0"
    "bin\0"
    "plugins\0"
    "imports\0"
    "qml\0"
    ".\0"
    ".\0"
    "translations\0"
    "examples\0"
    "tests\0"
#ifdef QT_BUILD_QMAKE
    "\0"
    "bin\0"
    "lib\0"
    ".\0"
    "win32-g++\0"
    "linux-g++\0"
#endif
;

#define QT_CONFIGURE_SETTINGS_PATH "etc/xdg"

#ifdef QT_BUILD_QMAKE
# define QT_CONFIGURE_SYSROOTIFY_PREFIX false
#endif

/* strlen( "qt_lcnsxxxx" ) == 12 */
#define QT_CONFIGURE_LICENSEE qt_configure_licensee_str + 12
#define QT_CONFIGURE_LICENSED_PRODUCTS qt_configure_licensed_products_str + 12

#define QT_CONFIGURE_PREFIX_PATH qt_configure_prefix_path_str + 12
#ifdef QT_BUILD_QMAKE
# define QT_CONFIGURE_EXT_PREFIX_PATH qt_configure_ext_prefix_path_str + 12
# define QT_CONFIGURE_HOST_PREFIX_PATH qt_configure_host_prefix_path_str + 12
#endif
