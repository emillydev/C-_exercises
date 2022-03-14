/*3) Faça uma calculadora que leia do usuário uma expressão aritmética entre dois inteiros e retorne o resultado:
7 + 5   -> os inteiros: 7 e 5; a operação: +
8  - 6  -> os inteiros: 8 e 6; a operação: -
No entanto, o usuário pode representar a multiplicação com os seguintes caracteres: *, x ou X. Ele pode também representar a divisão pelos caracteres /, \ ou : .
*/

#include<stdio.h>

int main(){
    float a, b;
    char operador;
    
    printf("Digite o primeiro numero: ", a);
    scanf("%d", &a);
    printf("Digite o segundo numero: ", b);
    scanf("%d", &b);
    fflush(stdin);
    printf("Qual expressao aritmetica deseja realizar? ", operador);
    scanf("%c", &operador);
    
    

    switch (operador)
    {
    case '+':
        printf("%d %c %d -> Inteiros: %d e %d; operacao: %c", a, operador, b, a, b, operador);
    break;
    case '-':
        printf("Inteiros: %d e %d", a,b);
        printf("Operacao aritmetica: ", operador);
    break;
    case '*':
    case 'x':
    case 'X':
        printf("Inteiros: %d e %d", a,b);
        printf("Operacao aritmetica: %c", operador);
    break;
    
    default:
        break;
    }
}