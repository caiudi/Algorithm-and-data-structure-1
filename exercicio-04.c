/*
 * UFU / FACOM - Lista C02 - Exercicio 04
 * ENUNCIADO (extraido do PDF fornecido):
 * Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
 * • O número digitado ao quadrado
 * • A raiz quadrada do número digitado
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
    double n; scanf("%lf",&n); if(n>0) printf("Quadrado: %.4f\nRaiz: %.4f\n",n*n,sqrt(n)); else puts("Numero nao positivo");
    return 0;
}
