#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    // Definir o locale para o padr�o do sistema
    setlocale(LC_ALL, "");

    int voto;
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, invalido;
    int nulo = 0, branco = 0;

    printf("Digite os votos (1-4 para candidatos, 5 para nulo, 6 para branco, 0 para encerrar): \n");

    while (1) {
        scanf("%d", &voto);

        if (voto == 0) {
            break; // Encerra o loop se o voto for 0
        }

        switch (voto) {
            case 1:
                candidato1++; // Voto para candidato 1
                break; 
            case 2:
                candidato2++; // Voto para candidato 2
                break;
            case 3:
                candidato3++; // Voto para candidato 3
                break;
            case 4:
                candidato4++; // Voto para candidato 4
                break;
            case 5:
                nulo++; // Voto nulo
                break;
            case 6:
                branco++; // Voto em branco
                break;
            default:
            	invalido++;
                printf("Voto inv�lido!\n"); // Caso o voto n�o esteja dentro do intervalo permitido
                
        }
    }

    // Exibe o resultado da vota��o
    printf("\n\nResultado da elei��o:\n");
    printf("\n\nCandidato 1: %d votos\n", candidato1);
    printf("\n\nCandidato 2: %d votos\n", candidato2);
    printf("\n\nCandidato 3: %d votos\n", candidato3);
    printf("\n\nCandidato 4: %d votos\n", candidato4);
    printf("\n\nVotos nulos: %d\n", nulo);
    printf("\n\nVotos em branco: %d\n", branco);
    printf("\n\nVotos invalidos: %d\n", invalido);

    getch(); 
    return 0;
}

