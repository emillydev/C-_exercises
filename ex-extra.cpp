#include<stdio.h>

int main (){
    int x, y, valor;
    printf("Informe o numero de linhas do triangulo retangulo: ", valor);
    scanf("%d", &valor);

    for ( y = 0; y <= valor; y++) //para i = 0, enquanto i for menor que o valor acrescente mais um
    //numero de linhas do triangulo
    {
        for (x = 0; x < y; x++)//colunas
        {
            printf("* ");
        }
        //completa a linha
        printf("\n");
    }
    

}