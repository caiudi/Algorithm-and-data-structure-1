/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 27
 * Enunciado (transcrito do PDF):
 * Leia um valor de área em hectares e apresente-o convertido em metros quadrados m2 . A
 * fórmula de conversão é: M = H ∗ 10000, sendo M a área em metros quadrados e H a área em
 * hectares.
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
    double resultado = valor * 10000.0;
    // Exibicao do resultado.
    printf("Resultado em metros quadrados: %.6f\n", resultado);
    return 0;
}
