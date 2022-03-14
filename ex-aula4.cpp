//escreva um programa que solicite 10 múmeros ao usuário e mostre o maior número
#include<stdio.h>
 int main (){
     int i, valorUsuario, maiorValor;
     for (i = 0; i < 10; i++){
         printf("Informe um numero: ");
         scanf("%d", &valorUsuario);

         if (i == 0){
             maiorValor = valorUsuario;
         }
         else if (valorUsuario > maiorValor){
            maiorValor = valorUsuario;
          
         }
     }
       printf("O maior valor eh:%d", maiorValor);
 }