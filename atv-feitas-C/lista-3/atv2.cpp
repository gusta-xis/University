#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	system ("cls");
	
	float fat, soma = 1;
	int n, i, j;
	
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &n);
	
	if(n<0)
	{
		printf("\nNao existe fatorial negativo.");
		
		}else
			{
		
		for(i=2; i<=n; i++)
		{
			fat=1;
			for(j = i; j>1; j--)
			
			fat = fat*j;
			
			printf("\nFatorial de %d= %.f\n", i, fat);
			
			soma += 1/fat;
			
			printf("Resultado da soma: %f\n", soma);
			
			_sleep(800);
		}
		
			printf("\n\nResultado final da soma: %f", soma);
		}
	getch();
}
