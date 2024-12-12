#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main(){
int alunos[10][3],pior1,pior2,pior3;
int indexi1,indexi2,indexi3;

srand (time(NULL));


for (int i=0;i<10;i++){
    for (int j=0;j<3;j++){
        alunos[i][j] = rand () % 10;
    }

}

pior1 = alunos[0][0];
pior2 = alunos[0][1];
pior3 = alunos[0][2];


for (int i=0;i<10;i++){
    for (int j=0;j<3;j++){
        if (j == 0 && alunos[i][j] < pior1){
            pior1 = alunos[i][j];
            indexi1 =j;
            }
        
        if (j == 1 && alunos[i][j] < pior2){
            pior2 = alunos[i][j];
            indexi2 = j;
            }
        
        if (j == 3 && alunos[i][j] < pior3){
                pior3 = alunos[i][j];
                indexi3 = j;
            }
            

    }
}  


printf ("Aluno %d teve pior nota na prova1:%d \n",indexi1,pior1);
printf ("Aluno %d teve pior nota na prova1:%d \n",indexi2,pior2);
printf ("Aluno %d teve pior nota na prova1:%d \n",indexi3,pior3);
}