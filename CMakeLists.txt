cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(SoftwareEngineering)

add_subdirectory (src)

enable_testing ()
add_subdirectory (test)
