/*Read four integer values named A, B, C and D. Calculate and print the difference of product A and B by the product of C and D (A * B - C * D).*/

#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Digite o valor de A: ");
    scanf("%d",&a);
    printf("Digite o valor de B: ");
    scanf("%d",&b);
    printf("Digite o valor de C: ");
    scanf("%d",&c);
    printf("Digite o valor de D: ");
    scanf("%d",&d);

    printf("Diferenca: %d\n", a*b-c*d);
}