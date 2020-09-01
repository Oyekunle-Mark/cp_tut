cmake_minimum_required(VERSION 3.17)
project(c_11)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-Wall")

add_executable(c_11 main.cpp creature.cpp creature.h player.cpp player.h)
