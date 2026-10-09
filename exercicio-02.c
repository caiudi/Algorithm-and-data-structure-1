/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 02
 * Enunciado (transcrito do PDF):
 * Faça um programa que leia um número real e o imprima.
 */
#include <stdio.h>


int main(void) {
    double numero;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%lf", &numero) != 1) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    
    // Exibicao do resultado.
    printf("Numero: %.2f\n", numero);
    return 0;
}
