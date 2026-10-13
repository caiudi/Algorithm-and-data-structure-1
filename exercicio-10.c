/*
 * UFU / FACOM - Lista C02 - Exercicio 10
 * ENUNCIADO (extraido do PDF fornecido):
 * Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
 * peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
 * • Homens: (72.7 ∗ h) − 58
 * • Mulheres: (62, 1 ∗ h) − 44, 7
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
    double h; char sexo; scanf("%lf %c",&h,&sexo); if(h<=0) puts("Altura invalida"); else if(sexo=='M'||sexo=='m') printf("Peso ideal: %.2f\n",72.7*h-58); else if(sexo=='F'||sexo=='f') printf("Peso ideal: %.2f\n",62.1*h-44.7); else puts("Sexo invalido");
    return 0;
}
