# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


set(CPACK_BINARY_7Z "")
set(CPACK_BINARY_BUNDLE "")
set(CPACK_BINARY_CYGWIN "")
set(CPACK_BINARY_DEB "")
set(CPACK_BINARY_DRAGNDROP "")
set(CPACK_BINARY_FREEBSD "")
set(CPACK_BINARY_IFW "")
set(CPACK_BINARY_NSIS "")
set(CPACK_BINARY_NUGET "")
set(CPACK_BINARY_OSXX11 "")
set(CPACK_BINARY_PACKAGEMAKER "")
set(CPACK_BINARY_PRODUCTBUILD "")
set(CPACK_BINARY_RPM "")
set(CPACK_BINARY_STGZ "")
set(CPACK_BINARY_TBZ2 "")
set(CPACK_BINARY_TGZ "")
set(CPACK_BINARY_TXZ "")
set(CPACK_BINARY_TZ "")
set(CPACK_BINARY_WIX "")
set(CPACK_BINARY_ZIP "")
set(CPACK_BUILD_SOURCE_DIRS "/run/build/qdevkit;/run/build/qdevkit")
set(CPACK_CMAKE_GENERATOR "Unix Makefiles")
set(CPACK_COMPONENTS_ALL "application;libraries;headers;locales")
set(CPACK_COMPONENTS_ALL_SET_BY_USER "TRUE")
set(CPACK_COMPONENT_APPLICATION_DEPENDS "libraries")
set(CPACK_COMPONENT_APPLICATION_DESCRIPTION "QDevKit application.")
set(CPACK_COMPONENT_APPLICATION_DISPLAY_NAME "Application")
set(CPACK_COMPONENT_APPLICATION_GROUP "Runtime")
set(CPACK_COMPONENT_HEADERS_DESCRIPTION "C++ header files for compilation of plugins etc.")
set(CPACK_COMPONENT_HEADERS_DISPLAY_NAME "C++ Headers")
set(CPACK_COMPONENT_HEADERS_GROUP "Development")
set(CPACK_COMPONENT_LIBRARIES_DESCRIPTION "Shared libraries containing whole functionality for binary.")
set(CPACK_COMPONENT_LIBRARIES_DISPLAY_NAME "Shared libraries")
set(CPACK_COMPONENT_LIBRARIES_GROUP "Runtime")
set(CPACK_COMPONENT_LOCALES_DESCRIPTION "Localization files for application.")
set(CPACK_COMPONENT_LOCALES_DISPLAY_NAME "Localization")
set(CPACK_COMPONENT_LOCALES_GROUP "Runtime")
set(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
set(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
set(CPACK_GENERATOR "DEB;RPM")
set(CPACK_INSTALL_CMAKE_PROJECTS "/run/build/qdevkit;qdevkit;ALL;/")
set(CPACK_INSTALL_PREFIX "/app")
set(CPACK_MODULE_PATH "")
set(CPACK_NSIS_DISPLAY_NAME "qdevkit 1.2.7")
set(CPACK_NSIS_INSTALLER_ICON_CODE "")
set(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
set(CPACK_NSIS_PACKAGE_NAME "qdevkit 1.2.7")
set(CPACK_OUTPUT_CONFIG_FILE "/run/build/qdevkit/CPackConfig.cmake")
set(CPACK_PACKAGE_CONTACT "Marek Vavrusa, marek@vavrusa.com")
set(CPACK_PACKAGE_DEFAULT_LOCATION "/")
set(CPACK_PACKAGE_DESCRIPTION "FITKit development toolkit based on Qt4.")
set(CPACK_PACKAGE_DESCRIPTION_FILE "/usr/share/cmake-3.13/Templates/CPack.GenericDescription.txt")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "FITKit development toolkit based on Qt4.")
set(CPACK_PACKAGE_EXECUTABLES "qdevkit;QDevKit")
set(CPACK_PACKAGE_FILE_NAME "qdevkit-1.2.7")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "qdevkit 1.2.7")
set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "qdevkit 1.2.7")
set(CPACK_PACKAGE_NAME "qdevkit")
set(CPACK_PACKAGE_RELOCATABLE "true")
set(CPACK_PACKAGE_VENDOR "Humanity")
set(CPACK_PACKAGE_VERSION "1.2.7")
set(CPACK_PACKAGE_VERSION_MAJOR "0")
set(CPACK_PACKAGE_VERSION_MINOR "1")
set(CPACK_PACKAGE_VERSION_PATCH "1")
set(CPACK_RESOURCE_FILE_LICENSE "/run/build/qdevkit/COPYING")
set(CPACK_RESOURCE_FILE_README "/usr/share/cmake-3.13/Templates/CPack.GenericDescription.txt")
set(CPACK_RESOURCE_FILE_WELCOME "/usr/share/cmake-3.13/Templates/CPack.GenericWelcome.txt")
set(CPACK_SET_DESTDIR "OFF")
set(CPACK_SOURCE_7Z "")
set(CPACK_SOURCE_CYGWIN "")
set(CPACK_SOURCE_GENERATOR "TBZ2;TGZ;TXZ;TZ")
set(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/run/build/qdevkit/CPackSourceConfig.cmake")
set(CPACK_SOURCE_RPM "OFF")
set(CPACK_SOURCE_TBZ2 "ON")
set(CPACK_SOURCE_TGZ "ON")
set(CPACK_SOURCE_TXZ "ON")
set(CPACK_SOURCE_TZ "ON")
set(CPACK_SOURCE_ZIP "OFF")
set(CPACK_SYSTEM_NAME "Linux")
set(CPACK_TOPLEVEL_TAG "Linux")
set(CPACK_WIX_SIZEOF_VOID_P "8")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "/run/build/qdevkit/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()
