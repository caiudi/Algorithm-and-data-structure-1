/*
 * UFU / FACOM - Lista C02 - Exercicio 11
 * ENUNCIADO (extraido do PDF fornecido):
 * Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a
 * soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor
 * 8 (2 + 5 + 1). Se o número lido não for maior do que zero, o programa terminará com a
 * mensagem “Número inválido”.
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
    int n,soma=0; scanf("%d",&n); if(n<=0){puts("Numero invalido");return 0;} while(n){soma+=n%10;n/=10;} printf("Soma: %d\n",soma);
    return 0;
}
