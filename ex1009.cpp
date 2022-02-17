/*Make a program that reads a seller's name, his/her fixed salary and the sale's total made by himself/herself in the month (in money). 
Considering that this seller receives 15% over all products sold, write the final salary (total) of this seller at the end of the month , with two decimal places.*/

#include<stdio.h>

int main(){
    char name;
    float salary, sales, total;
    printf("Nome do funcionario: ");
    scanf("%s", &name);
    printf("Salario fixo: ");
    scanf("%f", &salary);
    printf("Total de vendas no mes: ");
    scanf("%f", &sales);

    total = salary + (sales*15)/100;
    printf("Salario final do funcionario: %.2f", total);
}