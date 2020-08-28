cmake_minimum_required(VERSION 3.17)
project(point)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-Wall")

add_executable(point main.cpp point.cpp point.h)