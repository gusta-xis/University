#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int codigoProduto, codigoPais;
    float pesoQuilos, pesoGramas, precoPorGrama, precoTotal, imposto, valorImposto, valorTotal;

    // Leitura dos dados
    printf("Digite o código do produto (1 a 10): ");
    scanf("%d", &codigoProduto);

    printf("Digite o peso do produto (em quilos): ");
    scanf("%f", &pesoQuilos);

    printf("Digite o código do país de origem (1 a 3): ");
    scanf("%d", &codigoPais);

    // Conversão do peso para gramas
    pesoGramas = pesoQuilos * 1000;

    // Determinação do preço por grama com base no código do produto
    if (codigoProduto >= 1 && codigoProduto <= 4) {
        precoPorGrama = 10;
    } else if (codigoProduto >= 5 && codigoProduto <= 7) {
        precoPorGrama = 25;
    } else if (codigoProduto >= 8 && codigoProduto <= 10) {
        precoPorGrama = 35;
    } else {
        printf("Código do produto inválido.\n");
        return 1;
    }

    // Cálculo do preço total do produto
    precoTotal = pesoGramas * precoPorGrama;

    // Determinação do imposto com base no código do país de origem
    if (codigoPais == 1) {
        imposto = 0;
    } else if (codigoPais == 2) {
        imposto = 0.15;
    } else if (codigoPais == 3) {
        imposto = 0.25;
    } else {
        printf("Código do país inválido.\n");
        return 1;
    }

    // Cálculo do valor do imposto
    valorImposto = precoTotal * imposto;

    // Cálculo do valor total (preço total + imposto)
    valorTotal = precoTotal + valorImposto;

    // Exibição dos resultados
    printf("Peso do produto em gramas: %.2f gramas\n", pesoGramas);
    printf("Preço total do produto: R$ %.2f\n", precoTotal);
    printf("Valor do imposto: R$ %.2f\n", valorImposto);
    printf("Valor total (preço + imposto): R$ %.2f\n", valorTotal);

    return 0;
}

