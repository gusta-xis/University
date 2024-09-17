#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h> 

main() {
	
	float mensal, atual, reajuste;
	
	system("cls");
	
	printf("\nDigite a venda mensal: ");
	scanf("%f", &mensal);
	
	printf("\nDigite o preco atual: ");
	scanf("%f", &atual);
	
	
	if (mensal < 500 || atual < 30)
	{
		reajuste = atual + atual * 10/100;
		
		printf("\nAumento de %.2f", reajuste);
	}
	
	else if (mensal >= 500 && mensal < 1200 || atual >= 30 && atual < 80)
	{
		reajuste = atual + atual * 15/100;
		
		printf("\nAumento de %.2f", reajuste);
	}	
	
	else 
	{	
		reajuste = atual - atual * 20/100;
		
		printf("\nObteve uma diminuicao no valor de %.2f", reajuste);
	}
	
	
	
getch();
}



