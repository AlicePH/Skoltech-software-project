#!/bin/bash
g++ ./src/sort.cpp -c
ar rvs ./src/libsort.a sort.o

g++ ./src/main.cpp -c
g++ main.o ./src/libsort.a -o result



