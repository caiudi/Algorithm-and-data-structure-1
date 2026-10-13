/*
 * UFU / FACOM - Lista C02 - Exercicio 36
 * ENUNCIADO (extraido do PDF fornecido):
 * Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser
 * paga ao vendedor. Para calcular a comissão, considere a tabela abaixo:
 * Venda mensal                                                             Comissão
 * Maior ou igual a R$100.000,00                                    R$700,00 + 16% das vendas
 * Menor que R$100.000,00 e maior ou igual a R$80.000,00            R$650,00 +14% das vendas
 * Menor que R$80.000,00 e maior ou igual a R$60.000,00             R$600,00 +14% das vendas
 * Menor que R$60.000,00 e maior ou igual a R$40.000,00             R$550,00 +14% das vendas
 * Menor que R$40.000,00 e maior ou igual a R$20.000,00             R$500,00 +14% das vendas
 * Menor que R$20.000,00                                            R$400,00 +14% das vendas
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
    double v,base,taxa;scanf("%lf",&v);if(v<0){puts("Venda invalida");return 0;}if(v>=100000){base=700;taxa=.16;}else if(v>=80000){base=650;taxa=.14;}else if(v>=60000){base=600;taxa=.14;}else if(v>=40000){base=550;taxa=.14;}else if(v>=20000){base=500;taxa=.14;}else{base=400;taxa=.14;}printf("Comissao: R$ %.2f\n",base+v*taxa);
    return 0;
}
