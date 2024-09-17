#include <conio.h>
#include <stdio.h>
#include<stdlib.h>
main()
{ float p_fab, perc_d, perc_i, vlr_d, vlr_i, p_final;
	system("cls");
	
	printf("\nDigite o pre‡o de f brica: ");
	scanf("%f",&p_fab);
	
	printf("\nDigite o percentual de lucro do distribuidor: ");
	scanf("%f",&perc_d);
	
	printf("\nDigite o percentual de impostos: ");
	scanf("%f",&perc_i);
	// Calcula o valor do lucro do distribuidor
	vlr_d = p_fab * perc_d / 100;
	// Calcula o valor dos impostos
	vlr_i  = p_fab * perc_i / 100;
	// Calcula o pre‡o final do ve¡culo
	p_final = p_fab + vlr_d + vlr_i;
	
	printf("\nO lucro do distribuidor ‚ %.2f",vlr_d);
	
	printf("\nO valor dos impostos ‚ %.2f",vlr_i);
	
	printf("\nO pre‡o final do ve¡culo ao consumidor ‚%.2f",p_final);
	
	getch();
}
