#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	float salario, salariocm;
	//cm = com aumento
	system("cls");
	
	printf("Digite seu salario: \n");
	scanf("%f", &salario);
	
	salariocm = salario + salario * 25/100;
	
	printf("Salario com aumento de 25%: %.3f \n", salariocm);
	
	getch();
	return 0;
}
