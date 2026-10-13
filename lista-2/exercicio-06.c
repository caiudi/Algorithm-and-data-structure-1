/*
 * UFU / FACOM - Lista C02 - Exercicio 06
 * ENUNCIADO (extraido do PDF fornecido):
 * Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles,
 * assim como a diferença existente entre ambos.
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
    int a,b; scanf("%d %d",&a,&b); printf("Maior: %d\nDiferenca: %lld\n",a>b?a:b,llabs((long long)a-b));
    return 0;
}
