/*
 * UFU / FACOM - Lista C02 - Exercicio 30
 * ENUNCIADO (extraido do PDF fornecido):
 * Faça um programa que receba três números e mostre-os em ordem crescente.
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
    double a,b,c,t;scanf("%lf %lf %lf",&a,&b,&c);if(a>b){t=a;a=b;b=t;}if(a>c){t=a;a=c;c=t;}if(b>c){t=b;b=c;c=t;}printf("%.2f %.2f %.2f\n",a,b,c);
    return 0;
}
