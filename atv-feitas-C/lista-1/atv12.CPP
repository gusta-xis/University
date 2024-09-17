#include <conio.h>
#include <stdio.h>
#include<stdlib.h>
#include <math.h>
main()
{ float num1, num2, r1, r2;

    system("cls");

	printf("\nDigite um n£mero: ");
	scanf("%f",&num1);

	printf("\nDigite outro n£mero: ");
	scanf("%f",&num2);
	// Calcula o 1 numero elevado ao 2
	r1 = pow (num1, num2);
	// Calcula o 2 numero elevado ao 1
	r2 = pow (num2, num1);
	// Mostra o 1 numero elevado ao 2
	printf("\nResposta 1 = %.2f",r1);

	printf("\nResposta 2 = %.2f",r2);

	getch();
}
