/*Escreva um programa que peça duas informações ao usuário: dia e mês. O programa deve identificar:
a)se o dia da semana (numerados de 1 a 7) é “dia de semana”, “fim de semana” ou “dia inválido”; 
b)se um mês digitado pelo usuário é de alta ou baixa temporada (considerar os seguintes meses como alta temporada: dezembro, janeiro, fevereiro, junho e julho)
*/

#include<stdio.h>

int main(){
    int dia, mes;
    printf("Digite uma data de 1 a 7:", dia);
    scanf("%d", &dia);
    printf("Digite um mes:", mes);
    scanf("%d", &mes);

    switch (dia)
    {
    case 1:
        printf("final de semana\n");
    break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
     printf("dia da semana\n");
    break;
    case 7:
        printf("final de semana\n");
    break;
    
    default:
    printf ("Invalido\n");
        break;
    }
    switch (mes)
    {
    case 1:
        printf ("Janeiro: alta temporada");
    break;
    case 2:
        printf("Fevereiro: alta temporada");
    break;
    case 3:
    case 4:
    case 5:
        printf ("Baixa temporada\n");
    break;
    case 6:
    case 7:
        printf("Alta temporada\n");
    break;
    case 8:
        printf("Agosto: baixa temporada");
    break;
    case 9:
        printf("Setembro: baixa temporada");
    break;
    case 10:
        printf("Outubro: baixa temporada");
    break;
    case 11:
        printf("Novembro: baixa temporada");
    break;
    case 12:
        printf("Dezembro: alta temporada");
    break;
    
    default:
    printf("Mes invalido");
        break;
    }

}