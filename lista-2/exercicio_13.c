/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 13
 * Enunciado (resumo): Media ponderada de tres provas (pesos 1, 1 e 2).
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    double a,b,c,media;
    scanf("%lf %lf %lf",&a,&b,&c);
    media=(a+b+2*c)/4;
    printf("Media: %.2f\n%s\n",media,media>=60?"Aprovado":"Reprovado");

    return 0;
}
