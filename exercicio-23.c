/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 23
 * Enunciado (transcrito do PDF):
 * Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula M
 * de conversão é: J = 0,91 , sendo J o comprimento em jardas e M o comprimento em metros.
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
    double resultado = valor / 0.91;
    // Exibicao do resultado.
    printf("Resultado em jardas: %.6f\n", resultado);
    return 0;
}
