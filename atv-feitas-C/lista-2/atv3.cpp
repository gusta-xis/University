#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float num1, num2;

    // Leitura dos n�meros
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo n�mero: ");
    scanf("%f", &num2);

    // Determina��o e exibi��o do maior n�mero
    if (num1 > num2) {
        printf("O maior n�mero �: %.2f\n", num1);
    } else if (num2 > num1) {
        printf("O maior n�mero �: %.2f\n", num2);
    } else {
        printf("Os n�meros s�o iguais.\n");
    }

    return 0;
}

