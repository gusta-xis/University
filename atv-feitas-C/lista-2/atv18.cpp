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

    // Verificação se os valores podem formar um triângulo
    if ((x < y + z) && (y < x + z) && (z < x + y)) {
        // Verifica o tipo de triângulo
        if (x == y && y == z) {
            printf("Os valores formam um triângulo equilátero.\n");
        } else if (x == y || y == z || x == z) {
            printf("Os valores formam um triângulo isósceles.\n");
        } else {
            printf("Os valores formam um triângulo escaleno.\n");
        }
    } else {
        printf("Os valores não formam um triângulo.\n");
    }

    return 0;
}

