/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 46
 * Enunciado (transcrito do PDF):
 * Faça um programa que leia um número inteiro positivo de três dı́gitos (de 100 a 999).
 * Gere outro número formado pelos dı́gitos invertidos do número lido. Exemplo: NúmeroLido
 * = 123 NúmeroGerado = 321.
 */
#include <stdio.h>


int main(void) {
    int numero;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%d", &numero) != 1) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    if (numero < 100 || numero > 999) { puts("Digite um numero de tres digitos."); return 1; }
    int invertido = (numero % 10) * 100 + ((numero / 10) % 10) * 10 + numero / 100;
    // Exibicao do resultado.
    printf("Invertido: %03d\n", invertido);
    return 0;
}
