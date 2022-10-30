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

The output of using the steps above will allow to create the main and test files. To run them:

```
./src/main  
./test/test
```

### 2. Using the Dockerfile.

To build the Dockerfile and run the container in interactive mode.

```
docker build -t project:v1.0 -f Dockerfile .
docker run -it --entrypoint bash project:v1.0
```

The container will run automatically and point to the project folder, to run the `main` and `test.sh` files do the following:

```
./src/main  
./test/test 
```

### 3. Build using the bash files.

We also provide three .sh files that will install the dependencies, build the executable file and run the tests.

```
chmod +x dependencies.sh build.sh test.sh
./dependencies.sh
./build.sh
chmod +x ./main
./main
./test
```
### 4. Building from source.
  
   Installing the dependencies of the library.
   
   ```
   apt-get update
   apt install build-essential
   ```
   
   Use your command line in order to build the static library with the source file:
   
   ```
   cd src
   g++ sort.cpp -c
   ar  rvs libsort.a sort.o 
   ```

   Compile your main.cpp program:
   
   ```
   g++ main.cpp -c
   g++ main.o libsort.a -o main
   ```

   And see the result:
   ```
   chmod +x ./main
   ./main
   ```

   To generate the test file and run ti:
   ```
   cd ../test
   g++ test.cpp -c
   g++ test.o ../src/libsort.a -o test
   chmod +x ./test
   ./test
   ```
## Development

Changes or additions to the sorting procedures can be done by modifying the `sort.cpp` file, there we programmed different sorting algorithms, new methods can also be added there and used in `main.cpp`, addictional tests or modifications to the existing ones need to be done in `tests.cpp`. 



