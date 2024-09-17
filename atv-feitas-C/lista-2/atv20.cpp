#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int codigoProduto, codigoPais;
    float pesoQuilos, pesoGramas, precoPorGrama, precoTotal, imposto, valorImposto, valorTotal;

    // Leitura dos dados
    printf("Digite o c�digo do produto (1 a 10): ");
    scanf("%d", &codigoProduto);

    printf("Digite o peso do produto (em quilos): ");
    scanf("%f", &pesoQuilos);

    printf("Digite o c�digo do pa�s de origem (1 a 3): ");
    scanf("%d", &codigoPais);

    // Convers�o do peso para gramas
    pesoGramas = pesoQuilos * 1000;

    // Determina��o do pre�o por grama com base no c�digo do produto
    if (codigoProduto >= 1 && codigoProduto <= 4) {
        precoPorGrama = 10;
    } else if (codigoProduto >= 5 && codigoProduto <= 7) {
        precoPorGrama = 25;
    } else if (codigoProduto >= 8 && codigoProduto <= 10) {
        precoPorGrama = 35;
    } else {
        printf("C�digo do produto inv�lido.\n");
        return 1;
    }

    // C�lculo do pre�o total do produto
    precoTotal = pesoGramas * precoPorGrama;

    // Determina��o do imposto com base no c�digo do pa�s de origem
    if (codigoPais == 1) {
        imposto = 0;
    } else if (codigoPais == 2) {
        imposto = 0.15;
    } else if (codigoPais == 3) {
        imposto = 0.25;
    } else {
        printf("C�digo do pa�s inv�lido.\n");
        return 1;
    }

    // C�lculo do valor do imposto
    valorImposto = precoTotal * imposto;

    // C�lculo do valor total (pre�o total + imposto)
    valorTotal = precoTotal + valorImposto;

    // Exibi��o dos resultados
    printf("Peso do produto em gramas: %.2f gramas\n", pesoGramas);
    printf("Pre�o total do produto: R$ %.2f\n", precoTotal);
    printf("Valor do imposto: R$ %.2f\n", valorImposto);
    printf("Valor total (pre�o + imposto): R$ %.2f\n", valorTotal);

    return 0;
}

