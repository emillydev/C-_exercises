/*Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara.
Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.*/

#include <stdio.h>
#include <math.h>

int main (){
    double a,b,c,delta, x1,x2;

    printf("Digite o valor de A: ");
    scanf("%lf", &a);
    printf("Digite o valor de B: ");
    scanf("%lf", &b);
    printf("Digite o valor de C: ");
    scanf("%lf", &c);

    delta = pow(b,2) - (4*a*c);
    //delta = b*b - (4*a*c);
    if (delta >= 0 && a != 0) //raiz negativa e divisor igual a 0
        {x1 = ((-b) + sqrt(delta))/(2*a);
        x2 = (b + sqrt(delta))/(2*a);
        printf("X'= %.5lf\n", x1);
        printf("X''= %.5lf\n", x2);}

    else {printf("Impossivel calcular");}
}