/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 23
 * Enunciado (resumo): Verifique se um ano e bissexto.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    int ano;
    scanf("%d",&ano);
    if(ano<=0)puts("Ano invalido.");
    else puts(ano%400==0||(ano%4==0&&ano%100!=0)?"Bissexto":"Nao bissexto");

    return 0;
}
