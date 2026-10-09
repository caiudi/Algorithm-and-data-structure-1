/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 10
 * Enunciado (transcrito do PDF):
 * Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s
 * (metros por segundo). A fórmula de conversão é: M = K/3.6, sendo K a velocidade em km/h
 * e M em m/s.
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
    double resultado = valor / 3.6;
    // Exibicao do resultado.
    printf("Resultado em m/s: %.6f\n", resultado);
    return 0;
}
