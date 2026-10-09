/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 39
 * Enunciado (transcrito do PDF):
 * A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso. Sendo
 * que da quantia total: • O primeiro ganhador receberá 46%; • O segundo receberá 32%; • O
 * terceiro receberá o restante; Calcule e imprima a quantia ganha por cada um dos
 * ganhadores.
 */
#include <stdio.h>


int main(void) {
    
    // Aplicacao da formula ou operacao solicitada.
    double total = 780000.0;
    double primeiro = total * 0.46;
    double segundo = total * 0.32;
    double terceiro = total - primeiro - segundo;
    // Exibicao do resultado.
    printf("Primeiro: %.2f; Segundo: %.2f; Terceiro: %.2f\n", primeiro, segundo, terceiro);
    return 0;
}
