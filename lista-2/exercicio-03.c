/*
 * UFU / FACOM - Lista C02 - Exercicio 03
 * ENUNCIADO (extraido do PDF fornecido):
 * Leia um numero real. Se o número for positivo imprima a raiz quadrada. Do contrário,
 * imprima o numero ao quadrado.
 *
 * RESOLUCAO: usa comandos condicionais e imprime o resultado.
 * ENTRADA: forneca os valores solicitados, separados por espaco ou Enter.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main(void) {
    // Leitura, processamento e exibicao do resultado.
    double n; scanf("%lf",&n); if(n>0) printf("Raiz: %.4f\n",sqrt(n)); else printf("Quadrado: %.4f\n",n*n);
    return 0;
}
