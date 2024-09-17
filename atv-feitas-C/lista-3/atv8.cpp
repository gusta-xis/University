#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
    int numero, quantidade = 0, soma = 0, maior, menor, soma_pares = 0, quantidade_pares = 0, quantidade_impares = 0;
	
	setlocale(LC_ALL, "");
	
    printf("Digite os n�meros (30000 para finalizar): \n");
    scanf("%d", &numero);

    // Inicializa o primeiro n�mero como maior e menor
    if (numero != 30000) {
        maior = menor = numero;
    }

    while (numero != 30000) {
        soma += numero; // Soma de todos os n�meros digitados
        quantidade++;    // Contador de n�meros digitados

        if (numero > maior) maior = numero; // Verifica e atualiza o maior n�mero
        if (numero < menor) menor = numero; // Verifica e atualiza o menor n�mero

        if (numero % 2 == 0) {
            soma_pares += numero; // Soma apenas dos n�meros pares
            quantidade_pares++;   // Contador de n�meros pares
        } else {
            quantidade_impares++; // Contador de n�meros �mpares
        }

        scanf("%d", &numero);
    }

    if (quantidade > 0) {
        printf("\n\nSoma dos n�meros: %d\n\n", soma); // Exibe a soma total dos n�meros
        
        printf("\n\nQuantidade de n�meros: %d\n", quantidade); // Exibe a quantidade total de n�meros
        
        printf("\n\nM�dia dos n�meros: %.2f\n", (float)soma / quantidade); // Calcula e exibe a m�dia dos n�meros
        
        printf("\n\nMaior n�mero: %d\n", maior); // Exibe o maior n�mero
        
        printf("\n\nMenor n�mero: %d\n", menor); // Exibe o menor n�mero
        
        printf("\n\nM�dia dos n�meros pares: %.2f\n", quantidade_pares > 0 ? (float)soma_pares / quantidade_pares : 0); // Calcula e exibe a m�dia dos n�meros pares
        
        printf("\n\nPercentual de n�meros �mpares: %.2f%%\n", (float)quantidade_impares / quantidade * 100); // Calcula e exibe o percentual de n�meros �mpares
    } else {
        printf("\n\nNenhum n�mero v�lido foi digitado.\n");
    }

    getch(); // Aguarda o usu�rio pressionar uma tecla antes de fechar o programa
    return 0;
}

