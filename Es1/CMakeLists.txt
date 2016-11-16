cmake_minimum_required(VERSION 3.6)
project(Es1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Es9.c main.c)
add_executable(Es1 ${SOURCE_FILES})