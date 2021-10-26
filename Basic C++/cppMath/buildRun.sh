#!/bin/bash

gcc -ocppMath.o cppMath.cpp -lstdc++
gcc -ocmathEX.o cmathEX.cpp -lstdc++

./cppMath.o
./cmathEX.o
