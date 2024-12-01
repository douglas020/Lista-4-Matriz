#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int M[4][4],maior=0,indexi,indexj;

srand (time(NULL));

for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 4; j++)
    {
       M [i][j] = rand () % 10000;
      // printf ("M[%d][%d] \n",i,j);

    } 
}

for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 4; j++)
    {
       if (M[i][j] > maior){
        maior = M[i][j];
        indexi = i;
        indexj = j;
       }
    } 
}


printf ("Array [%d][%d]: %d \n",indexi,indexj,maior);
printf ("%d",M[indexi][indexj]);

}