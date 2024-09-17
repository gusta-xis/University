#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	int n1, n2, n3, soma;
	float media;
	
	system("cls");
	
	printf("Digite quatro numeros inteiros: \n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);

	soma = n1*0.4 + n2*0.4 + n3*0.2;
	media = soma / 3;
	
	printf("valor da media: %.2f", media);
	
	
	getch();
}
