#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, num3, num4, temp;

    // Leitura dos n�meros
    printf("Digite o primeiro n�mero (ordem crescente): ");
    scanf("%f", &num1);
    
    printf("Digite o segundo n�mero (maior que o primeiro): ");
    scanf("%f", &num2);
    
    printf("Digite o terceiro n�mero (maior que o segundo): ");
    scanf("%f", &num3);
    
    printf("Digite o quarto n�mero (pode ser qualquer valor): ");
    scanf("%f", &num4);

    // Ordena��o dos n�meros em ordem decrescente
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

    // Exibi��o dos n�meros em ordem decrescente
    printf("Os n�meros em ordem decrescente s�o: %.2f, %.2f, %.2f, %.2f\n", num1, num2, num3, num4);

    return 0;
}

