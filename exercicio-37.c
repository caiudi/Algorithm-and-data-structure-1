/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 37
 * Enunciado (transcrito do PDF):
 * Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo em
 * vista que o desconto foi de 12%
 */
#include <stdio.h>


int main(void) {
    double preco;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%lf", &preco) != 1) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    double com_desconto = preco * 0.88;
    // Exibicao do resultado.
    printf("Preco com desconto: %.2f\n", com_desconto);
    return 0;
}
