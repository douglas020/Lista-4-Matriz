#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
float a[3][6];
float somab=0; // soma da colunas pares
float somac=0; // Soma 
srand  (time(NULL));
for (int i=0;i<3;i++){
    for (int j=0;j<6;j++){
        a[i][j] = rand () % 1000;
    }
}




for (int i=0;i<3;i++){ 
    for (int j=0;j<6;j++){
        if (j % 2 == 0){        //letra a
            somab += a[i][j];
        }

        if (j == 1 || j == 3){   //letra b
            somac += a[i][j];
        }
    }
}

printf ("A soma das colunas impares:  %.2f \n",somab);
printf ("A soma das colunas segunda e quarta coluna :  %.2f \n",somab);
for (int i=0;i<3;i++){
    for (int j=0;j<6;j++){
    if (j == 5){
      a[i][j] = a[i][0] + a[i][1];  
    }
       
    }
}

for (int i=0;i<3;i++){
    for (int j=0;j<6;j++){
        printf ("Array [%d][%d]:  %.2f\n",i,j,a[i][j]);
    }
}

}