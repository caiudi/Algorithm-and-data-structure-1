/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 03
 * Enunciado (resumo): Positivo: raiz quadrada; caso contrario: quadrado.
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    double n;
    scanf("%lf",&n);
    if(n>0) printf("Raiz: %.2f\n",sqrt(n));
    else printf("Quadrado: %.2f\n",n*n);

    return 0;
}
