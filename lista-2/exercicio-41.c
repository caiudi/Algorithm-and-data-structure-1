/*
 * UFU / FACOM - Lista C02 - Exercicio 41
 * ENUNCIADO (extraido do PDF fornecido):
 * Faça um algoritmo que calcule o IM C de uma pessoa e mostre sua classificação de
 * acordo com a tabela abaixo:
 * IMC           Classificação
 * < 18,5        Abaixo do Peso
 * 18,6 - 24,9   Saudável
 * 25,0 - 29,9   Peso em excesso
 * 30,0 - 34,9   Obesidade Grau I
 * 35,0 - 39,9   Obesidade Grau II(severa)
 * ≥ 40,0        Obesidade Grau III(mórbida)
 *
 * RESOLUCAO: usa comandos condicionais e imprime o resultado.
 * OBSERVACAO: As faixas da tabela têm intervalos decimais; foram adotados limiares contínuos 18.5, 25, 30, 35 e 40.
 * ENTRADA: forneca os valores solicitados, separados por espaco ou Enter.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main(void) {
    // Leitura, processamento e exibicao do resultado.
    double peso,altura;scanf("%lf %lf",&peso,&altura);if(peso<=0||altura<=0){puts("Valores invalidos");return 0;}double imc=peso/(altura*altura);printf("IMC: %.2f\n",imc);puts(imc<18.5?"Abaixo do peso":imc<25?"Saudavel":imc<30?"Peso em excesso":imc<35?"Obesidade Grau I":imc<40?"Obesidade Grau II (severa)":"Obesidade Grau III (morbida)");
    return 0;
}
