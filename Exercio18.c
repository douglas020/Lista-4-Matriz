#include <stdio.h>

int main (){
int A[3][3],R[3];
int soma=0;
for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
        printf ("Array [%d] [%d]:  ",i,j);
        scanf ("%d",&A[i][j]);
    }
}

for (int i=0;i<3;i++){
soma = 0;  
for (int j=0;j<3;j++){
    soma += A[j][i];
}
  
R[i] = soma;
}


for (int i=0;i<3;i++)
printf ("%d \n",R[i]);


}