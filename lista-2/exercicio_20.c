/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 20
 * Enunciado (resumo): Valide e classifique um triangulo.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a<=0||b<=0||c<=0||a>=b+c||b>=a+c||c>=a+b) puts("Nao forma triangulo.");
    else if(a==b&&b==c) puts("Equilatero");
    else if(a==b||a==c||b==c) puts("Isosceles");
    else puts("Escaleno");

    return 0;
}
