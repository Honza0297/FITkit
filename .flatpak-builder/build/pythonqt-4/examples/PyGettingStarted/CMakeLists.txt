set(module_name PyGettingStarted)
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR})

set(module_cpp main.cpp
               )
set(module_qrc PyGettingStarted.qrc
               )
                      	
qt4_add_resources(module_cpp ${module_qrc})
add_executable(${module_name} ${module_cpp} ${module_h})
target_link_libraries(${module_name} pythonqt ${QT_LIBRARIES})
