#include<stdio.h>
#include<math.h>

int main(){
    int opcao, n1, n2, resultado;
    int i;

    for (i=0; i<4; i++){
    printf("Selecione a opcao:\n ");
    printf("1.Soma\n2.Produto\n3.Area do circulo\n4.Bhaskara\n");
    scanf("%d",&opcao);
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);

    switch (opcao)
    {
    case 1:
        resultado = n1 + n2;
        printf("resultado: %d\n", resultado);
    break;
    case 2:
        resultado = n1 * n2;
        printf("resultado: %d\n", resultado);
    break;
    case 3:
        double r;
        printf("Qual e o valor do raio? ");
        scanf("%lf", &r);
        printf("A area do circulo e igual a: %f\n", 3.1415 * (pow (r,2)));
    break;
    case 4: 
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
            x2 = ((-b) - sqrt(delta))/(2*a);
            printf("X'= %.5lf\n", x1);
            printf("X''= %.5lf\n", x2);}

        else {printf("Impossivel calcular");}
        break;
         default:("Invalido");break;
        }
    }
}