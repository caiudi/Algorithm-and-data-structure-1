/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 42
 * Enunciado (transcrito do PDF):
 * Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-
 * se que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele
 * paga 7% de imposto sobre o salário-base.
 */
#include <stdio.h>


int main(void) {
    double salario_base;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%lf", &salario_base) != 1) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    double salario_final = salario_base * (1.0 + 0.05 - 0.07);
    // Exibicao do resultado.
    printf("Salario final: %.2f\n", salario_final);
    return 0;
}
