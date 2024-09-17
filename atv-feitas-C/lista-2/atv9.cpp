#include <stdio.h>
#include <locale.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Obten��o da data e hora atual do sistema
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    // Array para os meses em portugu�s
    char *meses[] = {
        "janeiro", "fevereiro", "mar�o", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };

    // Exibi��o da data e hora nos formatos solicitados
    printf("Formato dia/m�s/ano: %02d/%02d/%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    printf("Formato m�s por extenso: %02d de %s de %d\n", tm.tm_mday, meses[tm.tm_mon], tm.tm_year + 1900);
    printf("Formato hora:minuto: %02d:%02d\n", tm.tm_hour, tm.tm_min);

    return 0;
}

