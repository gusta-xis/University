#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (){
	system("cls");
	
	float nt1, nt2, nt3, mediaar, nte;
	
	printf("\nDigite sua primeira nota: ");
	scanf("%f", &nt1);
	
	printf("\nDigite sua segunda nota: ");
	scanf("%f", &nt2);
	
	printf("\nDigite sua terceira nota nota: ");
	scanf("%f", &nt3);
	
	mediaar = (nt1+nt2+nt3)/3;
	
	printf("\nMedia aritmetica: %.2f", mediaar);
	
	if (mediaar >=0 && mediaar <3.0)
	printf("\nReprovado");
	
	if (mediaar>=3.0 && mediaar <7.0)
	
	{
		printf("\n\n Exame");
		nte = 12-mediaar;
		printf("\n\nDeve tirar nota %.2f para ser aprovado", nte);
	}
	
	if (mediaar >= 7.0 && mediaar <= 10)
	printf("\nAprovado");
	
	
	getch();
	return 0;
}
