#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int A[4][4],cont=0;

srand (time(NULL));

for (int i = 0; i < 4; i++)
{
    for (int j=0;j<4;j++){
    A[i][j] = rand () % 1000;
    if (A[i][j] > 10 )
    cont++;
}
}
for (int i = 0; i < 4; i++)
    for (int j=0;j<4;j++)
    printf ("Array [%d][%d]:  %d \n",i,j,A[i][j]);

   printf ("A %d numeros maiores que 10",cont); 
}