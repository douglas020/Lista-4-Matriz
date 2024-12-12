#include <stdio.h>
#include <stdlib.h>
int main (){
char alunos[3][10];
char gabarito [10]={'a', 'b', 'c', 'd', 'e', 'a', 'b', 'c', 'd', 'e'};
int media;
for (int i=0;i<3;i++){
    for (int j=0;j<10;j++){
        printf ("Questão %d:  ",j);
        scanf(" %c",&alunos[i][j]);
        
    }
}
printf ("\n");
for (int i=0;i<3;i++){
    for (int j=0;j<10;j++){
        if (alunos[i][j] == gabarito[j])
        media++;
    }
    printf ("Aluno %d acertou %d \n",i,media);
    media =0;
}

}