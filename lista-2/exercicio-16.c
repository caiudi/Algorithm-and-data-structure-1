/*
 * UFU / FACOM - Lista C02 - Exercicio 16
 * ENUNCIADO (extraido do PDF fornecido):
 * Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mês
 * correspondente a este numero. Isto é, janeiro se 1, fevereiro se 2, e assim por diante.
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
    int n; scanf("%d",&n); const char *meses[]={"","Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"}; switch(n){case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 12:puts(meses[n]);break;default:puts("Mes invalido");}
    return 0;
}
