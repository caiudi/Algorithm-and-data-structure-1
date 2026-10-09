/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 24
 * Enunciado (transcrito do PDF):
 * Leia um valor de área em metros quadrados m2 e apresente-o convertido em acres. A
 * fórmula de conversão é: A = M ∗ 0, 000247, sendo M a área em metros quadrados e A a área
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
    double resultado = valor * 0.000247;
    // Exibicao do resultado.
    printf("Resultado em acres: %.6f\n", resultado);
    return 0;
}
