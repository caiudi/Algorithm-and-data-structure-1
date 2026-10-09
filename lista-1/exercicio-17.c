/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 17
 * Enunciado (transcrito do PDF):
 * Leia um valor de comprimento em centı́metros e apresente-o convertido em polegadas. C A
 * fórmula de conversão é: P = 2,54 , sendo C o comprimento em centı́metros e P o
 * comprimento em polegadas.
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
    double resultado = valor / 2.54;
    // Exibicao do resultado.
    printf("Resultado em polegadas: %.6f\n", resultado);
    return 0;
}
