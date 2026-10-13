/*
 * UFU / FACOM - Lista C02 - Exercicio 27
 * ENUNCIADO (extraido do PDF fornecido):
 * Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
 * seguintes categorias:
 * Categoria     Idade
 * Infantil A    5a7
 * Infantil B    8 a 10
 * Juvenil A     11 a 13
 * Juvenil B     14 a 17
 * Sênior       maiores de 18 anos
 *
 * RESOLUCAO: usa comandos condicionais e imprime o resultado.
 * OBSERVACAO: A tabela indica Sênior para maiores de 18, deixando 18 sem categoria. Foi adotado 18 ou mais.
 * ENTRADA: forneca os valores solicitados, separados por espaco ou Enter.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main(void) {
    // Leitura, processamento e exibicao do resultado.
    int idade;scanf("%d",&idade);if(idade>=5&&idade<=7)puts("Infantil A");else if(idade<=10&&idade>=8)puts("Infantil B");else if(idade<=13&&idade>=11)puts("Juvenil A");else if(idade<=17&&idade>=14)puts("Juvenil B");else if(idade>=18)puts("Senior");else puts("Sem categoria");
    return 0;
}
