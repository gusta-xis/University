#include <conio.h>
// Como neste programa ser  utilizada a funcao sqrt
// faz-se necessria a biblioteca math.h
#include <math.h>
#include<stdio.h>
#include<windows.h>
main()
{float num1,num2,soma, raiz;
 int op;
 
 system("cls");
 
 printf("\n1- Somar dois n£meros");
 printf("\n2- Raiz quadrada de um n£mero");

 printf("\nDigite sua op‡ao: ");
 scanf("%i",&op);


 switch(op)
{
//if (op == 1)
  case 1: 
        {
          printf("\nDigite um valor para o primeiro n£mero: ");
          scanf("%f",&num1);
          printf("\nDigite um valor para o segundo n£mero: ");
          scanf("%f",&num2);
          soma = num1 + num2;
          printf("\nA soma de %.2f e %.2f: %.2f",num1,num2,soma);
       }
       break;
 //else if (op == 2)
 case 2: 
	   { //Se a opcao igual a 2, extrai a raiz quadrada de um numero
	      printf("\nDigite um valor: ");
	      scanf("%f",&num1);
	      raiz = sqrt(num1);
	      printf("\nA raiz quadrada de %.2f eh: %.2f",num1,raiz);
	    }
	    break;
	
 default: //Se for digitada uma op‡ao invalida mostra mensagem de alerta
		 printf("\Op‡ao inv lida !");
	     break;
}

 getch();
}
