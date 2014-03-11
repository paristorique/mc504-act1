#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "completar.h"

/*typedef struct Quadro Quadro;
struct Quadro {
	int numQuadro;
	char* sudoku;
};

typedef struct Linha Linha;
struct Linha {
	int numLine;
	char* sudoku;
};

typedef struct Columna Columna;
struct Columna {
	int numCol;
	char* sudoku;
};
*/

//formato de cada quadrazinho do sudoku, com o numero de escolhas e as escolhas
typedef struct Kase Kase;
struct Kase {
	int numChoices;
	int* choices;
};

Kase searchAndUpdate(Kase kase, int j){
int i=0;
int boolean=1;
int l;
	while(i<kase.numChoices && boolean){
	if(kase.choices[i]==j){
		kase.numChoices--;
		boolean=0;
		for(l=i;l<kase.numChoices;l++){
		kase.choices[l]=kase.choices[l+1];
		}
	}
	i++;
	}
return kase;
}

void updateRow(Kase* sudoku,int i,int j){
int l = (i/9)*9;
int k;
	for(k=l;k<l+9;k++){
		if(k!=i){
		sudoku[k]=searchAndUpdate(sudoku[k],j);}
	}


}


void updateColumn(Kase* sudoku,int i, int j){
int l = i%9;
int k=l;
	while(k<81){
		if(k!=i){
		sudoku[k]=searchAndUpdate(sudoku[k],j);}
	k=k+9;
	}

}


void updateSquare(Kase* sudoku,int i,int j){

//TODO
}

//funcao que verifica se um sudoku já foi compleado
int checkIfNotCompleted(Kase* sudoku){
int i;
int j=0;
while(i<81 && j==0){
	if(sudoku[i].numChoices>0){
	j=1;	
	}
i++;
}
return j;
}

int completar(){
int i,j;
char** sudokuWritten = malloc(6561*sizeof(char*));
struct Kase* sudoku = malloc(81*sizeof(Kase));
for(i=0;i<81;i++){
*(sudokuWritten+i*sizeof(char*))=malloc(81*sizeof(char));
}
printf("Escrever o Sudoku a verificar linha por linha\n");
scanf( "%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s", *sudokuWritten, *(sudokuWritten+sizeof(char*)), *(sudokuWritten+2*sizeof(char*)), *(sudokuWritten+3*sizeof(char*)), *(sudokuWritten+4*sizeof(char*)), *(sudokuWritten+5*sizeof(char*)), *(sudokuWritten+6*sizeof(char*)), *(sudokuWritten+7*sizeof(char*)), *(sudokuWritten+8*sizeof(char*)), *(sudokuWritten+9*sizeof(char*)), *(sudokuWritten+10*sizeof(char*)), *(sudokuWritten+11*sizeof(char*)), *(sudokuWritten+12*sizeof(char*)), *(sudokuWritten+13*sizeof(char*)), *(sudokuWritten+14*sizeof(char*)), *(sudokuWritten+15*sizeof(char*)), *(sudokuWritten+16*sizeof(char*)), *(sudokuWritten+17*sizeof(char*)), *(sudokuWritten+18*sizeof(char*)), *(sudokuWritten+19*sizeof(char*)), *(sudokuWritten+20*sizeof(char*)), *(sudokuWritten+21*sizeof(char*)), *(sudokuWritten+22*sizeof(char*)), *(sudokuWritten+23*sizeof(char*)), *(sudokuWritten+24*sizeof(char*)), *(sudokuWritten+25*sizeof(char*)), *(sudokuWritten+26*sizeof(char*)), *(sudokuWritten+27*sizeof(char*)), *(sudokuWritten+28*sizeof(char*)), *(sudokuWritten+29*sizeof(char*)), *(sudokuWritten+30*sizeof(char*)), *(sudokuWritten+31*sizeof(char*)), *(sudokuWritten+32*sizeof(char*)), *(sudokuWritten+33*sizeof(char*)), *(sudokuWritten+34*sizeof(char*)), *(sudokuWritten+35*sizeof(char*)), *(sudokuWritten+36*sizeof(char*)), *(sudokuWritten+37*sizeof(char*)), *(sudokuWritten+38*sizeof(char*)), *(sudokuWritten+39*sizeof(char*)), *(sudokuWritten+40*sizeof(char*)), *(sudokuWritten+41*sizeof(char*)), *(sudokuWritten+42*sizeof(char*)), *(sudokuWritten+43*sizeof(char*)), *(sudokuWritten+44*sizeof(char*)), *(sudokuWritten+45*sizeof(char*)), *(sudokuWritten+46*sizeof(char*)), *(sudokuWritten+47*sizeof(char*)), *(sudokuWritten+48*sizeof(char*)), *(sudokuWritten+49*sizeof(char*)), *(sudokuWritten+50*sizeof(char*)), *(sudokuWritten+51*sizeof(char*)), *(sudokuWritten+52*sizeof(char*)), *(sudokuWritten+53*sizeof(char*)), *(sudokuWritten+54*sizeof(char*)), *(sudokuWritten+55*sizeof(char*)), *(sudokuWritten+56*sizeof(char*)), *(sudokuWritten+57*sizeof(char*)), *(sudokuWritten+58*sizeof(char*)), *(sudokuWritten+59*sizeof(char*)), *(sudokuWritten+60*sizeof(char*)), *(sudokuWritten+61*sizeof(char*)), *(sudokuWritten+62*sizeof(char*)), *(sudokuWritten+63*sizeof(char*)), *(sudokuWritten+64*sizeof(char*)), *(sudokuWritten+65*sizeof(char*)), *(sudokuWritten+66*sizeof(char*)), *(sudokuWritten+67*sizeof(char*)), *(sudokuWritten+68*sizeof(char*)), *(sudokuWritten+69*sizeof(char*)), *(sudokuWritten+70*sizeof(char*)), *(sudokuWritten+71*sizeof(char*)), *(sudokuWritten+72*sizeof(char*)), *(sudokuWritten+73*sizeof(char*)), *(sudokuWritten+74*sizeof(char*)), *(sudokuWritten+75*sizeof(char*)), *(sudokuWritten+76*sizeof(char*)), *(sudokuWritten+77*sizeof(char*)), *(sudokuWritten+78*sizeof(char*)), *(sudokuWritten+79*sizeof(char*)), *(sudokuWritten+80*sizeof(char*)));
 


for(i=0;i<81;i++){
char atual = (*(sudokuWritten+i*sizeof(char*)))[0];
j=0;
struct Kase* kase = malloc(sizeof(Kase));
(*kase).choices=malloc(sizeof(int*));
	if(atual==40){ //caso da parentese
	atual=(*(sudokuWritten+i*sizeof(char*)))[1];
		while(atual!=41){
		(*kase).choices[j]=atual-48;
		j++;
		atual=(*(sudokuWritten+i*sizeof(char*)))[j+1];
		}
	
	}else{
		(*kase).choices[j]=atual-48;
	}
(*kase).numChoices=j;
sudoku[i]=*kase;
}

while(checkIfNotCompleted(sudoku)){
	for(i=0;i<81;i++){
		if(sudoku[i].numChoices==1){
			j=sudoku[i].choices[0];
			sudoku[i].numChoices=0;
			updateRow(sudoku,i,j);
			updateColumn(sudoku,i,j);
			updateSquare(sudoku,i,j);
		}
	}

}


}

int main(){
completar();


}
