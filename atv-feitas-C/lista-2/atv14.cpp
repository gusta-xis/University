#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salario, bonificacao = 0, auxilioEscola = 0, novoSalario;

    // Leitura do salário do funcionário
    printf("Digite o salário do funcionário: R$ ");
    scanf("%f", &salario);

    // Cálculo da bonificação
    if (salario <= 500) {
        bonificacao = salario * 0.05;
    } else if (salario > 500 && salario <= 1200) {
        bonificacao = salario * 0.12;
    } else {
        bonificacao = 0;  // Acima de R$ 1200,00 não tem bonificação
    }

    // Cálculo do auxílio-escola
    if (salario <= 600) {
        auxilioEscola = 150;
    } else {
        auxilioEscola = 100;
    }

    // Cálculo do novo salário
    novoSalario = salario + bonificacao + auxilioEscola;

    // Exibição dos resultados
    printf("Salário atual: R$ %.2f\n", salario);
    printf("Bonificação: R$ %.2f\n", bonificacao);
    printf("Auxílio-Escola: R$ %.2f\n", auxilioEscola);
    printf("Novo salário: R$ %.2f\n", novoSalario);

    return 0;
}
