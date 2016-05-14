CFLAGS=-Wall -Wextra -Wpedantic -fno-strict-aliasing -g

all:
	gcc ex1.c -o ex1.out

clean:
	rm -f ex1.out
