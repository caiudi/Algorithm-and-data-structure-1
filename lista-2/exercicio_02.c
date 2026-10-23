/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 02
 * Enunciado (resumo): Calcule a raiz quadrada de um numero nao negativo.
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    double n;
    scanf("%lf",&n);
    if(n<0) puts("Numero invalido.");
    else printf("Raiz: %.2f\n",sqrt(n));

    return 0;
}
