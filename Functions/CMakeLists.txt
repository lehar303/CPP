project(Functions)
cmake_minimum_required(VERSION 3.22)

include_directories(compare.hpp)
file(GLOB SOURCES main.cpp)
file(GLOB SOURCES compare.cpp)
add_executable(test ${SOURCES})