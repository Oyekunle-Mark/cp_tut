cmake_minimum_required(VERSION 3.17)
project(shape)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-Wall")

add_executable(shape main.cpp shape.h point.h)
