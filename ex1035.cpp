/* Read 4 integer values A, B, C and D. 
Then if B is greater than C and D is greater than A and if the sum of C and D is greater than the sum of A and B and if C and D were positives values and if A is even, write the message “Valores aceitos” (Accepted values).
 Otherwise, write the message “Valores nao aceitos” (Values not accepted).*/

#include<stdio.h>

int main (){
    int a, b, c, d;
    printf("-------SELECTION TEST 1------\n");
    printf("Digite o valor de A:");
    scanf("%d", &a);
    printf("Digite o valor de B:");
    scanf("%d", &b);
    printf("Digite o valor de C:");
    scanf("%d", &c);
    printf("Digite o valor de D:");
    scanf("%d", &d);

    if (b > c && d > a && (c+d) > (a+b) && c > 0 && d > 0 &&  c%2 == 0)
    printf("Valores aceitos");
    else
        printf("Valores nao aceitos");
}