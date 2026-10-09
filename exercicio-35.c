/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 35
 * Enunciado (transcrito do PDF):
 * Sejam a e b os √ catetos de um triângulo, onde a hipotenusa é obtida pela equação:
 * hipotenusa = a2 + b2 . Faça um programa que receba os valores de a e b e calcule o valor
 * da hipotenusa através da equação. Imprima o resultado dessa operação.
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%lf %lf", &a, &b) != 2) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    double hipotenusa = sqrt(a*a + b*b);
    // Exibicao do resultado.
    printf("Hipotenusa: %.2f\n", hipotenusa);
    return 0;
}
