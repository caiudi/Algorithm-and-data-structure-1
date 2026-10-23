/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 05
 * Enunciado (resumo): Verifique se um inteiro e par ou impar.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    int n;
    scanf("%d",&n);
    puts(n%2==0?"Par":"Impar");

    return 0;
}
