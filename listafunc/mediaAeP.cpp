#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

float mediaa(float n1, float n2, float n3){
	
    return (n1 + n2 + n3) / 3;
}

float mediap(float n1, float n2, float n3){
	
    return ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10;
}

int main (){
    system("cls");    
    
    float n1, n2, n3; 
    printf("\nDigite sua primeira nota: ");
    scanf("%f", &n1);
    
    printf("\nDigite sua segunda nota: ");
    scanf("%f", &n2);
    
    printf("\nDigite sua terceira nota: ");
    scanf("%f", &n3);
    
    char op;
    
    printf("\nAgora digite o tipo de media a ser calculada \n\nA para media aritmetica: \n\nP para ponderada: \n\n ");
    scanf(" %c", &op); 
    
    op = toupper(op);
    
    switch(op) {
        case 'A': 
            printf("\nMedia aritmetica = %.2f ", mediaa(n1, n2, n3));
            break;
    
        case 'P': 
            printf("\nMedia ponderada = %.2f ", mediap(n1, n2, n3));
            break;
    
        default: 
            printf("\n\n\nOpcao invalida\n\n\n");
            break;
    }

    return 0;
}
