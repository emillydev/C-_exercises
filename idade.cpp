#include<stdio.h>

int main(){
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    if (idade >= 0 && idade <= 10)
        printf("Crianca");
        else if (idade <= 18)
            printf ("Adolescente");
            else if (idade <= 60)
                printf("Adulto");
                else if (idade <= 100)
                    printf("idoso");
                    else if (idade > 100)
                        printf("Zumbi");
                        else printf("Idade Invalida");
}