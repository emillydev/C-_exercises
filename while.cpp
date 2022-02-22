#include<stdio.h>
#include<stdlib.h> // biblioteca necessária para que a função de limpar a tela funcione
#include<ctype.h>
// enquanto o usuario digitar algo faça isso
//posso não executar nenhuma vez
int main(){
    int a, b , r;
    int opcao;
    
    scanf("%d",&opcao);
        
    while (opcao == 1){
        printf("Somar\n");
        printf("Digite o valor de a: ");
        scanf("%d",&a);
        printf("Digite o valor de b: ");
        scanf("%d",&b);
        r = a+b;
        printf("Deseja realizar um novo calculo ?\nDigite 1 para sim ou digite qualquer tecla para finalizar: ");
        scanf("%d",&opcao);
        fflush(stdin);
        system("cls"); // função de limpar tela do terminal 
    }
    
    return 0;
}
