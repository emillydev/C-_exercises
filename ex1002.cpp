#include<stdio.h>
#include <cmath>

int main (){
    double a, r;
    printf("--------AREA DO CIRCULO--------\n");
    printf("Qual e o valor do raio? ");
    scanf("%lf", &r);
    a = 3.14159* (pow (r,2));
    printf("A area do circulo e igual a: %f", a);
    }

