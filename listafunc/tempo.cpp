#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void calculosec (int tsec){
	int hora, min, sec;
	
	hora = tsec / 3600;
	min = (tsec % 3600) / 60;
    sec = tsec % 60;
	
	printf("\nHora: %d\n\nMinutos: %d\n\nSegundos: %d", hora, min, sec);
	
	
	
}



int main() {
	
	int tsec;
	
	printf("\nDigite um valor em segundos: ");
	scanf("%d", &tsec);
	
	calculosec (tsec);
	
	getch();
}
