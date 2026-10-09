/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 33
 * Enunciado (transcrito do PDF):
 * Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.
 */
#include <stdio.h>


int main(void) {
    double lado;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%lf", &lado) != 1) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    double area = lado * lado;
    // Exibicao do resultado.
    printf("Area: %.2f\n", area);
    return 0;
}
