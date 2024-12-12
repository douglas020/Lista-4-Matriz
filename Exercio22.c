#include  <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (){
int A[3][3],B[3][3],C[3][3];

srand (time(NULL));
for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
        A[i][j] = rand ();
        B [i][j] = rand ();
        C [i][j] = A[i][j] * B[i][j];
    }
}
}