/*
 * UFU / FACOM - Lista C02 - Exercicio 12
 * ENUNCIADO (extraido do PDF fornecido):
 * Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número
 * inválido”. Se o número for positivo, calcular o logaritmo deste numero.
 *
 * RESOLUCAO: usa comandos condicionais e imprime o resultado.
 * OBSERVACAO: O enunciado não especifica a base do logaritmo; foi adotado o logaritmo natural.
 * ENTRADA: forneca os valores solicitados, separados por espaco ou Enter.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main(void) {
    // Leitura, processamento e exibicao do resultado.
    int n; scanf("%d",&n); if(n<=0) puts("Numero invalido: logaritmo requer n > 0"); else printf("Logaritmo natural: %.4f\n",log(n));
    return 0;
}
