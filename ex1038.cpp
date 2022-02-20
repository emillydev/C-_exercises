/*Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.*/

#include<stdio.h>

int main(){
    int item, quant=0;
    float total;
    printf("Escolha um item: ");
    scanf("%d", &item);
    printf("Qual a quantidade? ");
    scanf("%d", &quant);

    if (item == 1) { 
        total = quant * 4;
        printf("Total  = R$ %.2f", total);
       }
        else if (item == 2)
        {
          total = quant * 4.5;
        printf("Total  = R$ %.2f", total);  
        }
            else if (item == 3)
            {
                total = quant * 5;
                printf("Total  = R$ %.2f", total);
            }
                else if (item == 4)
                {
                    total = quant * 2;
                    printf("Total  = R$ %.2f", total);
                }
                    else if (item == 5)
                    {
                        total = quant * 1.5;
                        printf("Total  = R$ %.2f", total);
                    }
                    else if (item > 5)
                    printf("Item indisponivel");
                 
}