set(SOURCE_EXE main.cpp)


add_library(sort STATIC sort.cpp sort.h)
add_executable(main ${SOURCE_EXE})

target_link_libraries (main sort)