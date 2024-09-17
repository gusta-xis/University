#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

float aumento = 1.5, salario = 1000;
int ano = 2006, ano_final;

printf("\n(Este programa calcularah seu salario com base no percentual de aumento e tempo.)\n");
printf("\nPrimeiramente, declare o ano o qual voce deseja saber o seu salario correspondente.\n");
scanf("%d", &ano_final);

do{
salario = salario + (salario * aumento)/100;
aumento = aumento * 2;
printf("\nO salario no ano %d serah igual a: %.2f\n", ano, salario);
ano++;
}while(ano <= ano_final);
getch();
}


