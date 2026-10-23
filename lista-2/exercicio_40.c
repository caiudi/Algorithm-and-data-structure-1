/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 40
 * Enunciado (resumo): Calcule custo de carro com comissao e impostos.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    double fabrica,distribuidor,imposto;
    scanf("%lf",&fabrica);
    if(fabrica<0) {
        puts("Valor invalido.");

        return 0;
    }
    if(fabrica<=12000) {
        distribuidor=.05;
        imposto=0;
    }
    else if(fabrica<=25000) {
        distribuidor=.10;
        imposto=.15;
    }
    else {
        distribuidor=.15;
        imposto=.20;
    }
    printf("Custo final: R$ %.2f\n",fabrica*(1+distribuidor+imposto));

    return 0;
}
