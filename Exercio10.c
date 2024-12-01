#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int a[5][5]={0};
int auxj=0,soma=0;

srand (time(NULL));


for (int i=0;i<5;i++){
    for (int j=0;j<5;j++){
        a[i][j] = rand () % 10000;
         if (j == auxj){
            soma += a[i][j];
        }
    }
    auxj +=1;
}

for (int i=0;i<5;i++){
    printf ("\n");
    for (int j=0;j<5;j++){
        printf ("[%d][%d]: %d",i,j,a[i][j]);
    }
 
}

printf ("\n \n a soma dos diagonal: %d",soma);

}