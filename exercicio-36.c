/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 36
 * Enunciado (transcrito do PDF):
 * Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume
 * de um cilindro circular é calculado por meio da seguinte fórmula: V = π ∗ raio2 ∗
 * altura, onde π = 3.141592.
 */
#include <stdio.h>


int main(void) {
    double altura, raio;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%lf %lf", &altura, &raio) != 2) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    double volume = 3.141592 * raio * raio * altura;
    // Exibicao do resultado.
    printf("Volume: %.2f\n", volume);
    return 0;
}
