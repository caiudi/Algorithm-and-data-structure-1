/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 21
 * Enunciado (transcrito do PDF):
 * Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula de
 * conversão é: K = L ∗ 0, 45, sendo K a massa em quilogramas e L a massa em libras.
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
    double resultado = valor * 0.45;
    // Exibicao do resultado.
    printf("Resultado em quilogramas: %.6f\n", resultado);
    return 0;
}
