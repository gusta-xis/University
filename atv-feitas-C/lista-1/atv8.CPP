#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
main()
{ float dep, taxa, rend, total;

system("cls");
printf("\nDigite o valor do deposito: R$ ");
scanf("%f",&dep);

printf("\nDigite a taxa de juros: ");
scanf("%f",&taxa);

rend = dep * taxa/100;

total = dep + rend;

printf("\nRendimento = R$ %.2f",rend);

printf("\nTotal = R$ %.2f",total);

getch();
}

