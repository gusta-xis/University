#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float num1, num2;

    // Leitura dos números
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Determinação e exibição do maior número
    if (num1 > num2) {
        printf("O maior número é: %.2f\n", num1);
    } else if (num2 > num1) {
        printf("O maior número é: %.2f\n", num2);
    } else {
        printf("Os números são iguais.\n");
    }

    return 0;
}

