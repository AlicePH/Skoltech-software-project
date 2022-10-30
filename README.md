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

Cloning the repository with all required submodules:

    git clone https://github.com/AlicePH/Skoltech-software-project
    cd Skoltech-software-project
    git submodule add https://github.com/Morwenn/cpp-sort include/cpp-sort/stable_sort.h
    git submodule init
    git submodule update

We show three ways to run the sorting library.

### 1. Using CMake.

Run the lines below in the folder where the CMakeLists.txt is located to generate the Makefile and to install the dependencies specified in it.
```
cmake .
make -f Makefile
```

The output of using the steps above will allow to create the test file that runs the tests contained in test.cpp.

### 2. Using the Dockerfile.

To build the Dockerfile and run the container in interactive mode.

```
docker build -t project:v1.0 -f Dockerfile .
docker run -it --entrypoint bash project:v1.0
```

The container will run automatically point the project folder, to run the `main` and `test.sh` fiels do the following:

```
./main  
./test.sh  
```

### 3. Build using the bash files.

We also provide three .sh files that will install the dependencies, build the executable file and run the tests.

```
chmod +x dependencies.sh build.sh tests.sh
./dependencies.sh
./build.sh
./test.sh
```
### 4. Building from source.
  
   Installing the dependencies of the library.
   
   ```
   apt-get update
   apt install build-essential
   ```
   
   Use your command line in order to build the static library with the source file:
   
   ```
   g++ sort.cpp -c
   ar  rvs sort.a sort.o 
   ```

   Compile your main.cpp program:
   
   ```
   g++ main.cpp -c
   g++ main.o sort.a -o main
   ```

   And see the result:
   ```
   chmod +x result
   ./main
   ```

   To run the tests:
   ```
   chmod +x test.sh
   ./test.sh
   ```
## Development

Changes or additions to the sorting procedures can be done by modifying the `sort.cpp` file, while changes to how they are delivered to the user go to `main.cpp`



