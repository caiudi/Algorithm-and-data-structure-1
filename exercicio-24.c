/*
 * UFU / FACOM - Lista C02 - Exercicio 24
 * ENUNCIADO (extraido do PDF fornecido):
 * Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
 * possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS
 * 8%). Faça um programa em que o usuário entre com o valor e o estado destino do
 * produto e o programa retorne o preço final do produto acrescido do imposto do estado
 * em que ele será vendido. Se o estado digitado não for válido, mostrar uma mensagem
 * de erro.
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
    double valor,taxa;char uf[3];scanf("%lf %2s",&valor,uf);if(valor<0){puts("Valor invalido");return 0;}if(strcmp(uf,"MG")==0)taxa=.07;else if(strcmp(uf,"SP")==0)taxa=.12;else if(strcmp(uf,"RJ")==0)taxa=.15;else if(strcmp(uf,"MS")==0)taxa=.08;else{puts("Estado invalido (use MG, SP, RJ ou MS)");return 0;}printf("Preco final: %.2f\n",valor*(1+taxa));
    return 0;
}
