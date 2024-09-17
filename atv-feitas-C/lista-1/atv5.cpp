#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	float salario, percentual, nsalario, dsalario;
	//n = novo / d = diferença
	system("cls");
	
	printf("Digite seu salario: \n");
	scanf("%f", &salario);
	
	printf("Digite o percentual de aumento: \n");
	scanf("%f", &percentual);
	
	nsalario = salario + salario * percentual / 100;
	
	printf("Salario com aumento percentual: %.2f\n", nsalario);
	
	dsalario = nsalario - salario;
	
	printf("O valor de aumento foi de: %.2f\n", dsalario);
	
	getch();
	return 0;
}
