#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salarioMinimo, horasTrabalhadas, horasExtras, salarioHora, salarioMes, valorHorasExtras, salarioBruto;
    float salarioLiquido, gratificacao, irrf;
    int dependentes;

    // Leitura dos dados
    printf("Digite o valor do sal�rio m�nimo: R$ ");
    scanf("%f", &salarioMinimo);

    printf("Digite o n�mero de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    printf("Digite o n�mero de dependentes: ");
    scanf("%d", &dependentes);

    printf("Digite a quantidade de horas extras trabalhadas: ");
    scanf("%f", &horasExtras);

    // C�lculo do valor da hora trabalhada e sal�rio do m�s
    salarioHora = salarioMinimo / 5;
    salarioMes = horasTrabalhadas * salarioHora;

    // C�lculo do valor das horas extras (acr�scimo de 50% na hora extra)
    valorHorasExtras = horasExtras * (salarioHora * 1.5);

    // C�lculo do sal�rio bruto
    salarioBruto = salarioMes + valorHorasExtras + (dependentes * 32);

    // C�lculo do IRRF
    if (salarioBruto < 200) {
        irrf = 0;
    } else if (salarioBruto >= 200 && salarioBruto <= 500) {
        irrf = salarioBruto * 0.10;
    } else {
        irrf = salarioBruto * 0.20;
    }

    // C�lculo do sal�rio l�quido
    salarioLiquido = salarioBruto - irrf;

    // C�lculo da gratifica��o
    if (salarioLiquido <= 350) {
        gratificacao = 100;
    } else {
        gratificacao = 50;
    }

    // Exibi��o dos resultados
    printf("Sal�rio Hora: R$ %.2f\n", salarioHora);
    printf("Sal�rio do M�s: R$ %.2f\n", salarioMes);
    printf("Valor das Horas Extras: R$ %.2f\n", valorHorasExtras);
    printf("Sal�rio Bruto: R$ %.2f\n", salarioBruto);
    printf("IRRF: R$ %.2f\n", irrf);
    printf("Sal�rio L�quido: R$ %.2f\n", salarioLiquido);
    printf("Gratifica��o: R$ %.2f\n", gratificacao);
    printf("Sal�rio Final (L�quido + Gratifica��o): R$ %.2f\n", salarioLiquido + gratificacao);

    return 0;
}

