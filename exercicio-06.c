/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 06
 * Enunciado (transcrito do PDF):
 * Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A
 * fórmula de conversão é: F = C ∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a
 * temperatura em Celsius.
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
    double resultado = valor * 9.0 / 5.0 + 32.0;
    // Exibicao do resultado.
    printf("Resultado em Fahrenheit: %.6f\n", resultado);
    return 0;
}
