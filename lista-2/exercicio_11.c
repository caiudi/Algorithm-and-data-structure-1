/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 11
 * Enunciado (resumo): Some os algarismos de um inteiro positivo.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    int n,soma=0;
    scanf("%d",&n);
    if(n<=0) {
        puts("Numero invalido.");

        return 0;
    }
    while(n>0) {
        soma+=n%10;
        n/=10;
    }
    printf("Soma: %d\n",soma);

    return 0;
}
