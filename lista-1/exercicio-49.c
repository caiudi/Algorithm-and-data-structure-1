/*
 * UFU / FACOM - Lista 1: Variaveis e expressoes
 * Exercicio 49
 * Enunciado (transcrito do PDF):
 * Faça um programa para leia o horário (hora, minuto e segundo) de inicio e a duração, em
 * segundos, de uma experiência biológica. O programa deve resultar com o novo horário
 * (hora, minuto e segundo) do termino da mesma.
 */
#include <stdio.h>


int main(void) {
    int hora, minuto, segundo, duracao;
    // Leitura dos valores informados pelo usuario.
    printf("Digite os valores solicitados (separados por espaco): ");
    if (scanf("%d %d %d %d", &hora, &minuto, &segundo, &duracao) != 4) {
        puts("Entrada invalida.");
        return 1;
    }
    // Aplicacao da formula ou operacao solicitada.
    if (hora < 0 || hora > 23 || minuto < 0 || minuto > 59 || segundo < 0 || segundo > 59 || duracao < 0) { puts("Horario ou duracao invalida."); return 1; }
    int total = (hora*3600 + minuto*60 + segundo + duracao) % 86400;
    // Exibicao do resultado.
    printf("Termino: %02d:%02d:%02d\n", total/3600, (total%3600)/60, total%60);
    return 0;
}
