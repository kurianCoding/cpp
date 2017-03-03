CC=g++
CFLAGS=-Wall -g
ODIR=/usr/local/bin
.cpp:
	$(CC) $@.cpp $(CFLAGS) -o /usr/local/bin/$@
clean:
	rm -f hello
