cmake_minimum_required(VERSION 3.13)
project(RecursionMaxArray)

set(CMAKE_CXX_STANDARD 14)

include_directories(RecursionMaxArray)
include_directories(RecursionMaxArray/Debug)

add_executable(RecursionMaxArray
        RecursionMaxArray/Debug/RecursionMaxArray.pch
        RecursionMaxArray/pch.cpp
        RecursionMaxArray/pch.h
        RecursionMaxArray/RecursionMaxArray.cpp)
