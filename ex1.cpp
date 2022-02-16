#include <stdio.h>
//&:usar & no printf imprime o endereço de memoria da variavel
//double --> 8bytes (dobro do espaço do float na memória) %lf
//float --> 4 bytes %f

int main() {
    int a,b,x;
    printf("Digite o primeiro numero: ");
    scanf("%d",&a);
    printf("Digite o segundo numero: ");
    scanf("%d",&b);
    x = a + b;
    printf("O resultado da soma e igual a: %d",x);
    printf("O resultado da soma e igual a: %d\n",&x);//impressão de endereço na memoria em decimal
    printf("O resultado da soma e igual a: %d\n",x);//impressaõ do endereço de memoria em hexadecimal
}
