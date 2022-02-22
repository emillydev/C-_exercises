#include<stdio.h>
#include<ctype.h>
// enquanto o usuario digitar algo faça isso
//posso não executar nenhuma vez
int main(){
    int a, b, r;
    char opcao;
    scanf("%c", &opcao);
    fflush(stdin);

    while (opcao == 's' || opcao == 'S')
    {
        printf("Somar\n");
        printf("Digite o valor de a: ", a);
        scanf("%d", &a);
        printf("Digite o valor de b: ", b);
        scanf("%d", &b);
        r = a + b;
        printf("%d\n",r);
        printf("Deseja realizar um novo calculo?\n");
        getchar(opcao);
        fflush(stdin);
    }
    
}