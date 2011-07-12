linkedlist: lib.o linkedlist.o
	gcc -o linkedlist lib.o linkedlist.o

lib.o: lib.c
	gcc -Wall -ansi -o lib.o -c lib.c

linkedlist.o: linkedlist.c lib.h
	gcc -Wall -ansi -o linkedlist.o -c linkedlist.c

clean:
	rm -rf *.o linkedlist