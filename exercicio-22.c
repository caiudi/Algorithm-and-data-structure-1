/*
 * UFU / FACOM - Lista C02 - Exercicio 22
 * ENUNCIADO (extraido do PDF fornecido):
 * Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se
 * aposentar. As condições para aposentadoria são
 * • Ter pelo menos 65 anos,
 * • Ou ter trabalhado pelo menos 30 anos,
 * • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
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
    int idade,anos;scanf("%d %d",&idade,&anos);if(idade<0||anos<0) puts("Valores invalidos");else puts((idade>=65||anos>=30||(idade>=60&&anos>=25))?"Pode aposentar":"Nao pode aposentar");
    return 0;
}
