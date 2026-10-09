/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 31
 * Enunciado (transcrito do PDF):
 * Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
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
    printf("Antecessor: %d; Sucessor: %d\n", numero-1, numero+1);
    return 0;
}
