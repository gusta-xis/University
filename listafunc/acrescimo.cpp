#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

float ac(float vantigo, float vatual) {
	float res;
	
	res = vatual / vantigo - 1;
	
	res = res * 100;
	
	
	return res;
}





int main(){
	int vantigo, vatual, acrescimo;
	
	printf("\nDigite o valor antigo do produto: ");
	scanf("%d", &vantigo);
	
	printf("\nDigite o valor atual do produto: ");
	scanf("%d", &vatual);
	
	
	acrescimo = ac(vantigo, vatual);
	
	
	
	printf("\n\nValor anterior %d\n\nAtual valor %d \n\nValor do acrescimo %%%d", vantigo, vatual, acrescimo );
	
	
	
	
	getch();
}
