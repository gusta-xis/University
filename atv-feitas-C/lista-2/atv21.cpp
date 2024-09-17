#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int codigoEstado, codigoCarga;
    float pesoToneladas, pesoQuilos, precoPorQuilo, precoCarga, imposto, valorImposto, valorTotal;

    // Leitura dos dados
    printf("Digite o código do estado de origem (1 a 5): ");
    scanf("%d", &codigoEstado);

    printf("Digite o peso da carga do caminhão (em toneladas): ");
    scanf("%f", &pesoToneladas);

    printf("Digite o código da carga (10 a 40): ");
    scanf("%d", &codigoCarga);

    // Conversão do peso para quilos
    pesoQuilos = pesoToneladas * 1000;

    // Determinação do preço por quilo com base no código da carga
    if (codigoCarga >= 10 && codigoCarga <= 20) {
        precoPorQuilo = 180;
    } else if (codigoCarga >= 21 && codigoCarga <= 30) {
        precoPorQuilo = 230;
    } else if (codigoCarga >= 31 && codigoCarga <= 40) {
        precoPorQuilo = 340;
    } else {
        printf("Código da carga inválido.\n");
        return 1;
    }

    // Cálculo do preço da carga
    precoCarga = pesoQuilos * precoPorQuilo;

    // Determinação do imposto com base no código do estado
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
            printf("Código do estado inválido.\n");
            return 1;
    }

    // Cálculo do valor do imposto
    valorImposto = precoCarga * imposto;

    // Cálculo do valor total (preço da carga + imposto)
    valorTotal = precoCarga + valorImposto;

    // Exibição dos resultados
    printf("Peso da carga em quilos: %.2f quilos\n", pesoQuilos);
    printf("Preço da carga: R$ %.2f\n", precoCarga);
    printf("Valor do imposto: R$ %.2f\n", valorImposto);
    printf("Valor total transportado (carga + imposto): R$ %.2f\n", valorTotal);

    return 0;
}

