/*
 * UFU / FACOM - Lista C02 - Exercicio 05
 * ENUNCIADO (extraido do PDF fornecido):
 * Faça um programa que receba um número inteiro e verifique se este número é par ou
 * ı́mpar.
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
    int n; scanf("%d",&n); puts(n%2==0?"Par":"Impar");
    return 0;
}
