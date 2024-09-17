#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, num3, num4, temp;

    // Leitura dos números
    printf("Digite o primeiro número (ordem crescente): ");
    scanf("%f", &num1);
    
    printf("Digite o segundo número (maior que o primeiro): ");
    scanf("%f", &num2);
    
    printf("Digite o terceiro número (maior que o segundo): ");
    scanf("%f", &num3);
    
    printf("Digite o quarto número (pode ser qualquer valor): ");
    scanf("%f", &num4);

    // Ordenação dos números em ordem decrescente
    if (num1 < num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num1 < num3) {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if (num1 < num4) {
        temp = num1;
        num1 = num4;
        num4 = temp;
    }
    if (num2 < num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num2 < num4) {
        temp = num2;
        num2 = num4;
        num4 = temp;
    }
    if (num3 < num4) {
        temp = num3;
        num3 = num4;
        num4 = temp;
    }

    // Exibição dos números em ordem decrescente
    printf("Os números em ordem decrescente são: %.2f, %.2f, %.2f, %.2f\n", num1, num2, num3, num4);

    return 0;
}

