cmake_minimum_required(VERSION 3.17)
project(int_array)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-Wall")

add_executable(int_array main.cpp int_array.cpp int_array.h)