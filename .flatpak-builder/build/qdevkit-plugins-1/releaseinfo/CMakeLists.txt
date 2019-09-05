# Project
project(ReleaseInfo)
set(project releaseinfo)
set(PLUGIN_LIST "${PLUGIN_LIST}${project} " PARENT_SCOPE)

# Includes
include_directories(${QT_INCLUDES}
                    ${CMAKE_BINARY_DIR}
                    ${CMAKE_CURRENT_BINARY_DIR})


set(plugin_py   release.py
                )

# Install
install( DIRECTORY
         DESTINATION ${PLUGIN_PREFIX}/${project}
         DIRECTORY_PERMISSIONS OWNER_READ OWNER_EXECUTE OWNER_WRITE
                              GROUP_READ GROUP_EXECUTE 
                              WORLD_READ WORLD_EXECUTE
         COMPONENT releaseinfo
         )

install( FILES ${plugin_py} plugin.xml
         DESTINATION ${PLUGIN_PREFIX}/${project}
         PERMISSIONS  OWNER_READ OWNER_EXECUTE OWNER_WRITE
                     GROUP_READ GROUP_EXECUTE
                     WORLD_READ WORLD_EXECUTE
         COMPONENT releaseinfo
         )

# Component
set(CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL} releaseinfo PARENT_SCOPE)
set(CPACK_COMPONENT_PYQUOTES_DISPLAY_NAME "ReleaseInfo" PARENT_SCOPE)
set(CPACK_COMPONENT_PYQUOTES_DESCRIPTION "Informs about new releases of QDK.")

include(${CMAKE_BINARY_DIR}/customize.cmake OPTIONAL)
include(${PROJECT_BINARY_DIR}/customize.cmake OPTIONAL)

