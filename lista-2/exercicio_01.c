/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 01
 * Enunciado (resumo): Receba dois numeros e mostre o maior.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    double a,b;
    scanf("%lf %lf",&a,&b);
    if(a>b) printf("Maior: %.2f\n",a);
    else if(b>a) printf("Maior: %.2f\n",b);
    else puts("Numeros iguais.");

    return 0;
}
