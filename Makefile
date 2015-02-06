
CFLAGS=$(shell pkg-config --libs --cflags cmockery2)

all: hash_test

hash_test: hash_test.c hash.c hash.h Makefile
	gcc -o hash_test hash_test.c hash.c $(CFLAGS)

clean:
	rm -f hash_test hash_xunit.xml
