# Package information
set(CPACK_PACKAGE_NAME                 ${PROJECT_NAME})
set(CPACK_PACKAGE_VERSION              ${VERSION_STRING})
set(CPACK_PACKAGE_CONTACT              "Marek Vavrusa, marek@vavrusa.com")
set(CPACK_PACKAGE_DESCRIPTION          "FITKit development toolkit based on Qt4.")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY  ${CPACK_PACKAGE_DESCRIPTION}
                                       )

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
   set(CPACK_NSIS_DISPLAY_NAME            "QDevKit Plugins")
   set(CPACK_NSIS_HELP_LINK               "http://www.fit.vutbr.cz/fitkit")
   set(CPACK_NSIS_URL_INFO_ABOUT          "http://www.fit.vutbr.cz/fitkit")
endif(${WIN32})

set(CPACK_RESOURCE_FILE_LICENSE        ${CMAKE_CURRENT_SOURCE_DIR}/COPYING)

# General
set(REVISION                           0)

# Debian
if("${PACKAGE}" STREQUAL "Debian")

   # Settings
   set(CPACK_GENERATOR                    "DEB" PARENT_SCOPE)
   set(CPACK_PACKAGE_VERSION              ${CPACK_PACKAGE_VERSION}-${REVISION} PARENT_SCOPE)

   # Debian
   set(CPACK_DEBIAN_PACKAGE_DEPENDS       "qdevkit (>= 1.0.10), python-docutils" PARENT_SCOPE)
   set(DEBIAN_PACKAGE_BUILDS_DEPENDS      "qdevkit (>= 1.0.10), python-docutils" PARENT_SCOPE)

endif("${PACKAGE}" STREQUAL "Debian")

# Debian
if("${PACKAGE}" STREQUAL "Ubuntu")

   # Settings
   set(CPACK_GENERATOR                    "DEB" PARENT_SCOPE)
   set(CPACK_PACKAGE_VERSION              ${CPACK_PACKAGE_VERSION}-${REVISION}ubuntu PARENT_SCOPE)
   set(CPACK_PACKAGE_FILE_NAME            ${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION}ubuntu PARENT_SCOPE)

   # Debian
   set(CPACK_DEBIAN_PACKAGE_DEPENDS       "qdevkit (>= 1.0.10), python-docutils" PARENT_SCOPE)
   set(DEBIAN_PACKAGE_BUILDS_DEPENDS      "qdevkit (>= 1.0.10), python-docutils" PARENT_SCOPE)

endif("${PACKAGE}" STREQUAL "Ubuntu")

# SuSE
if("${PACKAGE}" STREQUAL "Suse")

   # Settings
   set(CPACK_GENERATOR                    "RPM" PARENT_SCOPE)
   set(CPACK_PACKAGE_VERSION              ${CPACK_PACKAGE_VERSION} PARENT_SCOPE)
   set(CPACK_RPM_PACKAGE_RELEASE          ${REVISION} PARENT_SCOPE)
   set(CPACK_PACKAGE_FILE_NAME            ${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION} PARENT_SCOPE)

   # Dependencies
   set(CPACK_RPM_PACKAGE_DEPENDS          "qdevkit, python-docutils" PARENT_SCOPE)

endif("${PACKAGE}" STREQUAL "Suse")

# Include CPack
include(CPack)
