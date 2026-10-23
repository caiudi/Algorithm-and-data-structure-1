/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 15
 * Enunciado (resumo): Mostre dia da semana usando switch.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    int n;
    scanf("%d",&n);
    switch(n) {
        case 1:puts("Domingo");
        break;
        case 2:puts("Segunda-feira");
        break;
        case 3:puts("Terca-feira");
        break;
        case 4:puts("Quarta-feira");
        break;
        case 5:puts("Quinta-feira");
        break;
        case 6:puts("Sexta-feira");
        break;
        case 7:puts("Sabado");
        break;
        default:puts("Dia invalido.");
    }
    return 0;
}
