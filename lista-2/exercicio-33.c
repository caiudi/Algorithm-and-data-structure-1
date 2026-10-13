/*
 * UFU / FACOM - Lista C02 - Exercicio 33
 * ENUNCIADO (extraido do PDF fornecido):
 * Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo,
 * calcule e escreva o preço novo, e escreva uma mensagem em função do preço novo (de
 * acordo com a segunda tabela).
 * PREÇO ANTIGO              PERCENTUAL DE AUMENTO
 * até R$ 50                          5%
 * entre R$ 50 e R$ 100               10%
 * acima de R$ 100                    15%
 *
 * RESOLUCAO: usa comandos condicionais e imprime o resultado.
 * OBSERVACAO: Nas faixas do preço novo, foi adotado até 80, acima de 80 até 120, acima de 120 até 200, acima de 200.
 * ENTRADA: forneca os valores solicitados, separados por espaco ou Enter.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main(void) {
    // Leitura, processamento e exibicao do resultado.
    double antigo,taxa,novo;scanf("%lf",&antigo);if(antigo<0){puts("Preco invalido");return 0;}taxa=antigo<=50?.05:antigo<=100?.10:.15;novo=antigo*(1+taxa);printf("Preco novo: %.2f\n",novo);puts(novo<=80?"Barato":novo<=120?"Normal":novo<=200?"Caro":"Muito caro");
    return 0;
}
