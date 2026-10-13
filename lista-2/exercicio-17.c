/*
 * UFU / FACOM - Lista C02 - Exercicio 17
 * ENUNCIADO (extraido do PDF fornecido):
 * Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
 * (basemaior + basemenor) ∗ altura
 * A=
 * Lembre-se a base maior e a base menor devem ser números maiores que zero.
 *
 * RESOLUCAO: usa comandos condicionais e imprime o resultado.
 * ENTRADA: forneca os valores solicitados, separados por espaco ou Enter.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main(void) {
    // Leitura, processamento e exibicao do resultado.
    double maior,menor,h; scanf("%lf %lf %lf",&maior,&menor,&h); if(maior<=0||menor<=0||h<=0||maior<menor) puts("Dimensoes invalidas"); else printf("Area: %.2f\n",(maior+menor)*h/2);
    return 0;
}
