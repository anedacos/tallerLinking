CC=gcc
CFLAGS=-I.
DEPS = definicion.h
OBJ = main2.o addvec.o multvec.o vectorstruct.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

definicion: $(OBJ)
	gcc -Wall -g -o $@ $^ $(CFLAGS)
