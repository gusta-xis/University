#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float altura, peso;
    char classificacao;

    // Leitura dos dados de altura e peso
    printf("Digite a altura da pessoa (em metros): ");
    scanf("%f", &altura);
    
    printf("Digite o peso da pessoa (em kg): ");
    scanf("%f", &peso);

    // Classificação com base na altura e no peso
    if (altura < 1.20) {
        if (peso <= 60) {
            classificacao = 'A';
        } else if (peso > 60 && peso <= 90) {
            classificacao = 'D';
        } else {
            classificacao = 'G';
        }
    } else if (altura >= 1.20 && altura <= 1.70) {
        if (peso <= 60) {
            classificacao = 'B';
        } else if (peso > 60 && peso <= 90) {
            classificacao = 'E';
        } else {
            classificacao = 'H';
        }
    } else { // altura > 1.70
        if (peso <= 60) {
            classificacao = 'C';
        } else if (peso > 60 && peso <= 90) {
            classificacao = 'F';
        } else {
            classificacao = 'I';
        }
    }

    // Exibição da classificação
    printf("A classificação da pessoa é: %c\n", classificacao);

    return 0;
}

