all: exe

biblioteca2.o: biblioteca2.c
	gcc -c biblioteca2.c

main.o: main.c
	gcc -c main.c

exe: main.o biblioteca2.o
	gcc -o exe.x main.o biblioteca2.o

clean:
	rm -f *.x *.o
