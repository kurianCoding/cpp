#CC variable carries the compiler 
CC=g++
#include any compilation flags to be used
#in CFLAGS
#CFLAGS=
hellomake: hello.cpp
	g++ -o hello hello.cpp
