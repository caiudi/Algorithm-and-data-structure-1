/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 38
 * Enunciado (resumo): Valide data de nascimento considerando ano maximo 2008.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    const int ANO_ATUAL=2008;
    int d,m,a,dias;
    scanf("%d %d %d",&d,&m,&a);
    if(a<1||a>ANO_ATUAL||m<1||m>12) {
        puts("Data invalida.");

        return 0;
    }
    dias=m==2?(a%400==0||(a%4==0&&a%100!=0)?29:28):(m==4||m==6||m==9||m==11?30:31);
    puts(d>=1&&d<=dias?"Data valida.":"Data invalida.");

    return 0;
}
