/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 32
 * Enunciado (transcrito do PDF):
 * Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de
 * seu dobro.
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
    int resultado = (3*numero + 1) + (2*numero - 1);
    // Exibicao do resultado.
    printf("Resultado: %d\n", resultado);
    return 0;
}
