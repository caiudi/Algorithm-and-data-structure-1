/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 03
 * Enunciado (transcrito do PDF):
 * Peça ao usuário para digitar três valores inteiros e imprima a soma deles.
 */
#include <stdio.h>


int main(void) {
    int a, b, c;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    int soma = a + b + c;
    // Exibicao do resultado.
    printf("Soma: %d\n", soma);
    return 0;
}
