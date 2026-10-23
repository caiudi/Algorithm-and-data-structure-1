/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 07
 * Enunciado (resumo): Mostre o maior de dois numeros ou numeros iguais.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    double a,b;
    scanf("%lf %lf",&a,&b);
    if(a==b) puts("Numeros iguais.");
    else printf("Maior: %.2f\n",a>b?a:b);

    return 0;
}
