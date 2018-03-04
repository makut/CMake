cmake_minimum_required(VERSION 3.0)

project(MainProject)

find_package(PythonInterp 3 REQUIRED)
add_custom_command(OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/A/index.h
                   COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/A/preparing.py ${CMAKE_CURRENT_SOURCE_DIR}/A/index.h
                   DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/A/preparing.py)

add_subdirectory(B)

add_executable(project C/main.cpp C/main.h A/index.h)
target_include_directories(project PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(project BProject)