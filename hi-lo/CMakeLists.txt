cmake_minimum_required(VERSION 3.17)
project(hi_lo)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-Wall")

add_executable(hi_lo main.cpp hi-lo-utils.cpp hi-lo-utils.h)