/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 19
 * Enunciado (transcrito do PDF):
 * Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m3 . A L
 * fórmula de conversão é: M = 1000 , sendo L o volume em litros e M o volume em metros
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
    double resultado = valor / 1000.0;
    // Exibicao do resultado.
    printf("Resultado em metros cubicos: %.6f\n", resultado);
    return 0;
}
