#!/bin/sh
QT_VERSION=5.6.3
export QT_VERSION
QT_VER=5.6
export QT_VER
QT_VERSION_TAG=563
export QT_VERSION_TAG
QT_INSTALL_DOCS=/home/osboxes/Documents/vlc-3.0/contrib/win32/qt/doc
export QT_INSTALL_DOCS
exec /home/osboxes/Documents/vlc-3.0/contrib/i686-w64-mingw32/bin/qdoc "$@"
