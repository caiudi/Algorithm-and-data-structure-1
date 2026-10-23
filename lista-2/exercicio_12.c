/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 12
 * Enunciado (resumo): Calcule o logaritmo natural de um numero positivo.
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    int n;
    scanf("%d",&n);
    if(n<=0) puts("Numero invalido.");
    else printf("Logaritmo natural: %.4f\n",log(n));

    return 0;
}
