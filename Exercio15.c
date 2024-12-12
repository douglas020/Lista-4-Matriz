#include <stdio.h>

int main(){
char prova [5][10];
char gabarito[10];
int acertos;

for (int i=0;i<5;i++){
        for (int j=0;j<10;j++){
            printf ("aluno %d: a) b) c) d) \n");
             prova[i][j] = getc ;
        }
}


for (int i=0;i<5;i++){
        acertos =0;
        for (int j=0;j<10;j++){
           if (prova[i][j] == gabarito[j])
           acertos ++;
        }
 printf ("Alunno %d acertou %d",i,acertos);
}
}