/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 07
 * Enunciado (transcrito do PDF):
 * Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. A
 * fórmula de conversão é: C = 5.0 ∗ (F − 32.0)/9.0, sendo C a temperatura em Celsius e F a
 * temperatura em Fahrenheit.
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
    double resultado = 5.0 * (valor - 32.0) / 9.0;
    // Exibicao do resultado.
    printf("Resultado em Celsius: %.6f\n", resultado);
    return 0;
}
