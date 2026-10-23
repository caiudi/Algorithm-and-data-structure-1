/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 24
 * Enunciado (resumo): Calcule preco final com imposto por estado.
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    double valor,taxa;
    char uf[3];
    scanf("%lf %2s",&valor,uf);
    if(valor<0) {
        puts("Valor invalido.");

        return 0;
    }
    if(strcmp(uf,"MG")==0)taxa=.07;
    else if(strcmp(uf,"SP")==0)taxa=.12;
    else if(strcmp(uf,"RJ")==0)taxa=.15;
    else if(strcmp(uf,"MS")==0)taxa=.08;
    else {
        puts("Estado invalido.");

        return 0;
    }
    printf("Preco final: R$ %.2f\n",valor*(1+taxa));

    return 0;
}
