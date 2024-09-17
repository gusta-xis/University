#include <conio.h>
#include <stdio.h>
#include<stdlib.h>
#include <math.h>
main()
{ float num, quad, cubo, r2, r3;

	system("cls");													

	printf("\nDigite um n£mero: ");
	scanf("%f",&num);
	// Calcula o numero ao quadrado
	quad = pow(num,2);
	// Calcula o numero ao cubo
	cubo = pow(num,3);
	// Calcula a raiz quadrada do numero
	r2 = sqrt(num);
	// Calcula a raiz cubica do n£mero
	//r3 = exp(log(num) * 1/3);
	r3 = powf(num,1.0/3.0);

	printf("\nN£mero ao quadrado  = %.2f",quad);

	printf("\nN£mero ao cubo  = %.2f",cubo);

	printf("\nRaiz quadrada   = %.2f",r2);

	printf("\nRaiz c£bica  = %.2f",r3);
	
	getch();
}

