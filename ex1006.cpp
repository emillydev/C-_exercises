/*Read three values (variables A, B and C), which are the three student's grades. Then, calculate the average, considering that grade A has weight 2, grade B has weight 3 and the grade C has weight 5. 
Consider that each grade can go from 0 to 10.0, always with one decimal place.*/

#include <stdio.h>
#define P1 2
#define P2 3
#define P3 5

int main (){
    double a, b, c, x;
    printf("------MEDIA ALUNO------\n");
    printf("Digite a primeira nota: ");
    scanf("%lf", &a);
    printf("Digite a segunda nota: ");
    scanf("%lf", &b);
    printf("Digite a terceira nota: ");
    scanf("%lf", &c);
    //x = (a*P1 + b*P2 + c*P3)/10;
    printf("Media do aluno: %.2lf", (a*P1 + b*P2 + c*P3)/10);//[2]add casa decimal
}
