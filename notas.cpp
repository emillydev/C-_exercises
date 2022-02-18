#include<stdio.h>
/*
igual ==
diferente !=
maior >
menor <
maior igual >=
menor igual <=
*/
//recebe duas notas, calcula a media simples, se 9.5 pra cima --> aprovado, pra baixo --> reprovado
//chaves no 'if/else' são obrigatorias quando usamos mais de uma linha de comando no código  
int main(){
    float nota1, nota2, media;
    printf("--------NOTA FINAL--------\n");
    printf("Nota da primeira prova: ");
    scanf("%f", &nota1);
    printf("Nota da segunda prova: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2)/2;

    if (media >= 9.5)
        printf("Parabens, voce foi aprovado com a media: %.1f\n!", media);
    else
        printf("Voce foi reprovado :(");
}