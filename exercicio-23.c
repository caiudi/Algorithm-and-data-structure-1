/*
 * UFU / FACOM - Lista C02 - Exercicio 23
 * ENUNCIADO (extraido do PDF fornecido):
 * Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se
 * for divisı́vel por 400 ou se for divisı́vel por 4 e não for divisı́vel por 100. Por exemplo:
 * 1988, 1992, 1996
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
    int ano;scanf("%d",&ano);if(ano<=0) puts("Ano invalido");else puts((ano%400==0||(ano%4==0&&ano%100!=0))?"Bissexto":"Nao bissexto");
    return 0;
}
