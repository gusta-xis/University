#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
main()
{ float peso_saco, racao_gato1, racao_gato2, total_final;

	system("cls");

	printf("\nDigite o peso do saco de ra‡ao (em Kg): ");
	scanf("%f",&peso_saco);

	printf("\nDigite a ra‡ao consumida pelo 1§ gato (em gramas):");
	scanf("%f",&racao_gato1);

	printf("\nDigite a ra‡ao consumida pelo 2§ gato (em gramas):");

	scanf("%f",&racao_gato2);
	// Converte a racao do gato 1 para Kg
	racao_gato1 = racao_gato1 / 1000;
	// Converte a racao do gato 2 para Kg
	racao_gato2 = racao_gato2 / 1000;
	// Calcula o restante 5 dias
	total_final = peso_saco - 5 * (racao_gato1 + racao_gato2);

	printf("\nTotal de ra‡ao restante (em Kg): %.2f",total_final);

	getch();
}
