/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 52
 * Enunciado (transcrito do PDF):
 * Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido pro-
 * porcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que
 * leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um
 * ganharia do prêmio com base no valor investido.
 */
#include <stdio.h>


int main(void) {
    double a, b, c, premio;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%lf %lf %lf %lf", &a, &b, &c, &premio) != 4) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    double total = a + b + c;
    if (a < 0 || b < 0 || c < 0 || total <= 0 || premio < 0) { puts("Valores invalidos."); return 1; }
    // Exibicao do resultado.
    printf("Amigo 1: %.2f\nAmigo 2: %.2f\nAmigo 3: %.2f\n", premio*a/total, premio*b/total, premio*c/total);
    return 0;
}
