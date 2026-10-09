/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 38
 * Enunciado (transcrito do PDF):
 * Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que
 * ele recebeu um aumento de 25%.
 */
#include <stdio.h>


int main(void) {
    double salario;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%lf", &salario) != 1) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    double novo_salario = salario * 1.25;
    // Exibicao do resultado.
    printf("Novo salario: %.2f\n", novo_salario);
    return 0;
}
