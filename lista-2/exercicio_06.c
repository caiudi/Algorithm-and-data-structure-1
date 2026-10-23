/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 06
 * Enunciado (resumo): Mostre o maior de dois inteiros e a diferenca.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Maior: %d\nDiferenca: %d\n",a>b?a:b,abs(a-b));

    return 0;
}
