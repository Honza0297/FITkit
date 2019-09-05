# Project
project(RstBrowser)
set(project rstbrowser)
set(PLUGIN_LIST "${PLUGIN_LIST}${project} " PARENT_SCOPE)

# Includes
include_directories(${CMAKE_CURRENT_BINARY_DIR})

# Sources
set(project_src  rstbrowser.cpp)
set(project_moc  rstbrowser.h)

# Qt4
qt4_add_resources(project_src ${project}.qrc)
qt4_automoc(${project_src})

# Create library
add_library(${project} SHARED ${project_src})
target_link_libraries(${project} ${QDEVKIT_LIBRARIES} ${LIBKITCLIENT_LIBRARIES} ${QT_LIBRARIES} ${PYTHONQT_LIBRARIES} ${PYTHON_LIBRARIES})

# Install
install(TARGETS ${project}
        DESTINATION ${PLUGIN_PREFIX}/${project}
        COMPONENT ${project}
        )

install(FILES plugin.xml rstbrowser.png #rstbrowser.py
        DESTINATION ${PLUGIN_PREFIX}/${project}
        COMPONENT ${project}
        )

# Component
set(CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL} ${project} PARENT_SCOPE)
set(CPACK_COMPONENT_COMPLETER_DISPLAY_NAME "reSTBrowser" PARENT_SCOPE)
set(CPACK_COMPONENT_COMPLETER_DESCRIPTION "reST plugin component.")

include(${CMAKE_BINARY_DIR}/customize.cmake OPTIONAL)
include(${PROJECT_BINARY_DIR}/customize.cmake OPTIONAL)

