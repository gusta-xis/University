
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

main() {
    float base, altura, area;
    system("cls");
    printf("\nDigite a base do triangulo:  ");
    scanf("%f", &base);
    printf("\nDigite a altura do triangulo: ");
    scanf("%f", &altura);
    area = (base * altura) / 2;
    printf("\nA area do triangulo e %.2f", area);
    getch();
}

