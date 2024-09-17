#include <stdio.h>
#include <locale.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Obtenção da data e hora atual do sistema
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    // Array para os meses em português
    char *meses[] = {
        "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };

    // Exibição da data e hora nos formatos solicitados
    printf("Formato dia/mês/ano: %02d/%02d/%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    printf("Formato mês por extenso: %02d de %s de %d\n", tm.tm_mday, meses[tm.tm_mon], tm.tm_year + 1900);
    printf("Formato hora:minuto: %02d:%02d\n", tm.tm_hour, tm.tm_min);

    return 0;
}

