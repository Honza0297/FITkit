# Package information
set(CPACK_PACKAGE_NAME                 ${PROJECT_NAME})
set(CPACK_PACKAGE_VERSION              ${VERSION_STRING})
set(CPACK_PACKAGE_CONTACT              "Marek Vavrusa, marek@vavrusa.com")
set(CPACK_PACKAGE_DESCRIPTION          "FITKit development toolkit based on Qt4.")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY  ${CPACK_PACKAGE_DESCRIPTION})

# Set components
set(CPACK_COMPONENTS_ALL application libraries headers locales)
set(CPACK_COMPONENT_APPLICATION_DISPLAY_NAME "Application")
set(CPACK_COMPONENT_LIBRARIES_DISPLAY_NAME "Shared libraries")
set(CPACK_COMPONENT_HEADERS_DISPLAY_NAME "C++ Headers")
set(CPACK_COMPONENT_LOCALES_DISPLAY_NAME "Localization")
set(CPACK_COMPONENT_APPLICATION_DESCRIPTION
    "QDevKit application.")
set(CPACK_COMPONENT_LIBRARIES_DESCRIPTION
    "Shared libraries containing whole functionality for binary.")
set(CPACK_COMPONENT_HEADERS_DESCRIPTION
    "C++ header files for compilation of plugins etc.")
set(CPACK_COMPONENT_LOCALES_DESCRIPTION
    "Localization files for application.")
set(CPACK_COMPONENT_APPLICATION_DEPENDS libraries)
set(CPACK_COMPONENT_APPLICATION_GROUP "Runtime")
set(CPACK_COMPONENT_LIBRARIES_GROUP "Runtime")
set(CPACK_COMPONENT_LOCALES_GROUP "Runtime")
set(CPACK_COMPONENT_HEADERS_GROUP "Development")

# Package settings
if(${UNIX})
   set(CPACK_PACKAGE_NAME                 ${PROJECT_NAME})
   set(CPACK_GENERATOR                    "DEB;RPM")
   set(CPACK_CMAKE_GENERATOR              "Unix Makefiles")
   set(CPACK_PACKAGE_FILE_NAME            ${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION})
endif(${UNIX})

if(${WIN32})
   set(CPACK_GENERATOR                    "NSIS")
   set(CPACK_CMAKE_GENERATOR              "MinGW Makefiles")
   set(CPACK_PACKAGE_NAME                 ${PROJECT_NAME})
   set(CPACK_PACKAGE_VENDOR               "VUT FIT")
   set(CPACK_PACKAGE_INSTALL_DIRECTORY    "QDevKit")
   set(CPACK_PACKAGE_FILE_NAME            "${PROJECT_NAME}-${VERSION_STRING}-win32")
   set(CPACK_NSIS_DISPLAY_NAME            "QDevKit")
   set(CPACK_NSIS_HELP_LINK               "http://www.fit.vutbr.cz/fitkit")
   set(CPACK_NSIS_URL_INFO_ABOUT          "http://www.fit.vutbr.cz/fitkit")
   set(CPACK_NSIS_MUI_ICON                "${CMAKE_SOURCE_DIR}/icons/qdevkit.ico")
   set(CPACK_NSIS_MODIFY_PATH             "ON")
endif(${WIN32})

set(CPACK_RESOURCE_FILE_LICENSE        ${CMAKE_CURRENT_SOURCE_DIR}/COPYING)
set(CPACK_PACKAGE_EXECUTABLES          "${PROJECT_NAME};QDevKit")

# General
set(REVISION                           1)

# Debian
if("${PACKAGE}" STREQUAL "Debian")

   # Settings
   set(CPACK_GENERATOR                    "DEB" PARENT_SCOPE)
   set(CPACK_PACKAGE_VERSION              ${CPACK_PACKAGE_VERSION}-${REVISION} PARENT_SCOPE)

   # Dependencies
   set(CPACK_DEBIAN_PACKAGE_DEPENDS       "fcmake (>= 0.2.2), libkitclient (>= 0.2.7), libpythonqt (>= 1.0.3), libqt4-core, libqt4-gui, libqt4-xml, libqt4-svg, libqt4-network" PARENT_SCOPE)
   set(DEBIAN_PACKAGE_BUILDS_DEPENDS      "fcmake (>= 0.2.2), libkitclient (>= 0.2.7), libpythonqt (>= 1.0.3), libqt4-dev" PARENT_SCOPE)
   set(DEBIAN_PACKAGE_RECOMMENDS          "fkflash, subversion" PARENT_SCOPE)

endif("${PACKAGE}" STREQUAL "Debian")

# Ubuntu
if("${PACKAGE}" STREQUAL "Ubuntu")

   # Settings
   set(CPACK_GENERATOR                    "DEB" PARENT_SCOPE)
   set(CPACK_PACKAGE_VERSION              ${CPACK_PACKAGE_VERSION}-${REVISION}ubuntu PARENT_SCOPE)
   set(CPACK_PACKAGE_FILE_NAME            ${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION}ubuntu PARENT_SCOPE)

   # Dependencies
   set(CPACK_DEBIAN_PACKAGE_DEPENDS       "fcmake (>= 0.2.2), libkitclient (>= 0.2.7), libpythonqt (>= 1.0.3), libqt4-core, libqt4-gui, libqt4-xml, libqt4-svg, libqt4-network" PARENT_SCOPE)
   set(DEBIAN_PACKAGE_BUILDS_DEPENDS      "fcmake (>= 0.2.2), libkitclient (>= 0.2.7), libpythonqt (>= 1.0.3), libqt4-dev" PARENT_SCOPE)
   set(DEBIAN_PACKAGE_RECOMMENDS          "fkflash, subversion" PARENT_SCOPE)

endif("${PACKAGE}" STREQUAL "Ubuntu")

# SuSE
if("${PACKAGE}" STREQUAL "Suse")

   # Settings
   set(CPACK_GENERATOR                    "RPM" PARENT_SCOPE)
   set(CPACK_PACKAGE_VERSION              ${CPACK_PACKAGE_VERSION} PARENT_SCOPE)
   set(CPACK_RPM_PACKAGE_RELEASE          ${REVISION} PARENT_SCOPE)
   set(CPACK_PACKAGE_FILE_NAME            ${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION} PARENT_SCOPE)

   # Dependencies
   set(CPACK_RPM_PACKAGE_DEPENDS          "fcmake, libkitclient, libpythonqt, libqt4, libqt4-x11" PARENT_SCOPE)

endif("${PACKAGE}" STREQUAL "Suse")

# Fedora
if("${PACKAGE}" STREQUAL Fedora)
   # Get Fedora release number
   file(READ /etc/fedora-release FEDORA_RELEASE)
   string(REPLACE " " ";" FEDORA_RELEASE "${FEDORA_RELEASE}")
   list(GET FEDORA_RELEASE 2 FEDORA_RELEASE_NUMBER)

   # Settings
   set(CPACK_GENERATOR                    "RPM")
   set(CPACK_RPM_PACKAGE_RELEASE          ${REVISION}.fc${FEDORA_RELEASE_NUMBER})
   set(CPACK_RPM_PACKAGE_GROUP            "Development/Tools")
   set(CPACK_RPM_PACKAGE_LICENSE          "GPLv2+")
   set(CPACK_RPM_PACKAGE_VENDOR           "Faculty of Information Technology BUT")
   set(CPACK_RPM_PACKAGE_URL              "http://merlin.fit.vutbr.cz/FITkit")
   set(CPACK_RPM_PACKAGE_DESCRIPTION      " ")
   set(CPACK_PACKAGE_FILE_NAME            ${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION}-${CPACK_RPM_PACKAGE_RELEASE}.${CMAKE_SYSTEM_PROCESSOR})

   # Directories excluded from the auto-generated list of paths
   set(CPACK_RPM_EXCLUDE_FROM_AUTO_FILELIST
      /usr
      /usr/bin
      /usr/include
      /usr/lib64
      /usr/share
      /usr/share/applications
      /usr/share/icons
      /usr/share/icons/hicolor
      /usr/share/icons/hicolor/128x128
      /usr/share/icons/hicolor/128x128/apps
      /usr/share/icons/hicolor/16x16
      /usr/share/icons/hicolor/16x16/apps
      /usr/share/icons/hicolor/22x22
      /usr/share/icons/hicolor/22x22/apps
      /usr/share/icons/hicolor/24x24
      /usr/share/icons/hicolor/24x24/apps
      /usr/share/icons/hicolor/32x32
      /usr/share/icons/hicolor/32x32/apps
      /usr/share/icons/hicolor/36x36
      /usr/share/icons/hicolor/36x36/apps
      /usr/share/icons/hicolor/48x48
      /usr/share/icons/hicolor/48x48/apps
      /usr/share/icons/hicolor/64x64
      /usr/share/icons/hicolor/64x64/apps
      /usr/share/icons/hicolor/72x72
      /usr/share/icons/hicolor/72x72/apps
      /usr/share/icons/hicolor/96x96
      /usr/share/icons/hicolor/96x96/apps
      /usr/share/icons/hicolor/scalable
      /usr/share/icons/hicolor/scalable/apps)

   # Scriptlets to update the icon cache
   set(CPACK_RPM_POST_INSTALL_SCRIPT_FILE
      ${CMAKE_SOURCE_DIR}/contrib/fedora/post.sh)
   set(CPACK_RPM_POST_UNINSTALL_SCRIPT_FILE
      ${CMAKE_SOURCE_DIR}/contrib/fedora/postun.sh)
   file(READ ${CMAKE_SOURCE_DIR}/contrib/fedora/posttrans.sh POST_TRANSACTION_SCRIPT)
   set(CPACK_RPM_SPEC_MORE_DEFINE
      "%posttrans -p /bin/sh\n${POST_TRANSACTION_SCRIPT}")

endif("${PACKAGE}" STREQUAL Fedora)

# Include CPack
include(CPack)
