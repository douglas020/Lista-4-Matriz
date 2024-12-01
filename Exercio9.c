#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
int m[5][5]={0},indexj=0,indexi=0;

srand  (time(NULL));

for (int i=0;i<5;i++){
    indexi +=1;
    for (int j=0;j<5;j++){
    if (indexj == j ){
        m[indexi][j] = 1;
    }
    }
    indexj +=1;
    }

for (int i=0;i<5;i++){
    printf ("\n");
    for (int j=0;j<5;j++){
    printf ("%d",m[i][j]);
    }

}

}