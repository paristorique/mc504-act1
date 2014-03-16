#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "verificacao.h"

typedef struct Linha Linha;
struct Linha {
	int numLine;
	int* sudoku;
};

void* verificarLinha(void *v){
struct Linha* linha=v;
int* toReturn=malloc(3*sizeof(int));
int numLine = (*linha).numLine;
int *sudoku = (*linha).sudoku;
int *numlinha;
numlinha = sudoku+numLine*9;
short int *ja = malloc(9*sizeof(short int)); //Abriga os valores existentes e não existentes em cada linha/coluna/quadrado. 
int i;
int j;
for(i=0;i<9;i++){
	ja[i]=0;} //Não há valores salvos nas linhas, colunas, etc. Então, assume-se que tudo é zero. (0 para valores inexistentes e 1 caso contrário)

for(i=0;i<9;i++){
	//Nesse caso, vamos assumir que não haja erros de digitação, ou seja, com dois valores iguais em uma mesma linha, coluna, etc. 
	j= *(numlinha+i);
	ja[j] = 1;
	//Quando encontra um valor, coloca-se 1 na posição em que ele foi encontrado. 
	//Por exemplo, se na coluna foi encontrado um 3, na terceira posição do vetor é colocado 1 no lugar do 0.
}

//Apos a verificacao dos números, exibe na tela os valores possíveis nas posições vazias. 
for (i = 0; i < 9; i++){
	j= *(numlinha+i);
	printf("Valores possíveis em %d:\n", numLine+1);
	if (ja[j]==0) printf("%d", j);
	printf("\n");
}
toReturn[0]=1;
toReturn[1]=numLine+1;
toReturn[2]=j;
return (void*) 0;
}

int dica(){
int *retorno=malloc(3*sizeof(int));
pthread_t thr[9];
int *sudoku = malloc(81*sizeof(char));
int i=0;
printf("Escrever o Sudoku linha por linha para exibir as dicas\n");

scanf( "%i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i", &sudoku[0], &sudoku[1], &sudoku[2],&sudoku[3],&sudoku[4],&sudoku[5],&sudoku[6],&sudoku[7],&sudoku[8],&sudoku[9],&sudoku[10], &sudoku[11], &sudoku[12],&sudoku[13],&sudoku[14],&sudoku[15],&sudoku[16],&sudoku[17],&sudoku[18],&sudoku[19],&sudoku[20], &sudoku[21], &sudoku[22],&sudoku[23],&sudoku[24],&sudoku[25],&sudoku[26],&sudoku[27],&sudoku[28],&sudoku[29],&sudoku[30], &sudoku[31], &sudoku[32],&sudoku[33],&sudoku[34],&sudoku[35],&sudoku[36],&sudoku[37],&sudoku[38],&sudoku[39],&sudoku[40], &sudoku[41], &sudoku[42],&sudoku[43],&sudoku[44],&sudoku[45],&sudoku[46],&sudoku[47],&sudoku[48],&sudoku[49],&sudoku[50], &sudoku[51], &sudoku[52],&sudoku[53],&sudoku[54],&sudoku[55],&sudoku[56],&sudoku[57],&sudoku[58],&sudoku[59],&sudoku[60], &sudoku[61], &sudoku[62],&sudoku[63],&sudoku[64],&sudoku[65],&sudoku[66],&sudoku[67],&sudoku[68],&sudoku[69],&sudoku[70], &sudoku[71], &sudoku[72],&sudoku[73],&sudoku[74],&sudoku[75],&sudoku[76],&sudoku[77],&sudoku[78],&sudoku[79],&sudoku[80]);
struct Linha linha;
linha.sudoku=sudoku;

/*//Convertendo os caracteres para números. No caso, os espaços vazios são lidos como "X", mas para realizar as operações, vamos convertê-los para "0". 
for (i = 0; i < 81, i++){
	if (sudoku[i] < 58) sudoku[i] = sudoku[i] - 48; //Convertendo os caracteres ascii para os números do sudoku. 57 = 9, 49 = 1, etc.  
	if ((sudoku[i] == 88) || (sudoku[i] == 120)) sudoku[i] = 0; //Caractere X ou x. Indica os espaços vazios.
}
*/

for (i = 0; i < 9; i++) {
	  linha.numLine=i;
	    pthread_create(&thr[i], NULL, verificarLinha, (void*) &linha);
	  }

for (i = 0; i < 9; i++) {
	    pthread_join(thr[i], (void **) retorno);

	} 



    return 0;

}

int main(){
dica();
return 0;
}
