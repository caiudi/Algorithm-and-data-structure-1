/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 16
 * Enunciado (resumo): Mostre mes correspondente usando switch.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    int n;
    scanf("%d",&n);
    switch(n) {
        case 1:puts("Janeiro");
        break;
        case 2:puts("Fevereiro");
        break;
        case 3:puts("Marco");
        break;
        case 4:puts("Abril");
        break;
        case 5:puts("Maio");
        break;
        case 6:puts("Junho");
        break;
        case 7:puts("Julho");
        break;
        case 8:puts("Agosto");
        break;
        case 9:puts("Setembro");
        break;
        case 10:puts("Outubro");
        break;
        case 11:puts("Novembro");
        break;
        case 12:puts("Dezembro");
        break;
        default:puts("Mes invalido.");
    }
    return 0;
}
