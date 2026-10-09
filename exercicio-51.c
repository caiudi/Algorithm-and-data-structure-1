/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 51
 * Enunciado (transcrito do PDF):
 * Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua
 * distância da origem (0, 0).
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    double x, y;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%lf %lf", &x, &y) != 2) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    double distancia = sqrt(x*x + y*y);
    // Exibicao do resultado.
    printf("Distancia da origem: %.4f\n", distancia);
    return 0;
}
