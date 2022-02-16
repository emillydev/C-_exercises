#include <stdio.h>

int main (){
    double a, b, produto, divisao, soma, subtracao;
    printf("-------PRODUTO|DVISAO|SOMA|SUBTRAÇAO------\n");
    printf("Digite o primeiro numero: ");
    scanf("%lf", &a);
    printf("Digite o segundo numero: ");
    scanf("%lf", &b);
    produto = a*b;
    divisao = a/b;
    soma = a+b;
    subtracao = a-b;
    printf("Produto = %.3lf\n", produto);
    printf("Divisao = %.3lf\n", divisao);
    printf("Soma = %.3lf\n",soma );
    printf("Subtracao = %.3lf\n", subtracao);
}