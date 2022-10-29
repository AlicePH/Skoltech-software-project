#!/bin/bash

g++ test.cpp -c
g++ test.o sort.a -o test
./test
