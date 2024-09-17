#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	int n1, n2, n3, n4, soma;
	//limpa a tela
	system("cls");
	//recebe as quatro notas
	printf("Digite quatro numeros inteiros: \n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	scanf("%d",&n4);
	//calcula a média
	soma = n1 + n2 + n3 + n4;
	//formata a mensagem de saida para duas casas decimais
	//printf("valor da média: %.2f", media)
	printf("valor da soma: %d", soma);
	//mostra o rsultado da media
	//para o programa a espera de um ENTER
	getch();
	
}
