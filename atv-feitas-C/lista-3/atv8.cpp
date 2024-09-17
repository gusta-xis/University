#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
    int numero, quantidade = 0, soma = 0, maior, menor, soma_pares = 0, quantidade_pares = 0, quantidade_impares = 0;
	
	setlocale(LC_ALL, "");
	
    printf("Digite os números (30000 para finalizar): \n");
    scanf("%d", &numero);

    // Inicializa o primeiro número como maior e menor
    if (numero != 30000) {
        maior = menor = numero;
    }

    while (numero != 30000) {
        soma += numero; // Soma de todos os números digitados
        quantidade++;    // Contador de números digitados

        if (numero > maior) maior = numero; // Verifica e atualiza o maior número
        if (numero < menor) menor = numero; // Verifica e atualiza o menor número

        if (numero % 2 == 0) {
            soma_pares += numero; // Soma apenas dos números pares
            quantidade_pares++;   // Contador de números pares
        } else {
            quantidade_impares++; // Contador de números ímpares
        }

        scanf("%d", &numero);
    }

    if (quantidade > 0) {
        printf("\n\nSoma dos números: %d\n\n", soma); // Exibe a soma total dos números
        
        printf("\n\nQuantidade de números: %d\n", quantidade); // Exibe a quantidade total de números
        
        printf("\n\nMédia dos números: %.2f\n", (float)soma / quantidade); // Calcula e exibe a média dos números
        
        printf("\n\nMaior número: %d\n", maior); // Exibe o maior número
        
        printf("\n\nMenor número: %d\n", menor); // Exibe o menor número
        
        printf("\n\nMédia dos números pares: %.2f\n", quantidade_pares > 0 ? (float)soma_pares / quantidade_pares : 0); // Calcula e exibe a média dos números pares
        
        printf("\n\nPercentual de números ímpares: %.2f%%\n", (float)quantidade_impares / quantidade * 100); // Calcula e exibe o percentual de números ímpares
    } else {
        printf("\n\nNenhum número válido foi digitado.\n");
    }

    getch(); // Aguarda o usuário pressionar uma tecla antes de fechar o programa
    return 0;
}

