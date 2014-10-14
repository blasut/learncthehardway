CFLAGS=-Wall -g

all:
	gcc ex1.c -o ex1.out
	gcc ex3.c -o ex3.out
	gcc ex4.c -o ex4.out

clean:
	rm -f ex1.out
	rm -f ex3.out
	rm -f ex4.out
