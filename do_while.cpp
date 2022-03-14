#include<stdio.h>

int main(){
    int a, b, r;
    char opcao;
    scanf("%c", &opcao);
    fflush(stdin);

    do
    {
      printf("Somar\n");
        printf("Digite o valor de a: ", a);
        scanf("%d", &a);
        printf("Digite o valor de b: ",b);
        scanf("%d", &b);
        r = a + b;
        printf("%d\n",r);
        printf("Deseja realizar um novo calculo?\n");
        scanf("%c", &opcao);
        fflush(stdin);
    } while (opcao == 's' || opcao == 'S');
    
}