/*
 * UFU / FACOM - Lista C02 - Exercicio 35
 * ENUNCIADO (extraido do PDF fornecido):
 * Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12,
 * e se o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28
 * dias em anos não bissextos.
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
    int d,m,a;scanf("%d %d %d",&d,&m,&a);int dias[]={0,31,28,31,30,31,30,31,31,30,31,30,31};if(a<=0||m<1||m>12){puts("Data invalida");return 0;}if(m==2&&(a%400==0||(a%4==0&&a%100!=0)))dias[2]=29;puts(d>=1&&d<=dias[m]?"Data valida":"Data invalida");
    return 0;
}
