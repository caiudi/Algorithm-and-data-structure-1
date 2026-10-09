/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 26
 * Enunciado (transcrito do PDF):
 * Leia um valor de área em metros quadrados m2 e apresente-o convertido em hectares. A
 * fórmula de conversão é: H = M ∗ 0, 0001, sendo M a área em metros quadrados e H a área
 * em hectares.
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
    double resultado = valor * 0.0001;
    // Exibicao do resultado.
    printf("Resultado em hectares: %.6f\n", resultado);
    return 0;
}
