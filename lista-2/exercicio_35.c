/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 35
 * Enunciado (resumo): Valide dia, mes e ano de uma data.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    int d,m,a,dias;
    scanf("%d %d %d",&d,&m,&a);
    if(a<=0||m<1||m>12) {
        puts("Data invalida.");

        return 0;
    }
    dias=(m==2)?(a%400==0||(a%4==0&&a%100!=0)?29:28):((m==4||m==6||m==9||m==11)?30:31);
    puts(d>=1&&d<=dias?"Data valida.":"Data invalida.");

    return 0;
}
