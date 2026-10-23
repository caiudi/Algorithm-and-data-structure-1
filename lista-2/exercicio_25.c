/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 25
 * Enunciado (resumo): Calcule as raizes reais da equacao do segundo grau.
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    double a,b,c,delta;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a==0) {
        puts("Nao e equacao de segundo grau.");

        return 0;
    }
    delta=b*b-4*a*c;
    if(delta<0)puts("Nao existe raiz real.");
    else if(delta==0)printf("Raiz unica: %.4f\n",-b/(2*a));
    else printf("Raizes: %.4f e %.4f\n",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));

    return 0;
}
