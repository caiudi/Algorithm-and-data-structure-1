/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 18
 * Enunciado (transcrito do PDF):
 * Leia um valor de volume em metros cúbicos m3 e apresente-o convertido em litros. A
 * fórmula de conversão é: L = 1000 ∗ M , sendo L o volume em litros e M o volume em metros
 * cúbicos.
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
    double resultado = valor * 1000.0;
    // Exibicao do resultado.
    printf("Resultado em litros: %.6f\n", resultado);
    return 0;
}
