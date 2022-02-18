#include<stdio.h>
/*operadores lógicos
    --> E = && \ and
    --> OU = or 
    1037 e 1050
*/ 

int main(){
    float nota, freq, git;
    printf("------NOTA|FREQUENCIA|GIT-----")
    printf("Digite a sua nota: ");
    scanf("%f", &nota);
    printf("Digite a sua frequencia:");
    scanf("%f", &freq);
    printf("Possui GitHub? (0 para nao, 1 para sim) ");
    scanf("%f",&git);

    if (nota >= 9.5 && freq >= 75 && git == 1)
        printf("Parabens voce foi aprovado!");
    else printf("Voce foi reprovado :(");
}