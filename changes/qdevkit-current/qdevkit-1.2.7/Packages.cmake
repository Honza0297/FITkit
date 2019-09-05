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
set(REVISION                           0)

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

# Include CPack
include(CPack)
