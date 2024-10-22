#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 
void vtg (int vetorg[]){
	int i, vn[8], vp[8], cp = 0, cn= 0;
	
	for(i = 0; i < 8; i++){
		
		printf("\n\nDigite o %d numero: ", i+1);
		scanf("%d", &vetorg[i]);
		
		if(vetorg[i] >= 0){
			vp[cp] = vetorg[i];
			cp++;
			
		}else{
			vn[cn] = vetorg[i];
			cn++;
		}
	}
	
	printf("\nNumeros positivos e negativos lado a lado:\n");
	for(i = 0; i < 8; i++) {
    
    if(i < cp)
        printf("%d ", vp[i]);
    
    if(i < cn)
        printf("| %d", vn[i]);
        
        	printf("\n\n");
}
	
	
	
   /*printf("\nNumeros positivos:\n");     numers separados, positivos do lado em CIMA e negativos em BAIXO.
    for(i = 0; i < cp; i++) {  
        printf("%d\n", vp[i]);
    }


    printf("\nNumeros negativos:\n");
    for(i = 0; i < cn; i++) { 
        printf("%d\n", vn[i]);
    }
	
	
}
*/	

 
 
 
int main(){
	 
	int vetorg[8];
 
 
 	vtg (vetorg);
 	
 	getch();
}
