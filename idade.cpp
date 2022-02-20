#include<stdio.h>

int main(){
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    if (idade >= 0 && idade <= 10)
        printf("Crianca");
        else if (idade >= 11 && idade <= 18)
            printf ("Adolescente");
            else if (idade >=19 && idade <= 60)
                printf("Adulto");
                else if (idade >= 61 && idade <= 100)
                    printf("idoso");
                    else if (idade > 100)
                        printf("Zumbi");
                        else printf("Idade Invalida");
}