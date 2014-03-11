typedef struct Kase Kase;
Kase searchAndUpdate(Kase kase, int j);
void updateRow(Kase* sudoku,int i,int j);
void updateColumn(Kase* sudoku,int i, int j);
void updateSquare(Kase* sudoku,int i,int j);
int checkIfNotCompleted(Kase* sudoku);
int completar();
main();

