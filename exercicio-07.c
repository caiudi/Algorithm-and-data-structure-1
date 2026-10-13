/*
 * UFU / FACOM - Lista C02 - Exercicio 07
 * ENUNCIADO (extraido do PDF fornecido):
 * Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois
 * números forem iguais, imprima a mensagem Números iguais.
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
    double a,b; scanf("%lf %lf",&a,&b); if(a==b) puts("Numeros iguais"); else printf("Maior: %.2f\n",a>b?a:b);
    return 0;
}
