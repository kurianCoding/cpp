CC=g++
CFLAGS=-Wall -g `pkg-config --cflags opencv`
LIBRARY=`pkg-config --libs opencv`
ODIR=/usr/local/bin
.cpp:
	$(CC) $@.cpp $(CFLAGS) -o $(PWD)/../cbin/$@ $(LIBRARY)
clean:
	rm -f hello
