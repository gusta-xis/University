#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salarioMinimo, horasTrabalhadas, horasExtras, salarioHora, salarioMes, valorHorasExtras, salarioBruto;
    float salarioLiquido, gratificacao, irrf;
    int dependentes;

    // Leitura dos dados
    printf("Digite o valor do salário mínimo: R$ ");
    scanf("%f", &salarioMinimo);

    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    printf("Digite o número de dependentes: ");
    scanf("%d", &dependentes);

    printf("Digite a quantidade de horas extras trabalhadas: ");
    scanf("%f", &horasExtras);

    // Cálculo do valor da hora trabalhada e salário do mês
    salarioHora = salarioMinimo / 5;
    salarioMes = horasTrabalhadas * salarioHora;

    // Cálculo do valor das horas extras (acréscimo de 50% na hora extra)
    valorHorasExtras = horasExtras * (salarioHora * 1.5);

    // Cálculo do salário bruto
    salarioBruto = salarioMes + valorHorasExtras + (dependentes * 32);

    // Cálculo do IRRF
    if (salarioBruto < 200) {
        irrf = 0;
    } else if (salarioBruto >= 200 && salarioBruto <= 500) {
        irrf = salarioBruto * 0.10;
    } else {
        irrf = salarioBruto * 0.20;
    }

    // Cálculo do salário líquido
    salarioLiquido = salarioBruto - irrf;

    // Cálculo da gratificação
    if (salarioLiquido <= 350) {
        gratificacao = 100;
    } else {
        gratificacao = 50;
    }

    // Exibição dos resultados
    printf("Salário Hora: R$ %.2f\n", salarioHora);
    printf("Salário do Mês: R$ %.2f\n", salarioMes);
    printf("Valor das Horas Extras: R$ %.2f\n", valorHorasExtras);
    printf("Salário Bruto: R$ %.2f\n", salarioBruto);
    printf("IRRF: R$ %.2f\n", irrf);
    printf("Salário Líquido: R$ %.2f\n", salarioLiquido);
    printf("Gratificação: R$ %.2f\n", gratificacao);
    printf("Salário Final (Líquido + Gratificação): R$ %.2f\n", salarioLiquido + gratificacao);

    return 0;
}

