#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int codigoEstado, codigoCarga;
    float pesoToneladas, pesoQuilos, precoPorQuilo, precoCarga, imposto, valorImposto, valorTotal;

    // Leitura dos dados
    printf("Digite o c�digo do estado de origem (1 a 5): ");
    scanf("%d", &codigoEstado);

    printf("Digite o peso da carga do caminh�o (em toneladas): ");
    scanf("%f", &pesoToneladas);

    printf("Digite o c�digo da carga (10 a 40): ");
    scanf("%d", &codigoCarga);

    // Convers�o do peso para quilos
    pesoQuilos = pesoToneladas * 1000;

    // Determina��o do pre�o por quilo com base no c�digo da carga
    if (codigoCarga >= 10 && codigoCarga <= 20) {
        precoPorQuilo = 180;
    } else if (codigoCarga >= 21 && codigoCarga <= 30) {
        precoPorQuilo = 230;
    } else if (codigoCarga >= 31 && codigoCarga <= 40) {
        precoPorQuilo = 340;
    } else {
        printf("C�digo da carga inv�lido.\n");
        return 1;
    }

    // C�lculo do pre�o da carga
    precoCarga = pesoQuilos * precoPorQuilo;

    // Determina��o do imposto com base no c�digo do estado
    switch (codigoEstado) {
        case 1:
            imposto = 0.35;
            break;
        case 2:
            imposto = 0.25;
            break;
        case 3:
            imposto = 0.15;
            break;
        case 4:
            imposto = 0.05;
            break;
        case 5:
            imposto = 0;
            break;
        default:
            printf("C�digo do estado inv�lido.\n");
            return 1;
    }

    // C�lculo do valor do imposto
    valorImposto = precoCarga * imposto;

    // C�lculo do valor total (pre�o da carga + imposto)
    valorTotal = precoCarga + valorImposto;

    // Exibi��o dos resultados
    printf("Peso da carga em quilos: %.2f quilos\n", pesoQuilos);
    printf("Pre�o da carga: R$ %.2f\n", precoCarga);
    printf("Valor do imposto: R$ %.2f\n", valorImposto);
    printf("Valor total transportado (carga + imposto): R$ %.2f\n", valorTotal);

    return 0;
}

