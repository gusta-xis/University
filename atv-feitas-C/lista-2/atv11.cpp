include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main () {
	
	float salario, aumento, ns;
	int cargo;
	
	system("cls");
	
	printf("\nDigite o cargo do funcionario (1, 2, 3, 4, ou 5): ");
	scanf("%i",&cargo);
	
	printf("\nDigite o valor do salario: ");
	scanf("%f", &salario);
	
	switch(cargo)
		{
			case 1:
				printf("\nO cargo, escrituario");
				aumento = salario * 50/100;
				printf("\nO valor do aumento: %.2f", aumento);
				
				ns = salario + aumento;
				
				printf("\nO novo salario: %.2f", ns);
				break;
				
			case 2:
				printf("\nO cargo, secretario");
				aumento = salario * 35/100;
				printf("\nO valor do aumento: %.2f", aumento);
				
				ns = salario + aumento;
				
				printf("\nO novo salario: %.2f", ns);
				break;
				
			case 3:
				printf("\nO cargo, caixa");
				aumento = salario * 20/100;
				printf("\nO valor do aumento: %.2f", aumento);
				
				ns = salario + aumento;
				
				printf("\nO novo salario: %.2f", ns);
				break;
				
			case 4:
				printf("\nO cargo, gerente");
				aumento = salario * 10/100;
				printf("\nO valor do aumento: %.2f", aumento);
				
				ns = salario + aumento;
				
				printf("\nO novo salario: %.2f", ns);
				break;
				
			case 5:
				printf("\nO cargo, diretor");
				aumento = 0;
				printf("\nO valor do aumento: %.2f", aumento);
				
				ns = salario + aumento;
				
				printf("\nO novo salario: %.2f", ns);
				break;
		}
	
	
	
	
	
getch();	
}
