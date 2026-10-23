/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 14
 * Enunciado (resumo): Media ponderada (pesos 2, 3 e 5) e situacao.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    double a,b,c,m;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a<0||a>10||b<0||b>10||c<0||c>10) {
        puts("Notas invalidas.");

        return 0;
    }
    m=(2*a+3*b+5*c)/10;
    printf("Media: %.2f\n",m);
    puts(m<3?"Reprovado":m<5?"Recuperacao":"Aprovado");

    return 0;
}
