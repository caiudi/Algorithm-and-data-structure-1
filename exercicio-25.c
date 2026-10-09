/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 25
 * Enunciado (transcrito do PDF):
 * Leia um valor de área em acres e apresente-o convertido em metros quadrados m2 . A
 * fórmula de conversão é: M = A ∗ 4048, 58, sendo M a área em metros quadrados e A a área
 * em acres.
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
    double resultado = valor * 4048.58;
    // Exibicao do resultado.
    printf("Resultado em metros quadrados: %.6f\n", resultado);
    return 0;
}
