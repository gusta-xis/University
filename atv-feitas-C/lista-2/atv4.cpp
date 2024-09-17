#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, num3, temp;

    // Leitura dos números
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    
    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    // Ordenação dos números em ordem crescente
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num1 > num3) {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    // Exibição dos números em ordem crescente
    printf("Os números em ordem crescente são: %.2f, %.2f, %.2f\n", num1, num2, num3);

    return 0;
}

