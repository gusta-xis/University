#include <conio.h>
#include <stdio.h>
#include<stdlib.h>
main()
{ int ano_atual, ano_nasc, id_atual, id_2050;

  system("cls");

	printf("\nDigite o ano de nascimento: ");
	scanf("%i",&ano_nasc);

	printf("\nDigite o ano atual: ");
	scanf("%i",&ano_atual);

	id_atual = ano_atual - ano_nasc;

	id_2050 = 2050 - ano_nasc;

	printf("\nA idade atual ‚: %i",id_atual);
	
	printf("\nA idade em 2050 ser : %i",id_2050);
	
	getch();
}

