/*
 * UFU / FACOM - Lista C02 - Exercicio 18
 * ENUNCIADO (extraido do PDF fornecido):
 * Faça um programa que mostre ao usuário um menu com 4 opções de operações ma-
 * temáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu pro-
 * grama então pede dois valores numéricos e realiza a operação, mostrando o resultado e
 * saindo.
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
    int op; double a,b; puts("1-Soma 2-Subtracao 3-Multiplicacao 4-Divisao"); scanf("%d %lf %lf",&op,&a,&b); switch(op){case 1:printf("%.2f\n",a+b);break;case 2:printf("%.2f\n",a-b);break;case 3:printf("%.2f\n",a*b);break;case 4:if(b==0) puts("Divisao por zero");else printf("%.2f\n",a/b);break;default:puts("Opcao invalida");}
    return 0;
}
