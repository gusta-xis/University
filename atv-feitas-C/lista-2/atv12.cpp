#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int codigo;
    float salarioAtual, aumento, novoSalario;
    char cargo[20];

    // Leitura do c�digo do cargo e do sal�rio atual
    printf("Digite o c�digo do cargo do funcion�rio (1-5): ");
    scanf("%d", &codigo);
    
    printf("Digite o sal�rio atual do funcion�rio: R$ ");
    scanf("%f", &salarioAtual);

    // Determina��o do cargo e c�lculo do aumento
    switch(codigo) {
        case 1:
            sprintf(cargo, "Escritur�rio");
            aumento = salarioAtual * 0.50;
            novoSalario = salarioAtual + aumento;
            break;
        case 2:
            sprintf(cargo, "Secret�rio");
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
            printf("C�digo de cargo inv�lido.\n");
            return 1;
    }

    // Exibi��o dos resultados
    printf("Cargo: %s\n", cargo);
    printf("Aumento: R$ %.2f\n", aumento);
    printf("Novo sal�rio: R$ %.2f\n", novoSalario);

    return 0;
}

