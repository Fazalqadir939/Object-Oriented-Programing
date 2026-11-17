cmake_minimum_required(VERSION 4.2)
project(code)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(code
        main.cpp
        problem1.cpp
        problem1.h
        problem2.cpp
        problem2.h
        problem3.cpp
        problem3.h)
