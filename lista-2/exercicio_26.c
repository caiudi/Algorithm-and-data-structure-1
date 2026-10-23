/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 26
 * Enunciado (resumo): Classifique consumo de combustivel em km/l.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    double km,litros,consumo;
    scanf("%lf %lf",&km,&litros);
    if(km<0||litros<=0) {
        puts("Valores invalidos.");

        return 0;
    }
    consumo=km/litros;
    printf("Consumo: %.2f km/l\n",consumo);
    puts(consumo<8?"Venda o carro!":consumo<=12?"Economico!":"Super economico!");

    return 0;
}
