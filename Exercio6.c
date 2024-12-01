#include <stdio.h>
#include <stdio.h>
#include <time.h>
int main(){
int A[4][4],B[4][4],C[4][4];

srand (time(NULL));
for (int i=0;i<4;i++){
    for (int j=0;j<4;j++){
        A[i][j] = rand () % 10000;
    }
}

for (int i=0;i<4;i++){
    for (int j=0;j<4;j++){
        B[i][j] = rand () % 10000;
    }
}

for (int i=0;i<4;i++){
    for (int j=0;j<4;j++){
        if (A[i][j] > B[i][j])
        C [i][j] = A[i][j];

        else
        C [i][j] = B[i][j];
    }
}


for (int i=0;i<4;i++){
   printf ("\n");
    for (int j=0;j<4;j++){
        printf ("[%d][%d]:  %d",i,j,C[i][j]);
    }
}

}