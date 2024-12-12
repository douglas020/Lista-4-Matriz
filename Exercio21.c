#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
int constante;
float a[2][2];
float b[2][2];
float c[2][2];
srand (time(NULL));
for (int i=0;i<2;i++){ //escreve no vetor a
    for (int j=0;j<2;j++){
        a[i][j] = rand () %  10;
    }
}

for (int i=0;i<2;i++){
    for (int j=0;j<2;j++){ // escreve no vetor b
        b[i][j] = rand () %  10;
    }
}


char e;
while (1)
{



printf ("a) somar as duas matrizes \n");
printf ("b) subtrair aprimeira matriz da segunda \n");
printf ("c) adicionar uma constante as duas matrizes \n");
printf ("e) imprimir as matrizes \n");
scanf (" %c",&e);

switch (e)
{
case 'a': //Soma as duas matrizes
    for (int i=0;i<2;i++){
    for (int j=0;j<2;j++){
       c [i][j] = a[i][j] + b[i][j];
    }
}
    break;
case 'b': //Subtrairmatriz
  for (int i=0;i<2;i++){
    for (int j=0;j<2;j++){
       c[i][j] = a[i][j] - b[i][j];
    }
}
break;

case 'c': // Somar uma constante
printf ("Digite uma constante \n");
scanf ("%d",&constante);
  for (int i=0;i<2;i++){
    for (int j=0;j<2;j++){
       a[i][j] += constante;
       b[i][j] += constante;
    }
  }
break;
case 'e':
     for (int i=0;i<2;i++){
    for (int j=0;j<2;j++){
      printf ("Array [%d][%d]:  %.2f \n",i,j,a[i][j]);
    }
   }
    printf ("MATRIZ B \n");

       for (int i=0;i<2;i++){
    for (int j=0;j<2;j++){  
      printf ("Array [%d][%d]:  %.2f \n",i,j,b[i][j]);
    }
}
break;
default:
    exit(0);
    break;


}
}
}
