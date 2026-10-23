/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 36
 * Enunciado (resumo): Calcule comissao por faixa de vendas.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    double vendas,fixo,taxa;
    scanf("%lf",&vendas);
    if(vendas<0) {
        puts("Venda invalida.");

        return 0;
    }
    if(vendas>=100000) {
        fixo=700;
        taxa=.16;
    }
    else if(vendas>=80000) {
        fixo=650;
        taxa=.14;
    }
    else if(vendas>=60000) {
        fixo=600;
        taxa=.14;
    }
    else if(vendas>=40000) {
        fixo=550;
        taxa=.14;
    }
    else if(vendas>=20000) {
        fixo=500;
        taxa=.14;
    }
    else {
        fixo=400;
        taxa=.14;
    }
    printf("Comissao: R$ %.2f\n",fixo+taxa*vendas);

    return 0;
}
