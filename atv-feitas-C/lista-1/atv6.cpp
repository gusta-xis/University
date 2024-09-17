#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	float salario, gratificacao, nsalario, imposto, dsalario;
	//n = novo / d = diferença
	system("cls");
	
	printf("Digite o salario Base: \n");
	scanf("%f", &salario);
	//5% do salario base
	gratificacao = salario * 5/100;
	//7% do salario base
	imposto = salario * 7/100;
	
	nsalario = salario + gratificacao - imposto;
	
	printf("Salario com desconto e gratificação: %.2f\n", nsalario);
	
	dsalario = nsalario - salario;
	
	printf("O valor de desconto e gratificação: %.2f\n", dsalario);
	
	getch();
	return 0;
}
