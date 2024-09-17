#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main () {
	
	int hi, mi, hf, mf, md, hd;
	
	system("cls");
	
	printf("Horario de inicio do jogo \nHora: ");
	scanf("%i", &hi);
	printf("Minuto: ");
	scanf("%i",&mi);
	
	printf("\nHorario de fim de jogo \nHora: ");
	scanf("%i", &hf);
	printf("Minuto: ");
	scanf("%i",&mf);
	
	if (mi > mf)
		{
			mf = mf + 60;
			hf = hf - 1;
		}
		
		
	if (hi > hf)
	
			hf = hf + 24;
			
	md = mf - mi;
	hd = hf- hi;
	
	printf("\nO jogo durou %i Horas e %i Minutos", hd, md);
			
		
	
	
	
	
	
	
	
getch();
}

