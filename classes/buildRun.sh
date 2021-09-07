#!/bin/bash
g++ -oclasses.o classes.cpp
g++ -oclasses-2.o classes-2.cpp

./classes.o
./classes-2.o
