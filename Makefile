verificacao.o:verificacao.c
	gcc -Wall -g -pthread verificacao.c -o verificacao
	gcc -Wall -g -pthread completar.c -o completar
	gcc -Wall -g -pthread dicas.c -o dicas

