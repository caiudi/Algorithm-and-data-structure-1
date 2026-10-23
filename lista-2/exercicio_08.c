/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 08
 * Enunciado (resumo): Valide duas notas e calcule a media.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    double a,b;
    scanf("%lf %lf",&a,&b);
    if(a<0||a>10||b<0||b>10) puts("Nota invalida.");
    else printf("Media: %.2f\n",(a+b)/2);

    return 0;
}
