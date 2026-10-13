/*
 * UFU / FACOM - Lista C02 - Exercicio 38
 * ENUNCIADO (extraido do PDF fornecido):
 * Leia uma data de nascimento de uma pessoa fornecida através de três números inteiros:
 * Dia, Mês e Ano. Teste a validade desta data para saber se esta é uma data válida. Teste
 * se o dia fornecido é um dia válido: dia > 0, dia ≤ 28 para o mês de fevereiro (29 se o
 * ano for bissexto), dia ≤ 30 em abril, junho, setembro e novembro, dia ≤ 31 nos outros
 * meses. Teste a validade do mês: mês > 0 e mês < 13. Teste a validade do ano: ano ≤
 * ano atual (use uma constante definida com o valor igual a 2008). Imprimir: “data válida”
 * ou “data inválida” no final da execução do programa.
 *
 * RESOLUCAO: usa comandos condicionais e imprime o resultado.
 * OBSERVACAO: O ano máximo foi mantido como 2008, conforme pedido explícito do PDF.
 * ENTRADA: forneca os valores solicitados, separados por espaco ou Enter.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main(void) {
    // Leitura, processamento e exibicao do resultado.
    const int ANO_ATUAL=2008;int d,m,a;scanf("%d %d %d",&d,&m,&a);int dias[]={0,31,28,31,30,31,30,31,31,30,31,30,31};if(a<=0||a>ANO_ATUAL||m<1||m>12){puts("Data invalida");return 0;}if(m==2&&(a%400==0||(a%4==0&&a%100!=0)))dias[2]=29;puts(d>=1&&d<=dias[m]?"Data valida":"Data invalida");
    return 0;
}
