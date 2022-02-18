#include<stdio.h>

int main(){
    int item, quant, total;
    printf("Escolha um item: ");
    scanf("%d", &item);
    printf("Qual a quantidade? ");
    scanf("%d", &quant);

    if (item == 1)
        total = quant*4;
        printf("Total  = R$ %d", &total);

}