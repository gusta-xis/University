#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, num3, temp;

    // Leitura dos n�meros
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo n�mero: ");
    scanf("%f", &num2);
    
    printf("Digite o terceiro n�mero: ");
    scanf("%f", &num3);

    // Ordena��o dos n�meros em ordem crescente
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

    // Exibi��o dos n�meros em ordem crescente
    printf("Os n�meros em ordem crescente s�o: %.2f, %.2f, %.2f\n", num1, num2, num3);

    return 0;
}

