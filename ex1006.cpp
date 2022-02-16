#include <stdio.h>

int main (){
    double a, b, c, x;
    printf("------MEDIA ALUNO------\n");
    printf("Digite a primeira nota: ");
    scanf("%lf", &a);
    printf("Digite a segunda nota: ");
    scanf("%lf", &b);
    printf("Digite a terceira nota: ");
    scanf("%lf", &c);
    x = (a*2 + b*3 + c*5)/10;
    printf("Media do aluno: %.2lf", x);
}
//falta colocar só uma casa decimal no x