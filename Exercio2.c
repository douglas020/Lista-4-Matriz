#include <stdio.h>

int main(){
int A[5][5]={0};
int auxj=0;
for (int i=0;i<5;i++){
    for (int j=0;j<5;j++){
        if (j == auxj)
        A[i][j] = 1;
    }
     auxj+=1;
}

for (int i=0;i<5;i++){
     printf ("\n");
    for (int j=0;j<5;j++){
         printf ("%d ",A[i][j]);
    }
  
}

printf ("fim");
}