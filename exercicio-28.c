/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 28
 * Enunciado (transcrito do PDF):
 * Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três
 * valores lidos.
 */
#include <stdio.h>


int main(void) {
    double a, b, c;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    double soma = a*a + b*b + c*c;
    // Exibicao do resultado.
    printf("Soma dos quadrados: %.2f\n", soma);
    return 0;
}
