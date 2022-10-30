#!/bin/bash

g++ ./test/test.cpp -c
g++ test.o ./src/libsort.a -o test
./test/test
