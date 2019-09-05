 # Project
project(FkFlashPlugin)
set(project fkflash)
set(PLUGIN_LIST "${PLUGIN_LIST}${project} " PARENT_SCOPE)

# Includes
include_directories(${CMAKE_CURRENT_BINARY_DIR})

# Sources
set(project_src  fkflash.cpp)
set(project_moc  fkflash.h)

# Qt4
qt4_add_resources(project_src ${project}.qrc)
qt4_automoc(${project_src})

# Create library
add_library(${project} SHARED ${project_src})
target_link_libraries(${project} ${QDEVKIT_LIBRARIES} ${LIBKITCLIENT_LIBRARIES} ${QT_LIBRARIES} ${PYTHONQT_LIBRARIES} ${PYTHON_LIBRARIES})
if(${CMAKE_BUILD_TYPE} STREQUAL Debug)
    target_link_libraries(${project} ${PYTHON_DEBUG_LIBRARIES})
endif(${CMAKE_BUILD_TYPE} STREQUAL Debug)

# Install
install(TARGETS ${project}
        DESTINATION ${PLUGIN_PREFIX}/${project}
        COMPONENT ${project}
        )

install(FILES plugin.xml fkflash.png
        DESTINATION ${PLUGIN_PREFIX}/${project}
        COMPONENT ${project}
        )

# Component
set(CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL} ${project} PARENT_SCOPE)
set(CPACK_COMPONENT_COMPLETER_DISPLAY_NAME "FKFlash" PARENT_SCOPE)
set(CPACK_COMPONENT_COMPLETER_DESCRIPTION
"FKFlash component.")

include(${CMAKE_BINARY_DIR}/customize.cmake OPTIONAL)
include(${PROJECT_BINARY_DIR}/customize.cmake OPTIONAL)

