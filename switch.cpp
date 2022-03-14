#include<stdio.h>
/*switch: varias condiçoes para um codigo
-só recebe int e char
-utilizado quando a varias opçoes de escolha
break:executa e se for vdd ele para. acaba o codigo aqui 
intervalo dentro do switch case: 0 ... 10

char 
- char:c%c
- string: %s
- só o char (%c) pode ser usado no switch
- aspas simples para caracter
*/

int main(){

    //int idade;
    char letra;
    char unicaPalvra;
    char duasPalavras [10];
    //printf("Digite a idade: ");
    //scanf("%d",&idade);
    printf("Digite a letra: ");
    scanf("%c",&unicaPalvra);
    fflush(stdin);// usado para não pular os comandos; limpar buffer apenas para char e string
    printf("Digite a palavra: ");
    scanf("%s",&duasPalavras); //não permite colocar espaços
    fgets(palavra, 50, stdin);//permite colocar espaços

    printf("Unica palavra: %c", unicaPalvra);
    printf("Duas palavras: %s", duasPalavras);




    switch (unicaPalvra){
        case N: printf("Crianca"); break;// intervalo
        case O: printf("adolescente"); break;
        case P: printf("adulto"); break;
        case Q: printf("idoso"); break;
        case R: printf("zumbi"); break;

        default: printf("Idade invalida");break;
}
    switch (duasPalavras)
    {
    case ok:printf("Digitou ok\n"); break;
    default:
        break;
    }
}