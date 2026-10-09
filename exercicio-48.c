/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 48
 * Enunciado (transcrito do PDF):
 * Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.
 */
#include <stdio.h>


int main(void) {
    int total;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%d", &total) != 1) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    if (total < 0) { puts("Tempo invalido."); return 1; }
    int horas = total / 3600;
    int minutos = (total % 3600) / 60;
    int segundos = total % 60;
    // Exibicao do resultado.
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
    return 0;
}
