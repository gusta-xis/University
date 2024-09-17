#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	float media, n1, n2, n3, s1, s2, s3, p1, p2 ,p3, tp;
	//n = nota / s = soma / p = peso / tp = total de pesos
	
	system("cls");
	
	printf("Digite tres notas: \n");
	scanf("%f",&n1);
	scanf("%f",&n2);
	scanf("%f",&n3);
	
	printf("Digite tres pesos: \n");
	scanf("%f",&p1);
	scanf("%f",&p2);
	scanf("%f",&p3);
	
	s1 = n1 * p1;
	s2 = n2 * p2;
	s3 = n3 * p3;
	tp = p1 + p2 + p3;
	
	media = (s1 + s2 + s3)/tp;
	printf("valor da media ponderada: %.2f", media);
	
	
	getch();
}
