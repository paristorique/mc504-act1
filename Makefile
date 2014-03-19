CC = gcc
CFLAGS = -g -pthread

PROGRAMS = sudoku

all: $(PROGRAMS)

sudoku: verificacao.o completar.o dicas.o
	gcc -Wall -g -pthread verificacao.c -o verificacao
	gcc -Wall -g -pthread completar.c -o completar
	gcc -Wall -g -pthread dicas.c -o dicas

clean:
	rm -f *~ *.o $(PROGRAMS)
