/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 05
 * Enunciado (transcrito do PDF):
 * Leia um número real e imprima a quinta parte deste número.
 */
#include <stdio.h>


int main(void) {
    double numero;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%lf", &numero) != 1) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    double resultado = numero / 5.0;
    // Exibicao do resultado.
    printf("Quinta parte: %.2f\n", resultado);
    return 0;
}
