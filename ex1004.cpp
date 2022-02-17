/*Read two integer values. After this, calculate the product between them and store the result in a variable named PROD. 
Print the result like the example below. Do not forget to print the end of line after the result, otherwise you will receive “Presentation Error”.*/

#include <stdio.h>

int main (){
    double a, b, produto, divisao, soma, subtracao;
    printf("-------PRODUTO|DIVISAO|SOMA|SUBTRACAO------\n");
    printf("Digite o primeiro numero: ");
    scanf("%lf", &a);
    printf("Digite o segundo numero: ");
    scanf("%lf", &b);
    produto = a*b;
    divisao = a/b;
    soma = a+b;
    subtracao = a-b;
    printf("Produto = %.3lf\nDivisao = %.3lf\nSoma = %.3lf\nSubtracao = %.3lf\n", produto, divisao, soma,subtracao);

    /*printf("Produto = %.3lf\n", produto);
    printf("Divisao = %.3lf\n", divisao);
    printf("Soma = %.3lf\n",soma );
    printf("Subtracao = %.3lf\n", subtracao);*/

    /* calculo dentro da variavel
    printf("Soma: %.3lf\n", a+b);*/
}
