cmake_minimum_required(VERSION 2.8)

project(BProject)
set(SOURCE_LIB lib.cpp)

add_library(BProject STATIC ${SOURCE_LIB})