/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 44
 * Enunciado (transcrito do PDF):
 * Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo
 * a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu
 * objetivo.
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    double altura_degrau, altura_desejada;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%lf %lf", &altura_degrau, &altura_desejada) != 2) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    if (altura_degrau <= 0 || altura_desejada < 0) { puts("Alturas invalidas."); return 1; }
    int degraus = (int)ceil(altura_desejada / altura_degrau);
    // Exibicao do resultado.
    printf("Degraus necessarios: %d\n", degraus);
    return 0;
}
