#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int n, a = 1, b = 4, c=1, soma, csoma;
	
	system("cls");
	
	printf("\nDigite o numero de repeticoes: ");
	scanf("%d", &n);
	
	do{
			printf("%d, ", a);
			c = c + 1;
			soma = soma + a;
			csoma = csoma + 1;
						
		if(c > n)
			 break;
			 
			printf("%d, ", b);
			c = c + 1;
			soma = soma + b;
			csoma = csoma + 1;
						
		if(c > n)
			 break;
			 	 
			printf("%d, ", b);
			c = c + 1;	
			soma = soma + b;
			csoma = csoma + 1;
							
		if(c > n)
		break;
	
			
	a++;
	b++;			
	}while(a <= n);	

	
	printf("\n\nSoma dos numeros: %d.\nSoma dos print: %d. ", soma, csoma);
	
	
	
	getch();
}
