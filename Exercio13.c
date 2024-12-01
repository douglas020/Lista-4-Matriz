#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int a[4][4];


srand   (time(NULL));

for (int i = 0; i < 4; i++)
{
   for (int j=0;j < 4; j++){
    a[i][j] = 1 + rand () % 19;
   }
}


for (int i=0;i<4;i++){
    for (int j=0;j<4;j++){
        if (i == 0){
            a[i][1] = 0;
            a[i][2] = 0;
            a[i][3] = 0;
        }

        else if (i == 1){
            a[i][2] = 0;
            a[i][3] = 0;
        }

        else if (i == 2){
            a[i][3] = 0;
        }
       
    }
    
}


for (int i = 0; i < 4; i++)
{
    printf ("\n");
   for (int j=0;j < 4; j++){
    printf (" %d",a[i][j]);
   }
}


}