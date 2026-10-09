/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 41
 * Enunciado (transcrito do PDF):
 * Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas
 * trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o
 * valor calculado.
 */
#include <stdio.h>


int main(void) {
    double valor_hora, horas;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%lf %lf", &valor_hora, &horas) != 2) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    double pagamento = valor_hora * horas * 1.10;
    // Exibicao do resultado.
    printf("Pagamento: %.2f\n", pagamento);
    return 0;
}
