cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(SoftwareEngineering)

set(SOURCE_EXE main.cpp)
set(SOURCE_LIB sort.cpp)

add_library(sort STATIC ${SOURCE_LIB})
add_executable(main ${SOURCE_EXE})

target_link_libraries(main sort)