#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
int m[3][3]={0};
int soma=0,indexj=0;

 srand (time(NULL));
for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
        m[i][j] = rand () % 10000;
    }
}

for (int i=0;i<3;i++){ 
    for (int j=0;j<3;j++){
        if (indexj == j)
         soma += m[i][++j] ;
    }
    indexj+=1;
}


for (int i=0;i<3;++i){ 
    printf ("\n");
    for (int j=0;j<3;j++){
        printf ("m[%d][%d]: %d ",i,j,m[i][j]);
    }
}
printf (" \n\n A soma: %d",soma);
}