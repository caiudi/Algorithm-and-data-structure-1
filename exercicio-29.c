/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 29
 * Enunciado (transcrito do PDF):
 * Leia quatro notas, calcule a média aritmética e imprima o resultado.
 */
#include <stdio.h>


int main(void) {
    double a, b, c, d;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%lf %lf %lf %lf", &a, &b, &c, &d) != 4) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    double media = (a+b+c+d)/4.0;
    // Exibicao do resultado.
    printf("Media: %.2f\n", media);
    return 0;
}
