#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(){
	system("cls");
float k = 1, n;
int i = 0;

printf("\nDigite o valor do metodo de heron: ");
scanf("%f", &n);

do{
	k = (k + (n / k))/2;

	printf("Iteracao %d: %f\n", i + 1, k);
	
	i++;	
	k++;
}while(i < 12);
	
	printf("\n\nRaiz quadrada calculada pela funcao sqrt: %.10f\n", sqrt(n));
	getch();
}
