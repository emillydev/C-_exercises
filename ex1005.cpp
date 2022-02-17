/*Read two floating points' values of double precision A and B, corresponding to two student's grades. After this, calculate the student's average, considering that grade A has weight 3.5 and B has weight 7.5. Each grade can be from zero to ten, always with one digit after the decimal point. Don’t forget to print the end of line after the result, otherwise you will receive “Presentation Error”.
Don’t forget the space before and after the equal sign.*/

#include <stdio.h>

int main (){
    double a, b, x;
    printf("------------- MEDIA --------------\n");
    printf("Digite a sua primeira nota: ");
    scanf("%lf", &a);
    printf("Digite a sua segunda nota: ");
    scanf("%lf", &b);
    x = (a*3.5 + b*7.5)/11;
    printf("A media e igual a: %lf\n",x);
}