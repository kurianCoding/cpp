CC=g++
CFLAGS=-Wall -g `pkg-config --cflags opencv`
LIBRARY=`pkg-config --libs opencv`
ODIR=/usr/local/bin
.cpp:
	$(CC) $@.cpp $(CFLAGS) -o /usr/local/bin/$@ $(LIBRARY)
clean:
	rm -f hello
