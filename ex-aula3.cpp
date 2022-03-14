#include <stdio.h>

int main (){
     int i, j, naoPrimo;
     for (i = 190; i >= 160; i-- ){

         naoPrimo = 0; //testando se é primo ou não
         for (j = 2; j < i; j++);
         {
             if ((i % j) == 0)
              naoPrimo = 1;
         }
        if (naoPrimo == 0)
            printf("%d\n", &i) ;
     }

}