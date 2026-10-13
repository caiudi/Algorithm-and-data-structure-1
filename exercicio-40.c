/*
 * UFU / FACOM - Lista C02 - Exercicio 40
 * ENUNCIADO (extraido do PDF fornecido):
 * O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão
 * do distribuidor, e dos impostos. A comissão e os impostos são calculados sobre o custo
 * de fábrica, de acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao
 * consumidor.
 * CUSTO DE FÁBRICA                   % DO DISTRIBUIDOR           % DOS IMPOSTOS
 * até R$12.000,00                             5                       isento
 * entre R$12.000,00 e 25.000,00               10                         15
 * acima de R$25.000,00                        15                         20
 *
 * RESOLUCAO: usa comandos condicionais e imprime o resultado.
 * ENTRADA: forneca os valores solicitados, separados por espaco ou Enter.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main(void) {
    // Leitura, processamento e exibicao do resultado.
    double fabrica,distribuidor,imposto;scanf("%lf",&fabrica);if(fabrica<0){puts("Custo invalido");return 0;}if(fabrica<=12000){distribuidor=.05;imposto=0;}else if(fabrica<=25000){distribuidor=.10;imposto=.15;}else{distribuidor=.15;imposto=.20;}printf("Custo ao consumidor: R$ %.2f\n",fabrica*(1+distribuidor+imposto));
    return 0;
}
