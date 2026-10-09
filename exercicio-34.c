/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 34
 * Enunciado (transcrito do PDF):
 * Leia o valor do raio de um cı́rculo e calcule e imprima a área do cı́rculo
 * correspondente. A área do cı́rculo é π ∗ raio2 , considere π = 3.141592.
 */
#include <stdio.h>


int main(void) {
    double raio;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%lf", &raio) != 1) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    double area = 3.141592 * raio * raio;
    // Exibicao do resultado.
    printf("Area: %.2f\n", area);
    return 0;
}
