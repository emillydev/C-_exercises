/*The formula to calculate the area of a circumference is defined as A = π . R2. Considering to this problem that π = 3.14159:
Calculate the area using the formula given in the problem description.*/

#include<stdio.h>
#include <cmath>//ou math.h
#define PI 3.14159// define uma constante(não pode ser mudado ao longo do código)

int main (){
    double a, r;
    printf("--------AREA DO CIRCULO--------\n");
    printf("Qual e o valor do raio? ");
    scanf("%lf", &r);
    //a = 3.14159* (pow (r,2));
    printf("A area do circulo e igual a: %f", PI * (pow (r,2)));
    }

