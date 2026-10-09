/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 47
 * Enunciado (transcrito do PDF):
 * Leia um número inteiro de 4 dı́gitos (de 1000 a 9999) e imprima 1 dı́gito por linha.
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
    if (numero < 1000 || numero > 9999) { puts("Digite um numero de quatro digitos."); return 1; }
    // Exibicao do resultado.
    printf("%d\n%d\n%d\n%d\n", numero/1000, (numero/100)%10, (numero/10)%10, numero%10);
    return 0;
}
