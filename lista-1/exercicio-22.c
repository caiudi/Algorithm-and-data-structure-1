/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 22
 * Enunciado (transcrito do PDF):
 * Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula de
 * conversão é: M = 0, 91 ∗ J, sendo J o comprimento em jardas e M o comprimento em metros.
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
    double resultado = valor * 0.91;
    // Exibicao do resultado.
    printf("Resultado em metros: %.6f\n", resultado);
    return 0;
}
