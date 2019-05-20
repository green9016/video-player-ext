# Install script for directory: /home/osboxes/Documents/vlc-3.0/contrib/win32/fluidlite

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/osboxes/Documents/vlc-3.0/contrib/i686-w64-mingw32")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/osboxes/Documents/vlc-3.0/contrib/win32/fluidlite/libfluidlite.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/osboxes/Documents/vlc-3.0/contrib/win32/fluidlite/include/fluidlite.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/fluidsynth" TYPE FILE FILES
    "/home/osboxes/Documents/vlc-3.0/contrib/win32/fluidlite/include/fluidsynth/types.h"
    "/home/osboxes/Documents/vlc-3.0/contrib/win32/fluidlite/include/fluidsynth/settings.h"
    "/home/osboxes/Documents/vlc-3.0/contrib/win32/fluidlite/include/fluidsynth/synth.h"
    "/home/osboxes/Documents/vlc-3.0/contrib/win32/fluidlite/include/fluidsynth/sfont.h"
    "/home/osboxes/Documents/vlc-3.0/contrib/win32/fluidlite/include/fluidsynth/ramsfont.h"
    "/home/osboxes/Documents/vlc-3.0/contrib/win32/fluidlite/include/fluidsynth/log.h"
    "/home/osboxes/Documents/vlc-3.0/contrib/win32/fluidlite/include/fluidsynth/misc.h"
    "/home/osboxes/Documents/vlc-3.0/contrib/win32/fluidlite/include/fluidsynth/mod.h"
    "/home/osboxes/Documents/vlc-3.0/contrib/win32/fluidlite/include/fluidsynth/gen.h"
    "/home/osboxes/Documents/vlc-3.0/contrib/win32/fluidlite/include/fluidsynth/voice.h"
    "/home/osboxes/Documents/vlc-3.0/contrib/win32/fluidlite/include/fluidsynth/version.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/osboxes/Documents/vlc-3.0/contrib/win32/fluidlite/fluidlite.pc")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/osboxes/Documents/vlc-3.0/contrib/win32/fluidlite/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
