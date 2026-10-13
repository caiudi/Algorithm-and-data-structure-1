/*
 * UFU / FACOM - Lista C02 - Exercicio 19
 * ENUNCIADO (extraido do PDF fornecido):
 * Faça um programa para verificar se um determinado número inteiro e divisı́vel por 3 ou
 * 5, mas não simultaneamente pelos dois.
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
    int n; scanf("%d",&n); puts(((n%3==0) != (n%5==0))?"Divisivel por 3 ou 5, exclusivamente":"Nao atende a condicao");
    return 0;
}
