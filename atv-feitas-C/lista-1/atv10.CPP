#include <conio.h>
#include <string.h>
#include<stdlib.h>
#include <stdio.h>
main()
{ float area, raio;

	system("cls");

	printf("\nDigite o raio: ");
	scanf("%f",&raio);

	area = 3.1415 * raio * raio;

	printf("\nArea ‚: %.2f",area);

	getch();
}
