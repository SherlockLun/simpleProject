cmake_minimum_required(VERSION 3.10)
project(SimpleProject)

set(CMAKE_CXX_STANDARD 20)

include_directories(inc)

add_executable(SimpleProject 
    src/main.cpp
    src/calculator.cpp)