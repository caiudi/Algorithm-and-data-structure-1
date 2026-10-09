/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 09
 * Enunciado (transcrito do PDF):
 * Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
 * fórmula de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a
 * temperatura em Kelvin.
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
    double resultado = valor + 273.15;
    // Exibicao do resultado.
    printf("Resultado em Kelvin: %.6f\n", resultado);
    return 0;
}
