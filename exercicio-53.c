/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 53
 * Enunciado (transcrito do PDF):
 * Faça um programa para ler as dimensões de um terreno (comprimento c e largura l), bem
 * como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno com
 * tela.
 */
#include <stdio.h>


int main(void) {
    double comprimento, largura, preco_metro;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%lf %lf %lf", &comprimento, &largura, &preco_metro) != 3) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    double perimetro = 2.0 * (comprimento + largura);
    double custo = perimetro * preco_metro;
    // Exibicao do resultado.
    printf("Custo da cerca: %.2f\n", custo);
    return 0;
}
