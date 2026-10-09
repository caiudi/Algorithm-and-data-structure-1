/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 20
 * Enunciado (transcrito do PDF):
 * Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula K de
 * conversão é: L = 0,45 , sendo K a massa em quilogramas e L a massa em libras.
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
    double resultado = valor / 0.45;
    // Exibicao do resultado.
    printf("Resultado em libras: %.6f\n", resultado);
    return 0;
}
