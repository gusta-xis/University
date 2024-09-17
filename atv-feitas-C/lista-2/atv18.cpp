#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float x, y, z;

    // Leitura dos valores dos lados
    printf("Digite o valor do lado X: ");
    scanf("%f", &x);
    
    printf("Digite o valor do lado Y: ");
    scanf("%f", &y);
    
    printf("Digite o valor do lado Z: ");
    scanf("%f", &z);

    // Verifica��o se os valores podem formar um tri�ngulo
    if ((x < y + z) && (y < x + z) && (z < x + y)) {
        // Verifica o tipo de tri�ngulo
        if (x == y && y == z) {
            printf("Os valores formam um tri�ngulo equil�tero.\n");
        } else if (x == y || y == z || x == z) {
            printf("Os valores formam um tri�ngulo is�sceles.\n");
        } else {
            printf("Os valores formam um tri�ngulo escaleno.\n");
        }
    } else {
        printf("Os valores n�o formam um tri�ngulo.\n");
    }

    return 0;
}

