#!/bin/bash
g++ ./src/sort.cpp -c
ar rvs ./src/sort.a ./src/sort.o

g++ ./src/main.cpp -c
g++ ./src/main.o ./src/sort.a -o result

g++ ./test/test.cpp -c
g++ ./test/test.o ./test/sort.a -o ./test/test


