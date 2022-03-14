#include<stdio.h>
#include<math.h>

int main(){
    int a, b, opcao, result;
    //int i;
        printf("Escolha uma opcao:\n1) Soma de x+y\n2)Produto de x pelo quadrado de y\n3)Quadrado de x\n4)Raiz da soma dos quadrados de x e y\n");
        scanf("%d", &opcao);

        printf("Valor de x:", a);
        scanf("%d", &a);
        printf("Valor de y:", b);
        scanf("%d", &b);
        fflush(stdin);


    switch (opcao)
     {
     case 1:
         result = a + b;
         printf("Resultado: %d\n", result);
    break;
    case 2: 
        result = a * (b*b);
        printf("%d", result);
    break;
    case 3:
        result = pow(a,2);
        printf("%d", result);
    break;
    case 4:
        result = sqrt((a*a)+(b*b));
        printf("%d", result);
    break;
     
    default: printf("Invalido");
         break;
     }
    
    
    

     


}