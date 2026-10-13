/*
 * UFU / FACOM - Lista C02 - Exercicio 02
 * ENUNCIADO (extraido do PDF fornecido):
 * Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz
 * quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o
 * número é inválido.
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
    double n; scanf("%lf",&n); if(n<0) puts("Numero invalido"); else printf("Raiz: %.4f\n",sqrt(n));
    return 0;
}
