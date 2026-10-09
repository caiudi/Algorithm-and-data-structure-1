/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 43
 * Enunciado (transcrito do PDF):
 * Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre: •
 * o total a pagar com desconto de 10%; • o valor de cada parcela, no parcelamento de 3×
 * sem juros; • a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com
 * des- conto) • a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor
 * total)
 */
#include <stdio.h>


int main(void) {
    double total;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%lf", &total) != 1) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    double a_vista = total * 0.90;
    double parcela = total / 3.0;
    double comissao_vista = a_vista * 0.05;
    double comissao_prazo = total * 0.05;
    // Exibicao do resultado.
    printf("A vista: %.2f\nParcela: %.2f\nComissao a vista: %.2f\nComissao a prazo: %.2f\n", a_vista, parcela, comissao_vista, comissao_prazo);
    return 0;
}
