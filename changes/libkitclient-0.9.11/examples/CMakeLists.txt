# Includes
include_directories(
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/../src)

# Basic example
add_definitions("-DKITCLIENT_DO_EXPORT")
add_executable(example example.cpp)
target_link_libraries(example kitclient_static)

# Qt4 device sharing example
if(QT4_FOUND)
    message(STATUS "Qt4 found, enabling device sharing example")
    add_executable(sharing sharing.cpp)
    target_link_libraries(sharing kitclient_static)
endif(QT4_FOUND)

# Scripts
#configure_file(example.py ${CMAKE_BINARY_DIR}/python/example.py COPYONLY)
#configure_file(terminal.py ${CMAKE_BINARY_DIR}/python/terminal.py COPYONLY)

include(${CMAKE_BINARY_DIR}/customize.cmake OPTIONAL)
include(${PROJECT_BINARY_DIR}/customize.cmake OPTIONAL)

