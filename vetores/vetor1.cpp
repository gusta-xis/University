#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	int num[9], i, p, cont;

	for(i = 0; i < 9; i++){
	
	printf("Numero %.2d: ", i+1);
	scanf("%d", &num[i]);	
	
}

    printf("\nNumeros primos e suas posicoes: \n\n");
    
	for(i = 0; i < 9; i++){
		cont = 0;
		
		for(p = 1; p <= num[i]; p++){
			if((num[i] % p) == 0)
			cont++;
		}
		
		if (cont == 2)
		
		    printf("Numero primo: %d na posicao %.2d\n", num[i], i+1);
		    
		}		
	
getch();
return 0;
}
