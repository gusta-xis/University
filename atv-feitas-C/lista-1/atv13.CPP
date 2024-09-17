#include <conio.h>
#include<stdlib.h>
#include <math.h>
#include <stdio.h>
main()
{ float pes, polegadas, jardas, milhas;

	system("cls");													

	printf("\nDigite uma medida em pes: ");
	scanf("%f",&pes);
	// Calcula a medida em polegadas
	polegadas = pes * 12;
	// Calcula a medida em jardas
	jardas = pes / 3;
	// Calcula a medida em milhas
	milhas = jardas / 1760;

	printf("\nEm polegadas   = %.2f",polegadas);

	printf("\nEm jardas  = %.2f",jardas);

	printf("\nEm milhas  = %.2f",milhas);

	getch();
}											

