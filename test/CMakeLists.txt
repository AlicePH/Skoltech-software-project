include_directories (./../src)
set(SOURCE_EXE test.cpp)

add_executable(test ${SOURCE_EXE})

target_link_libraries (test sort)