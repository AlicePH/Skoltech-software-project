Skoltech software project: sort library
===================================

## What is this project about?

In this project we provide a software `sort.h` for sorting arrays values.

Library contains:
1) Selection sort
2) Bubble sort
3) Insertion sort
4) Merge sort
5) Quick sort


## Quickstart
1) Installation:
    ```
    Clone the project
    git clone https://github.com/AlicePH/Skoltech-software-project
     ```   
2) When you have cloned this project, follow the next steps.
   
   Use your command line in order to build the static library with the source file:
   
   ```
   g++ sort.cpp -c
   ar  rvs sort.a sort.o 
   ```

   Compile your main.cpp program:
   ```
   g++ main.cpp -c
   g++ main.o sort.a -o test
   ```

   And see the result:
   ```
   ./test
   ```




## Development

## Build with cmake directly
1) Run CMake
    ```
    cmake .
    ```
    or 
    ```
    cmake ./CMakeLists.txt
    ```
2) Build project with Makefile
    ```
    make
    ```
