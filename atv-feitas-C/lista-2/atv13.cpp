#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float salario, imposto, novoSalario;
    char classificacao[20];

    // Exibição do menu de opções
    printf("Menu de opções:\n");
    printf("1 – Imposto\n");
    printf("2 – Novo Salário\n");
    printf("3 – Classificação\n");
    printf("Digite a opção desejada -> ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            // Opção 1: Calcular o valor do imposto
            printf("Digite o salário do funcionário: R$ ");
            scanf("%f", &salario);

            if (salario < 500) {
                imposto = salario * 0.05;
            } else if (salario >= 500 && salario <= 850) {
                imposto = salario * 0.10;
            } else {
                imposto = salario * 0.15;
            }

            printf("O valor do imposto é: R$ %.2f\n", imposto);
            break;

        case 2:
            // Opção 2: Calcular o novo salário
            printf("Digite o salário do funcionário: R$ ");
            scanf("%f", &salario);

            if (salario > 1500) {
                novoSalario = salario + 25;
            } else if (salario >= 750 && salario <= 1500) {
                novoSalario = salario + 50;
            } else if (salario >= 450 && salario < 750) {
                novoSalario = salario + 75;
            } else {
                novoSalario = salario + 100;
            }

            printf("O novo salário é: R$ %.2f\n", novoSalario);
            break;

        case 3:
            // Opção 3: Mostrar a classificação do salário
            printf("Digite o salário do funcionário: R$ ");
            scanf("%f", &salario);

            if (salario <= 700) {
                sprintf(classificacao, "Mal remunerado");
            } else {
                sprintf(classificacao, "Bem remunerado");
            }

            printf("A classificação do salário é: %s\n", classificacao);
            break;

        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}

