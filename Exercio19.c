#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
int a[4][5],media,maior;
srand (time(NULL));
int matricula;

for (int i=0;i<5;i++){ // letra a
    a[0][i] = rand () % 10;
    a[1][i] = rand () % 100;
    a[2][i] = rand () % 100;
}



for (int i=0;i<5;i++){
   a[3][i] = a[1][i] + a[2][i];   //Letra b
}

maior = a[3][0];
for (int i=0;i<5;i++){
   if (a[3][0] > maior){
   maior = a[3][i];
   matricula = a[0][i];
   }
}

printf ("Aluno %d teve maior nota %d \n",matricula,maior); //letra C

for (int i=0;i<5;i++){
    printf ("Media: %d \n",a[3][i]/2);  //Letra d
}




}