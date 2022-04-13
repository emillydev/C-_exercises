#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

void troca (int x, int y);

void escreve_vet(int vetor[7]);

int main (){
    int vet[7] = {11,7,3,5,17,23,19};
    int i=0,x,j;
    while (i<7)
    {
        if (vet[i] > vet[i+1]){
            for (j = i+1; j < 7; j++)
            {
               troca(vet[i], vet[i+1]); 
            }
            
            
            for (x = 0; x < 7; x++)
                printf("%d", vet[i]);
        }
    i = i+1;   
    }
    return 0;
}
void troca (int x, int y){
    int z;
     z = y;
     y = x;
     x = z;
     printf("%d %d %d",x,y,z);
     getchar();
}
void escreve_vet(int vetor[7]){
    int k;
    printf("Vetor: ");
    for (k = 0; k < 7; k++){
        printf(" %d ", vetor[k]);
    }
}
