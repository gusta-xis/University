#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

system("cls");

    int ant, fib = 0, aux = 1, c = 2, n, soma;   
	
	printf("\nDigite o ate que numero a sequencia de fibonacci vai: ");
	scanf("%d", &n);
    
    printf("\n%d - %d ",fib, aux);  
    
    do{ 
		         
        ant = fib + aux;   
		 
		 	printf("- %d", ant);
		              
        fib = aux;
		aux = ant; 	  
		
		soma = fib + ant + aux - 1;  
		
    c = c + 1;
    
    if(c > n)
    break;
    
		
	} while(c < n);//Só vai mostrar os 8 primeiros numero da sequencia.
     
     _sleep(400);
    printf("\n\nSoma dos numero da sequencia sao: %d\n", soma);


getch();
}
