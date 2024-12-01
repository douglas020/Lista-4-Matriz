#include <stdio.h>

int main(){
int m[5][5]={0},aux=4;

for (int i=0;i<5;i++){
    for (int j=0;j<5;j++){
        if (aux == j)
        m[i][j] = 1;

    }
    aux--;
}
for (int i=0;i<5;i++){
   printf ("\n");
    for (int j=0;j<5;j++){
    printf ("%d",m[i][j]);
    }
}

}