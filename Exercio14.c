#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
int m[5][5];
int i=0,j=0,igual;
srand (time(NULL));

do
{   
    igual = 0;
     m[i][j] = rand () % 100;

        for (int k=0; k <i;k++){
            for (int k1=0;k1<5;k1++){
                if (m[k][k1] == m[i][j]){
                   igual = 1;
                }
            }   
        }
if (igual == 0){
if (j < 5){
    j += 1;
} 
else 
{
    
   i +=1;
   j = 0;
    
}
}
      
} while (i < 5 );
for (int i=0;i<5;i++){
    printf ("\n");
    for (int j=0;j<5;j++){
        printf ("%d  ",m[i][j]);
}
}
}