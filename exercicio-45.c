/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 45
 * Enunciado (transcrito do PDF):
 * Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela
 * ASCII para resolver o problema.
 */
#include <stdio.h>


int main(void) {
    char letra;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf(" %c", &letra) != 1) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    if (letra >= 'A' && letra <= 'Z') letra = letra + ('a' - 'A');
    // Exibicao do resultado.
    printf("Minuscula: %c\n", letra);
    return 0;
}
