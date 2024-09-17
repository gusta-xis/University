#include <conio.h>
#include <string.h>
#include<stdlib.h>
#include<stdio.h>
 main()
{float nota1, nota2, nota3, media, nota_exame;

system("cls");
printf("\nDigite a primeira nota: ");
scanf("%f",&nota1);

printf("\nDigite a segunda nota: ");
scanf("%f",&nota2);

printf("\nDigite a terceira nota: ");
scanf("%f",&nota3);

media = (nota1 + nota2 + nota3) / 3;

printf("\nM‚dia aritm‚tica: %.2f",media);

if (media >= 0 && media < 3)
	 printf("\nReprovado");
if (media >= 3 && media < 7)
	 {
		 printf("\n\n    Exame ");
		 nota_exame = 12 - media;
		 printf("\n\nDeve tirar nota %.2f para ser aprovado",nota_exame);
	 }
if (media >= 7 && media <=10)
	 printf("\nAprovado");

getch();
}
