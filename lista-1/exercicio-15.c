/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 15
 * Enunciado (transcrito do PDF):
 * Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão é:
 * G = R ∗ 180/π, sendo G o ângulo em graus e R em radianos e π = 3.14.
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
    double resultado = valor * 180.0 / 3.14;
    // Exibicao do resultado.
    printf("Resultado em graus: %.6f\n", resultado);
    return 0;
}
