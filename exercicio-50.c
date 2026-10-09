/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 50
 * Enunciado (transcrito do PDF):
 * Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua
 * idade e do ano atual.
 */
#include <stdio.h>


int main(void) {
    int idade, ano_atual;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%d %d", &idade, &ano_atual) != 2) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    if (idade < 0) { puts("Idade invalida."); return 1; }
    int nascimento = ano_atual - idade;
    // Exibicao do resultado.
    printf("Ano de nascimento estimado: %d\n", nascimento);
    return 0;
}
