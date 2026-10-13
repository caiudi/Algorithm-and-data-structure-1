/*
 * UFU / FACOM - Lista C02 - Exercicio 15
 * ENUNCIADO (extraido do PDF fornecido):
 * Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia
 * da semana correspondente a este numero. Isto é, domingo se 1, segunda-feira se 2, e
 * assim por diante.
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
    int n; scanf("%d",&n); const char *dias[]={"","Domingo","Segunda-feira","Terca-feira","Quarta-feira","Quinta-feira","Sexta-feira","Sabado"}; switch(n){case 1:case 2:case 3:case 4:case 5:case 6:case 7:puts(dias[n]);break;default:puts("Dia invalido");}
    return 0;
}
