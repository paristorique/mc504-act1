#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "completar.h"

//estrutura mandada nos thread para atualizar as linhas, as columnas e os quadrinhos
typedef struct KaseOfSudoku KaseOfSudoku;

//formato de cada quadrazinho do sudoku, com o numero de escolhas e as escolhas
typedef struct Kase Kase;


struct Kase {
	int numChoices;
	int* choices;
};



struct KaseOfSudoku{
	Kase* sudoku;
	int i; //posição
	int j; //numero coloquado na posição i
};

//Funcao que atualiza cada numero (do quadrininho kase), sabendo o valor j: seja, vai apagar o valor j do kase, e atualizar o numero de escolhas possiveis e as escolhas.
Kase searchAndUpdate(Kase kase, int j){
int i=0;
int boolean=1;
int l;
	while(i<kase.numChoices && boolean){
	//se o j e uma escolha possivel na posicao i, vamos apagar ele e decrecer o numero de escolhas
	if(kase.choices[i]==j){
		kase.numChoices--;
		boolean=0;
		for(l=i;l<kase.numChoices;l++){
		kase.choices[l]=kase.choices[l+1];
		}
	}
	i++;
	}
//se j nao é uma escolha possivel, fazemos nada
return kase;
}

//funçao para atualizar uma linha. Temos o sudoku completo, a posiçao e o numero que tem nessa posiçao em argumentos "reais".
void updateRow(void* v){
struct KaseOfSudoku* kos=v;
Kase* sudoku=(*kos).sudoku;
int i = (*kos).i;
int j= (*kos).j;
int l = (i/9)*9;
int k;
//vamos atualizar (cf funcao searchAndUpdate) todos os elementos da linha considerada
	for(k=l;k<l+9;k++){
		if(k!=i){
		sudoku[k]=searchAndUpdate(sudoku[k],j);}
	}


}

//funçao para atualizar uma columna. Temos o sudoku completo, a posiçao e o numero que tem nessa posiçao em argumentos "reais".
void updateColumn(void* v){
struct KaseOfSudoku* kos=v;
Kase* sudoku=(*kos).sudoku;
int i = (*kos).i;
int j= (*kos).j;
int l = i%9;
int k=l;
//vamos atualizar (cf funcao searchAndUpdate) todos os elementos da columna considerada
	while(k<81){
		if(k!=i){
		sudoku[k]=searchAndUpdate(sudoku[k],j);}
	k=k+9;
	}

}


//funçao para atualizar um quadrinho. Temos o sudoku completo, a posiçao e o numero que tem nessa posiçao em argumentos "reais".
void updateSquare(void* v){
struct KaseOfSudoku* kos=v;
Kase* sudoku=(*kos).sudoku;
int i = (*kos).i;
int j= (*kos).j;
int l = (((i/9)/3)*3)*9+i%9;
int k=l;
//vamos atualizar (cf funcao searchAndUpdate) todos os elementos do quadrinho considerado
	while(k<l+21){
		if(k!=i){
		sudoku[k]=searchAndUpdate(sudoku[k],j);}
	k++;
	if(k%3==0){
		k=k+6;
		}
	}
}

//funcao que verifica se um sudoku já foi compleado, seja que todos os numeros de escolhas são iguais a 0.
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

//funcao principal para completar nosso sudoku (que vamos escrever)
int completar(){
int i,j;
char** sudokuWritten = malloc(6561*sizeof(char*));
pthread_t thr[243]; //3 x 81 threads
struct Kase* sudoku = malloc(81*sizeof(Kase));
for(i=0;i<81;i++){
*(sudokuWritten+i*sizeof(char*))=malloc(81*sizeof(char));
}
//escritura do sudoku
printf("Escrever o Sudoku a verificar linha por linha\n");
scanf( "%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s", *sudokuWritten, *(sudokuWritten+sizeof(char*)), *(sudokuWritten+2*sizeof(char*)), *(sudokuWritten+3*sizeof(char*)), *(sudokuWritten+4*sizeof(char*)), *(sudokuWritten+5*sizeof(char*)), *(sudokuWritten+6*sizeof(char*)), *(sudokuWritten+7*sizeof(char*)), *(sudokuWritten+8*sizeof(char*)), *(sudokuWritten+9*sizeof(char*)), *(sudokuWritten+10*sizeof(char*)), *(sudokuWritten+11*sizeof(char*)), *(sudokuWritten+12*sizeof(char*)), *(sudokuWritten+13*sizeof(char*)), *(sudokuWritten+14*sizeof(char*)), *(sudokuWritten+15*sizeof(char*)), *(sudokuWritten+16*sizeof(char*)), *(sudokuWritten+17*sizeof(char*)), *(sudokuWritten+18*sizeof(char*)), *(sudokuWritten+19*sizeof(char*)), *(sudokuWritten+20*sizeof(char*)), *(sudokuWritten+21*sizeof(char*)), *(sudokuWritten+22*sizeof(char*)), *(sudokuWritten+23*sizeof(char*)), *(sudokuWritten+24*sizeof(char*)), *(sudokuWritten+25*sizeof(char*)), *(sudokuWritten+26*sizeof(char*)), *(sudokuWritten+27*sizeof(char*)), *(sudokuWritten+28*sizeof(char*)), *(sudokuWritten+29*sizeof(char*)), *(sudokuWritten+30*sizeof(char*)), *(sudokuWritten+31*sizeof(char*)), *(sudokuWritten+32*sizeof(char*)), *(sudokuWritten+33*sizeof(char*)), *(sudokuWritten+34*sizeof(char*)), *(sudokuWritten+35*sizeof(char*)), *(sudokuWritten+36*sizeof(char*)), *(sudokuWritten+37*sizeof(char*)), *(sudokuWritten+38*sizeof(char*)), *(sudokuWritten+39*sizeof(char*)), *(sudokuWritten+40*sizeof(char*)), *(sudokuWritten+41*sizeof(char*)), *(sudokuWritten+42*sizeof(char*)), *(sudokuWritten+43*sizeof(char*)), *(sudokuWritten+44*sizeof(char*)), *(sudokuWritten+45*sizeof(char*)), *(sudokuWritten+46*sizeof(char*)), *(sudokuWritten+47*sizeof(char*)), *(sudokuWritten+48*sizeof(char*)), *(sudokuWritten+49*sizeof(char*)), *(sudokuWritten+50*sizeof(char*)), *(sudokuWritten+51*sizeof(char*)), *(sudokuWritten+52*sizeof(char*)), *(sudokuWritten+53*sizeof(char*)), *(sudokuWritten+54*sizeof(char*)), *(sudokuWritten+55*sizeof(char*)), *(sudokuWritten+56*sizeof(char*)), *(sudokuWritten+57*sizeof(char*)), *(sudokuWritten+58*sizeof(char*)), *(sudokuWritten+59*sizeof(char*)), *(sudokuWritten+60*sizeof(char*)), *(sudokuWritten+61*sizeof(char*)), *(sudokuWritten+62*sizeof(char*)), *(sudokuWritten+63*sizeof(char*)), *(sudokuWritten+64*sizeof(char*)), *(sudokuWritten+65*sizeof(char*)), *(sudokuWritten+66*sizeof(char*)), *(sudokuWritten+67*sizeof(char*)), *(sudokuWritten+68*sizeof(char*)), *(sudokuWritten+69*sizeof(char*)), *(sudokuWritten+70*sizeof(char*)), *(sudokuWritten+71*sizeof(char*)), *(sudokuWritten+72*sizeof(char*)), *(sudokuWritten+73*sizeof(char*)), *(sudokuWritten+74*sizeof(char*)), *(sudokuWritten+75*sizeof(char*)), *(sudokuWritten+76*sizeof(char*)), *(sudokuWritten+77*sizeof(char*)), *(sudokuWritten+78*sizeof(char*)), *(sudokuWritten+79*sizeof(char*)), *(sudokuWritten+80*sizeof(char*)));
 

//conversão do sudoku escrito em um sudoku real, seja um array de 81 Kase (cf estrutura Kase)
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

KaseOfSudoku kos;
kos.sudoku=sudoku;

//Enquanto o sudoku nao esta completado, vamos no while
while(checkIfNotCompleted(sudoku)){
	for(i=0;i<81;i++){
	//se tem so uma escolha: escolhamos ele e vamos atualizar a linha, a columna e o quadrinho correspondante à posição i.
		if(sudoku[i].numChoices==1){
			j=sudoku[i].choices[0];
			sudoku[i].numChoices=0;
	kos.i=i;
	kos.j=j;

	//utilisação de 3 threads: um para a linha, um para a columna e um para o quadrinho
	//os 80 primeiros threads são reservados para as linhas, os 80 siguentes para as columnas e os 80 ultimos para os quadrinhos
 	pthread_create(&thr[i], NULL, updateRow, (void*) &kos);usleep(1000);
 	pthread_create(&thr[i+81], NULL, updateColumn, (void*) &kos);usleep(1000);
 	pthread_create(&thr[i+162], NULL, updateSquare, (void*) &kos);usleep(1000);
	pthread_join(thr[i], NULL);
	pthread_join(thr[i+81], NULL);
	pthread_join(thr[i+162], NULL);

		}
	}

}

//escrever o resultado
printf("Resultado: \n %d %d %d %d %d %d %d %d %d \n %d %d %d %d %d %d %d %d %d \n %d %d %d %d %d %d %d %d %d \n %d %d %d %d %d %d %d %d %d \n %d %d %d %d %d %d %d %d %d \n %d %d %d %d %d %d %d %d %d \n %d %d %d %d %d %d %d %d %d \n %d %d %d %d %d %d %d %d %d \n %d %d %d %d %d %d %d %d %d \n ", sudoku[0].choices[0], sudoku[1].choices[0], sudoku[2].choices[0], sudoku[3].choices[0], sudoku[4].choices[0], sudoku[5].choices[0], sudoku[6].choices[0], sudoku[7].choices[0], sudoku[8].choices[0], sudoku[9].choices[0], sudoku[10].choices[0], sudoku[11].choices[0], sudoku[12].choices[0], sudoku[13].choices[0], sudoku[14].choices[0], sudoku[15].choices[0], sudoku[16].choices[0], sudoku[17].choices[0], sudoku[18].choices[0], sudoku[19].choices[0], sudoku[20].choices[0], sudoku[21].choices[0], sudoku[22].choices[0], sudoku[23].choices[0], sudoku[24].choices[0], sudoku[25].choices[0], sudoku[26].choices[0], sudoku[27].choices[0], sudoku[28].choices[0], sudoku[29].choices[0], sudoku[30].choices[0], sudoku[31].choices[0], sudoku[32].choices[0], sudoku[33].choices[0], sudoku[34].choices[0], sudoku[35].choices[0], sudoku[36].choices[0], sudoku[37].choices[0], sudoku[38].choices[0], sudoku[39].choices[0],sudoku[40].choices[0], sudoku[41].choices[0], sudoku[42].choices[0], sudoku[43].choices[0], sudoku[44].choices[0], sudoku[45].choices[0], sudoku[46].choices[0], sudoku[47].choices[0], sudoku[48].choices[0], sudoku[49].choices[0], sudoku[50].choices[0], sudoku[51].choices[0], sudoku[52].choices[0], sudoku[53].choices[0], sudoku[54].choices[0], sudoku[55].choices[0], sudoku[56].choices[0], sudoku[57].choices[0], sudoku[58].choices[0], sudoku[59].choices[0], sudoku[60].choices[0], sudoku[61].choices[0], sudoku[62].choices[0], sudoku[63].choices[0], sudoku[64].choices[0], sudoku[65].choices[0], sudoku[66].choices[0], sudoku[67].choices[0], sudoku[68].choices[0], sudoku[69].choices[0], sudoku[70].choices[0], sudoku[71].choices[0], sudoku[72].choices[0], sudoku[73].choices[0], sudoku[74].choices[0], sudoku[75].choices[0], sudoku[76].choices[0], sudoku[77].choices[0], sudoku[78].choices[0], sudoku[79].choices[0], sudoku[80].choices[0]);
}

int main(){
completar();


}
