/*
 * UFU / FACOM - Lista C02 - Exercicio 39
 * ENUNCIADO (extraido do PDF fornecido):
 * Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela
 * que considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários
 * com menor salário terão um aumento proporcionalmente maior do que os funcionários
 * com um salário maior, e conforme o tempo de serviço na empresa, cada funcionário irá
 * receber um bônus adicional de salário. Faça um programa que leia:
 * • o valor do salário atual do funcionário;
 * • o tempo de serviço desse funcionário na empresa (número de anos de trabalho na
 * empresa).
 * Use as tabelas abaixo para calcular o salário reajustado deste funcionário e imprima o
 * valor do salário final reajustado, ou uma mensagem caso o funcionário não tenha direito
 * a nenhum aumento.
 * Salário Atual         Reajuste(%)         Tempo de Serviço     Bônus
 * Até 500,00               25%               Abaixo de 1 ano    Sem bônus
 * Até 1000,00              20%                De 1 a 3 anos       100,00
 * Até 1500,00              15%                De 4 a 6 anos       200,00
 * Até 2000,00              10%               De 7 a 10 anos       300,00
 * Acima de 2000,00       Sem reajuste         Mais de 10 anos      500,00
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
    double salario,percentual,bonus;int anos;scanf("%lf %d",&salario,&anos);if(salario<0||anos<0){puts("Valores invalidos");return 0;}percentual=salario<=500?.25:salario<=1000?.20:salario<=1500?.15:salario<=2000?.10:0;bonus=anos<1?0:anos<=3?100:anos<=6?200:anos<=10?300:500;if(percentual==0&&bonus==0)puts("Sem direito a aumento");else printf("Salario reajustado: R$ %.2f\n",salario*(1+percentual)+bonus);
    return 0;
}
