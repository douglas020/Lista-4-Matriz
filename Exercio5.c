#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int m[5][5],x;

srand (time(NULL));

for (int i=0;i<5;i++){
    for (int j=0;j<5;j++){
        m [i][j] = rand () % 10000;
    }
}

printf ("Qual numero vc quer procurar:  ");
scanf ("%d",&x);

for (int i=0;i<5;i++){
    for (int j=0;j<5;j++){
       if (x == m[i][j]){
        printf (" entcontrado no Array [%d][%d]: %d",i,j,x);
        exit(0);
       }
    }
}

printf ("Não econtrado T_T");

}