#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int codigo;
    float salarioAtual, aumento, novoSalario;
    char cargo[20];

    // Leitura do código do cargo e do salário atual
    printf("Digite o código do cargo do funcionário (1-5): ");
    scanf("%d", &codigo);
    
    printf("Digite o salário atual do funcionário: R$ ");
    scanf("%f", &salarioAtual);

    // Determinação do cargo e cálculo do aumento
    switch(codigo) {
        case 1:
            sprintf(cargo, "Escriturário");
            aumento = salarioAtual * 0.50;
            novoSalario = salarioAtual + aumento;
            break;
        case 2:
            sprintf(cargo, "Secretário");
            aumento = salarioAtual * 0.35;
            novoSalario = salarioAtual + aumento;
            break;
        case 3:
            sprintf(cargo, "Caixa");
            aumento = salarioAtual * 0.20;
            novoSalario = salarioAtual + aumento;
            break;
        case 4:
            sprintf(cargo, "Gerente");
            aumento = salarioAtual * 0.10;
            novoSalario = salarioAtual + aumento;
            break;
        case 5:
            sprintf(cargo, "Diretor");
            aumento = 0.00;
            novoSalario = salarioAtual;
            break;
        default:
            printf("Código de cargo inválido.\n");
            return 1;
    }

    // Exibição dos resultados
    printf("Cargo: %s\n", cargo);
    printf("Aumento: R$ %.2f\n", aumento);
    printf("Novo salário: R$ %.2f\n", novoSalario);

    return 0;
}

