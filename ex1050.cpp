/*Leia um número inteiro que representa um código de DDD para discagem interurbana. Em seguida, informe à qual cidade o DDD pertence,*/

#include<stdio.h>

int main (){
    int ddd;
    printf("Digite o DDD:");
    scanf("%d",&ddd);

    if (ddd == 61)
        printf("Brasilia\n");
        else if (ddd == 71)
            printf("Salvador\n");
            else if (ddd == 11)
                printf("Sao Paulo");
                else if (ddd == 21)
                    printf("Rio de Janeiro");
                    else if (ddd == 32)
                        printf("Juiz de Fora");  
                        else if (ddd == 19)
                            printf("Campinas");
                            else if (ddd == 27)
                                printf("Vitoria");
                                else if (ddd == 31)
                                    printf("Belo Horizonte");
                                    else printf ("DDD nao cadastrado");

}