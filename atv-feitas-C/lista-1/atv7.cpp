#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	float salario, gratificacao, nsalario, imposto;
	//n = novo / d = diferença
	system("cls");
	
	printf("Digite o salario Base: \n");
	scanf("%f", &salario);
	
	gratificacao = 50;
	
	imposto = salario * 0.10;
	
	nsalario = salario + gratificacao - imposto;
	
	printf("Salario com desconto e gratificacao: %.2f\n", nsalario);
	
	printf("O valor de gratificacao e: %.2f", gratificacao);
	
	printf("O valor de desconto e: %.2f\n", imposto);
	
	getch();
	return 0;
}
