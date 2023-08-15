cmake_minimum_required(VERSION 3.26)
project(roadmapsh)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(roadmapsh
        functions.cpp
)
