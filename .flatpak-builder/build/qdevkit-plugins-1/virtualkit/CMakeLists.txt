 # Project
project(VirtualKitPlugin)
set(project virtualkit)
set(PLUGIN_LIST "${PLUGIN_LIST}${project} " PARENT_SCOPE)

# Includes
include_directories(${CMAKE_CURRENT_BINARY_DIR})

# Sources
set(project_src  virtualkit.cpp)
set(project_moc  virtualkit.h)

# Qt4
qt4_add_resources(project_src virtualkit.qrc)

find_package(OpenCV)
find_library(CVLIB highgui)
if(EXISTS ${CVLIB} AND ${OpenCV_FOUND})
    message(STATUS "libcv found: ${CVLIB}")
    add_definitions("-DHAS_OPENCV")
    include_directories(${OpenCV_INCLUDE_DIR})
    set(project_src ${project_src} QOpenCVWidget.cpp)
    set(project_moc ${project_src} QOpenCVWidget.h)
else(EXISTS ${CVLIB} AND ${OpenCV_FOUND})
    message(STATUS "libcv not found")
endif(EXISTS ${CVLIB} AND ${OpenCV_FOUND})

# Automoc
qt4_automoc(${project_src})

# Create library
add_library(${project} SHARED ${project_src})
if(${OpenCV_FOUND})
    target_link_libraries(${project} ${QDEVKIT_LIBRARIES} ${LIBKITCLIENT_LIBRARIES} ${QT_LIBRARIES} ${CVLIB})
else(${OpenCV_FOUND})
    target_link_libraries(${project} ${QDEVKIT_LIBRARIES} ${LIBKITCLIENT_LIBRARIES} ${QT_LIBRARIES})
endif(${OpenCV_FOUND})


# Install
install(TARGETS ${project}
        DESTINATION ${PLUGIN_PREFIX}/${project}
        COMPONENT virtualkit 
        )

install(FILES plugin.xml
        DESTINATION ${PLUGIN_PREFIX}/${project}
        COMPONENT virtualkit 
        )

# Component
set(CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL} virtualkit PARENT_SCOPE)
set(CPACK_COMPONENT_COMPLETER_DISPLAY_NAME "Virtual FITkit" PARENT_SCOPE)
set(CPACK_COMPONENT_COMPLETER_DESCRIPTION  "")

include(${CMAKE_BINARY_DIR}/customize.cmake OPTIONAL)
include(${PROJECT_BINARY_DIR}/customize.cmake OPTIONAL)

