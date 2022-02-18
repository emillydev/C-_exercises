
#include<stdio.h>
#include<locale.h>

int main(){
    int a, b;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d",&b);

    if (a > b)
        printf("Valor aceito");
    else
        printf("Valor nao aceito");
    
 }