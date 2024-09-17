#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    int i, a, b, c;
    // Limpa a tela
    system("cls");

    // Mostra mensagem solicitando um valor para A
    printf("\nDigite um valor para A: ");
    // Recebe o valor de A
    scanf("%i", &a);

    // Mostra mensagem solicitando um valor para B
    printf("\nDigite um valor para B: ");
    // Recebe o valor de B
    scanf("%i", &b);

    // Mostra mensagem solicitando um valor para C
    printf("\nDigite um valor para C: ");
    // Recebe o valor de C
    scanf("%i", &c);

    // Mostra mensagem solicitando um valor para I
    printf("\nDigite um valor para I (1, 2 ou 3): ");
    // Recebe o valor de I
    scanf("%i", &i);

    if (a != b && b != c && a != c)
    {
        switch(i)
        {
            case 1:
                if (a > b && b > c)
                    printf("\n %d, %d, %d", c, b, a);
                else if (a > c && c > b)
                    printf("\n %d, %d, %d", b, c, a);
                else if (b > a && a > c)
                    printf("\n %d, %d, %d", c, a, b);
                else if (b > c && c > a)
                    printf("\n %d, %d, %d", a, c, b);
                else if (c > a && a > b)
                    printf("\n %d, %d, %d", b, a, c);
                else
                    printf("\n %d, %d, %d", a, b, c);
                break;

            case 2:
                if (a > b && b > c)
                    printf("\n %d, %d, %d", a, b, c);
                else if (a > c && c > b)
                    printf("\n %d, %d, %d", a, c, b);
                else if (b > a && a > c)
                    printf("\n %d, %d, %d", b, a, c);
                else if (b > c && c > a)
                    printf("\n %d, %d, %d", b, c, a);
                else if (c > a && a > b)
                    printf("\n %d, %d, %d", c, a, b);
                else
                    printf("\n %d, %d, %d", c, b, a);
                break;

            case 3:
                if (a > b && b > c)
                    printf("\n %d, %d, %d", b, a, c);
                else if (a > c && c > b)
                    printf("\n %d, %d, %d", c, a, b);
                else if (b > a && a > c)
                    printf("\n %d, %d, %d", a, b, c);
                else if (b > c && c > a)
                    printf("\n %d, %d, %d", c, b, a);
                else if (c > a && a > b)
                    printf("\n %d, %d, %d", a, c, b);
                else
                    printf("\n %d, %d, %d", b, c, a);
                break;

            default:
                printf("\nOpcao Invalida!");
                break;
        }
    }
    else
    {
        printf("\nOs valores digitados sao iguais");
    }

    getch();
    return 0;
}

