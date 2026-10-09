/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 13
 * Enunciado (transcrito do PDF):
 * Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de K
 * conversão é: M = 1,61 , sendo K a distância em quilômetros e M em milhas.
 */
#include <stdio.h>


int main(void) {
    double valor;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%lf", &valor) != 1) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    double resultado = valor / 1.61;
    // Exibicao do resultado.
    printf("Resultado em milhas: %.6f\n", resultado);
    return 0;
}
