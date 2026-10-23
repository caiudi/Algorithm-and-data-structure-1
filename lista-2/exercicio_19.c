/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 19
 * Enunciado (resumo): Verifique divisibilidade por 3 ou 5, mas nao ambos.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    int n;
    scanf("%d",&n);
    puts(((n%3==0)!=(n%5==0))?"Atende a condicao.":"Nao atende a condicao.");

    return 0;
}
