#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>


int main (){
	double n, sf, fat = 1, c = 1, soma, a;
	
	
	system("cls");
	

	
	printf("\nDigite a quantidade de numeros: ");
	scanf("%lf", &n);
	
	do{
		printf("\nEscolha o numero para ser fatorado: ");
		scanf("%lf", &a);		

		if(a < 0)
		
		printf("\n\nNao existe fatorial do numero %.2lf", a);
		break;
		
			fat=1;
			for(sf = a; sf>1; sf--)
			
			fat = fat*sf ;
		
		printf("\nNumero %.2lf, fatorial: %.2lf \n\n", a, fat);
		c = c + 1;
	
		soma = soma + fat;
		
		_sleep(600);
		
		if (c > n)
		break;
		
				
	}while(c <= n);
	
	printf("\n\nSoma do resultado dos fatoriais: %.2lf", soma);
	
	getch();
}
