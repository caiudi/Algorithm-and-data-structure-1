/*
 * UFU / FACOM - Lista C02 - Exercicio 01
 * ENUNCIADO (extraido do PDF fornecido):
 * Faça um programa que receba dois números e mostre qual deles é o maior.
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
    double a,b; scanf("%lf %lf",&a,&b); if(a>b) printf("Maior: %.2f\n",a); else if(b>a) printf("Maior: %.2f\n",b); else puts("Numeros iguais");
    return 0;
}
