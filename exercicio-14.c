/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 14
 * Enunciado (transcrito do PDF):
 * Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é:
 * R = G ∗ π/180, sendo G o ângulo em graus e R em radianos e π = 3.14.
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
    double resultado = valor * 3.14 / 180.0;
    // Exibicao do resultado.
    printf("Resultado em radianos: %.6f\n", resultado);
    return 0;
}
