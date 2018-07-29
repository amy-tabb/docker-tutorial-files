#!/bin/sh
#Throwing in OpenMP, we don't need it, to see if it will compile.

g++ src/*.cpp -o hello3 -fopenmp -std=gnu++11 -Wall -lgomp 
