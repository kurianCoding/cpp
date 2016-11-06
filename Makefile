#CC variable carries the compiler 
CC=g++
#include any compilation flags to be used
#in CFLAGS
#CFLAGS=
.cpp:
	$(CC) $(CFLAGS) $@.cpp -o ../cppbin/$@
clean:
	rm ../cppbin/*
