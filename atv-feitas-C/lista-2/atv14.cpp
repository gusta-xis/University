#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salario, bonificacao = 0, auxilioEscola = 0, novoSalario;

    // Leitura do sal�rio do funcion�rio
    printf("Digite o sal�rio do funcion�rio: R$ ");
    scanf("%f", &salario);

    // C�lculo da bonifica��o
    if (salario <= 500) {
        bonificacao = salario * 0.05;
    } else if (salario > 500 && salario <= 1200) {
        bonificacao = salario * 0.12;
    } else {
        bonificacao = 0;  // Acima de R$ 1200,00 n�o tem bonifica��o
    }

    // C�lculo do aux�lio-escola
    if (salario <= 600) {
        auxilioEscola = 150;
    } else {
        auxilioEscola = 100;
    }

    // C�lculo do novo sal�rio
    novoSalario = salario + bonificacao + auxilioEscola;

    // Exibi��o dos resultados
    printf("Sal�rio atual: R$ %.2f\n", salario);
    printf("Bonifica��o: R$ %.2f\n", bonificacao);
    printf("Aux�lio-Escola: R$ %.2f\n", auxilioEscola);
    printf("Novo sal�rio: R$ %.2f\n", novoSalario);

    return 0;
}
