/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 34
 * Enunciado (resumo): Determine conceito segundo nota e faltas.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    double nota;
    int faltas;
    char conceito;
    scanf("%lf %d",&nota,&faltas);
    if(nota<0||nota>10||faltas<0) {
        puts("Dados invalidos.");

        return 0;
    }
    conceito=nota>=9?'A':nota>=7.5?'B':nota>=5?'C':nota>=4?'D':'E';
    if(faltas>20&&conceito<'E')conceito++;
    printf("Conceito: %c\n",conceito);

    return 0;
}
