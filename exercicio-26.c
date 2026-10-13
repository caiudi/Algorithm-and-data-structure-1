/*
 * UFU / FACOM - Lista C02 - Exercicio 26
 * ENUNCIADO (extraido do PDF fornecido):
 * Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro
 * em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com
 * a tabela abaixo:
 * CONSUMO        (Km/l)        MENSAGEM
 * menor que         8         Venda o carro!
 * entre          8 e 14          Econômico!
 * maior que        12      Super econômico!
 *
 * RESOLUCAO: usa comandos condicionais e imprime o resultado.
 * OBSERVACAO: A tabela do PDF tem faixas sobrepostas (8 a 14 e maior que 12). Foi adotado: menor que 8, de 8 a 12, maior que 12.
 * ENTRADA: forneca os valores solicitados, separados por espaco ou Enter.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main(void) {
    // Leitura, processamento e exibicao do resultado.
    double km,litros;scanf("%lf %lf",&km,&litros);if(km<0||litros<=0){puts("Valores invalidos");return 0;}double c=km/litros;printf("Consumo: %.2f km/l\n",c);puts(c<8?"Venda o carro!":c<=12?"Economico!":"Super economico!");
    return 0;
}
