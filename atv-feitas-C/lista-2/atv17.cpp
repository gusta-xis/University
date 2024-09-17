#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float a, b, c;
    float delta, x1, x2;

    // Leitura dos coeficientes da equação
    printf("Digite o valor de a (diferente de zero): ");
    scanf("%f", &a);

    if (a == 0) {
        printf("O valor de 'a' deve ser diferente de zero.\n");
        return 1;
    }

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    // Cálculo do discriminante (delta)
    delta = b * b - 4 * a * c;

    // Verificação das condições para as raízes
    if (delta < 0) {
        printf("? = %.2f. Não existe raiz real.\n", delta);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("? = %.2f. Existe uma raiz real: x = %.2f\n", delta, x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("? = %.2f. Existem duas raízes reais:\n", delta);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}

