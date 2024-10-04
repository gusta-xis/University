#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


float calculo(int n) {
    float soma = 0; 
    int fat, j;
    
    for(int s = 2; s <= n; s++) {
        fat = 1;
        for(j = s; j > 1; j--) {
            fat = fat * j; 
        }
        soma += 1.0 / fat; 
    }
    
    return soma;
}

int main() {    
    int n;
    float soma;

    system("cls"); 
    
    printf("\nDigite um numero inteiro e positivo: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("\nNao existe fatorial de numero negativo.");
    } else {
        soma = calculo(n);    
        printf("\n\nO valor de S e: %.2f", soma); 
    }
    
    getch(); 
    return 0;
}

