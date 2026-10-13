/*
 * UFU / FACOM - Lista C02 - Exercicio 31
 * ENUNCIADO (extraido do PDF fornecido):
 * Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela
 * a seguir, verifique e mostra qual a classificação dessa pessoa.
 * Altura                                        Peso
 * Até 60   Entre 60 e 90 (Inclusive)   Acima de 90
 * Menor que 1,20             A                 D                    G
 * De 1,20 a 1,70             B                 E                    H
 * Maior que 1,70             C                 F                     I
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
    double altura,peso;scanf("%lf %lf",&altura,&peso);if(altura<=0||peso<=0){puts("Valores invalidos");return 0;}int linha=altura<1.20?0:altura<=1.70?1:2;int coluna=peso<=60?0:peso<=90?1:2;char tabela[3][3]={{'A','D','G'},{'B','E','H'},{'C','F','I'}};printf("Classificacao: %c\n",tabela[linha][coluna]);
    return 0;
}
