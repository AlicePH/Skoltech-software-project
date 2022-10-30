#!/bin/bash
g++ sort.cpp -c
ar rvs sort.a sort.o

g++ main.cpp -c
g++ main.o sort.a -o result


