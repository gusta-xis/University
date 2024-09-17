#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float salario, imposto, novoSalario;
    char classificacao[20];

    // Exibi��o do menu de op��es
    printf("Menu de op��es:\n");
    printf("1 � Imposto\n");
    printf("2 � Novo Sal�rio\n");
    printf("3 � Classifica��o\n");
    printf("Digite a op��o desejada -> ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            // Op��o 1: Calcular o valor do imposto
            printf("Digite o sal�rio do funcion�rio: R$ ");
            scanf("%f", &salario);

            if (salario < 500) {
                imposto = salario * 0.05;
            } else if (salario >= 500 && salario <= 850) {
                imposto = salario * 0.10;
            } else {
                imposto = salario * 0.15;
            }

            printf("O valor do imposto �: R$ %.2f\n", imposto);
            break;

        case 2:
            // Op��o 2: Calcular o novo sal�rio
            printf("Digite o sal�rio do funcion�rio: R$ ");
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

            printf("O novo sal�rio �: R$ %.2f\n", novoSalario);
            break;

        case 3:
            // Op��o 3: Mostrar a classifica��o do sal�rio
            printf("Digite o sal�rio do funcion�rio: R$ ");
            scanf("%f", &salario);

            if (salario <= 700) {
                sprintf(classificacao, "Mal remunerado");
            } else {
                sprintf(classificacao, "Bem remunerado");
            }

            printf("A classifica��o do sal�rio �: %s\n", classificacao);
            break;

        default:
            printf("Op��o inv�lida.\n");
            break;
    }

    return 0;
}

