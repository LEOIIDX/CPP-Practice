#!/bin/sh
g++ -oclasses.o classes.cpp
g++ -oclasses-2.o classes-2.cpp
g++ -oclasses-3.o classes-3.cpp
g++ -oclasses-4.o classes-4.cpp
g++ -oclasses-5.o classes-5.cpp

./classes.o
./classes-2.o
./classes-3.o
./classes-4.o
./classes-5.o
