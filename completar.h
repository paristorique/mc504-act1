typedef struct Kase Kase;
typedef struct KaseOfSudoku KaseOfSudoku;
Kase searchAndUpdate(Kase kase, int j);
//void updateRow(Kase* sudoku,int i,int j);
//void updateColumn(Kase* sudoku,int i, int j);
//void updateSquare(Kase* sudoku,int i,int j);
void updateRow(void *v);
void updateColumn(void *v);
void updateSquare(void *v);
int checkIfNotCompleted(Kase* sudoku);
int completar();
main();

