#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(){
	system("cls");
	
	double cose = 1, x, fat, po, pi = 3.14159265, certo;
	int j, i, n;
	
	//printf("\nDeclare um numero de repeticoes: "); se caso quiser adaptar para decidir o numero de rep.
	//scanf("%d", &n);
	
	printf("\nDeclare um numero: ");
	scanf("%lf", &x);
	
	x = (x*pi)/180;
			
		certo = cos(x); //para calcular para valor correto.
			
	for(i = 2; i <= 8; i = i + 2) { //8 troca por 2 * n na adaptação e a verificação da variavel n é essencial.

		fat = 1;
		
		for( j = i; j > 1; j--) {
		
		fat = fat * j;
		}
		
		po = pow(x, i);
		
	if ((i / 2) % 2 == 1) { 
	
	 cose -= po / fat; 
	 
	 }else{ 
	 
	 cose += po / fat;
	 
	 }
				


		}
		
		if(cose == certo){
			printf("\n\nResultado coseno = %lf, numero esta correto", cose);
			
		}else {
		printf("\n\nNumero %lf incorreto, correto = %lf", cose, certo);
		}
		
	getch();
}
