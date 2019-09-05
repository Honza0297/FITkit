# Project
project(PyQuotes)
set(project pyquotes)
set(PLUGIN_LIST "${PLUGIN_LIST}${project} " PARENT_SCOPE)

# Includes
include_directories(${QT_INCLUDES}
                    ${CMAKE_BINARY_DIR}
                    ${CMAKE_CURRENT_BINARY_DIR})


set(plugin_py   quotes.py
                )

# Install
install( DIRECTORY
         DESTINATION ${PLUGIN_PREFIX}/${project}
         DIRECTORY_PERMISSIONS OWNER_READ OWNER_EXECUTE OWNER_WRITE
                              GROUP_READ GROUP_EXECUTE 
                              WORLD_READ WORLD_EXECUTE
         COMPONENT pyquotes
         )

install( FILES ${plugin_py} plugin.xml quotes.png
         DESTINATION ${PLUGIN_PREFIX}/${project}
         PERMISSIONS  OWNER_READ OWNER_EXECUTE OWNER_WRITE
                     GROUP_READ GROUP_EXECUTE
                     WORLD_READ WORLD_EXECUTE
         COMPONENT pyquotes
         )

# Component
set(CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL} pyquotes PARENT_SCOPE)
set(CPACK_COMPONENT_PYQUOTES_DISPLAY_NAME "PyQuotes" PARENT_SCOPE)
set(CPACK_COMPONENT_PYQUOTES_DESCRIPTION
"Show Discworld quotes in systray tooltip.")

include(${CMAKE_BINARY_DIR}/customize.cmake OPTIONAL)
include(${PROJECT_BINARY_DIR}/customize.cmake OPTIONAL)

