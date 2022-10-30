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

There are three ways to use this library in local computers, in all of them the first mandatory step is to clone the repository in the local machine.

Cloning the repository with all required submodules:

    git clone https://github.com/AlicePH/Skoltech-software-project
    git submodule add https://github.com/Morwenn/cpp-sort include/cpp-sort/stable_sort.h
    git submodule init
    git submodule update

### 1. Building from source

      
When you have cloned this project, follow the next steps.
   
   Use your command line in order to build the static library with the source file:
   
   ```
   g++ sort.cpp -c
   ar  rvs sort.a sort.o 
   ```

   Compile your main.cpp program:
   ```
   g++ main.cpp -c
   g++ main.o sort.a -o result
   ```

   And see the result:
   ```
   chmod +x result
   ./result
   ```

   To run the tests:
   ```
   chmod +x test.sh
   ./test.sh
   ```

### 2. Using CMake.

Run the lines below in the folder where the CMakeLists.txt is located to generate the Makefile and to install the dependencies specified in it.
```
cmake .
make Makefile
```

The output of using the steps above will allow to create the test file that runs the tests contained in test.cpp.

### 3. Using the Dockerfile.

To build the Dockerfile and run the container in interactive mode.

```
docker build -t project:v1.0 -f Dockerfile .
docker run -it --entrypoint bash project:v1.0
```

The container will run automatically in the project folder with all the dependencies pre installed and the repository cloned, the `test` file was was also generated.

### 4. Build using the bash files.

We also provide three .sh files that will install the dependencies, build the executable file and run the tests.

```
chmod +x dependencies.sh build.sh tests.sh
./dependencies.sh
./build.sh
./tests.sh
```

## Development

It is possible to make changes or additions 

## Build with cmake directly

