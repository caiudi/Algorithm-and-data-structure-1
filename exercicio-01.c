/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 01
 * Enunciado (transcrito do PDF):
 * Faça um programa que leia um número inteiro e o imprima.
 */
#include <stdio.h>


int main(void) {
    int numero;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%d", &numero) != 1) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    
    // Exibicao do resultado.
    printf("Numero: %d\n", numero);
    return 0;
}
