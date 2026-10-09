/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 40
 * Enunciado (transcrito do PDF):
 * Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite o
 * número de dias trabalhados pelo encanador e imprima a quantia lı́quida que deverá ser
 * paga, sabendo-se que são descontados 8% para imposto de renda.
 */
#include <stdio.h>


int main(void) {
    int dias;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%d", &dias) != 1) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    if (dias < 0) { puts("Dias invalidos."); return 1; }
    double liquido = dias * 30.0 * 0.92;
    // Exibicao do resultado.
    printf("Pagamento liquido: %.2f\n", liquido);
    return 0;
}
