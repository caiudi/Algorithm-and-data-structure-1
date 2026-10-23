/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 04
 * Enunciado (resumo): Se positivo, calcule quadrado e raiz quadrada.
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    double n;
    scanf("%lf",&n);
    if(n>0) printf("Quadrado: %.2f\nRaiz: %.2f\n",n*n,sqrt(n));
    else puts("Numero nao positivo.");

    return 0;
}
