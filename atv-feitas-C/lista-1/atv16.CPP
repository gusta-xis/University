#include <stdio.h>>
#include <conio.h>
#include <string.h>
#include<stdlib.h>
main()
{ float horas_t, vlr_sal_min, vlr_hora_t, vlr_sal_bru, imp, vlr_sal_liq;
	system("cls");
	
	printf( "\nDigite o total de horas trabalhadas: ");
	scanf("%f",&horas_t);
	
	printf("\nDigite o valor do sal rio m¡nimo: ");
	scanf("%f",&vlr_sal_min);
	
	vlr_hora_t =  vlr_sal_min / 2;
	
	vlr_sal_bru = vlr_hora_t * horas_t;
	
	imp = vlr_sal_bru * 3 / 100;
	
	vlr_sal_liq = vlr_sal_bru - imp;
	
	printf("\nO sal rio a receber :%.2f", vlr_sal_liq);
	
	getch();
}
