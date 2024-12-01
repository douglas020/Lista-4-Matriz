#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
int A[4][4];

srand  (time(NULL));

for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            A[i][j] = (i + 1) * (j + 1);
        }
    }

for (int i=0;i<4;i++){
    printf ("\n");
    for (int j=0;j<4;j++){
        printf ("%d ",A[i][j]);
    }
}
}