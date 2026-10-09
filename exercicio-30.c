/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 30
 * Enunciado (transcrito do PDF):
 * Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente
 * em dólares.
 */
#include <stdio.h>


int main(void) {
    double reais, cotacao;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%lf %lf", &reais, &cotacao) != 2) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    if (cotacao <= 0) { puts("Cotacao invalida."); return 1; }
    double dolares = reais / cotacao;
    // Exibicao do resultado.
    printf("Dolares: %.2f\n", dolares);
    return 0;
}
