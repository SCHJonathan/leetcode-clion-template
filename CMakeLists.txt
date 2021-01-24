cmake_minimum_required(VERSION 3.17)
project(leetcode)

set(CMAKE_CXX_STANDARD 17)

add_executable(leetcode main.cpp include/pprint.h solution.h dependencies.h macros.h solution.cpp)