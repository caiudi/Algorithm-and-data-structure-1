/*
 * UFU / FACOM - Lista C02 - Exercicio 20
 * ENUNCIADO (extraido do PDF fornecido):
 * Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triângulo
 * e, se forem, se é um triângulo escaleno, equilátero ou isóscele, considerando os seguin-
 * tes conceitos:
 * • O comprimento de cada lado de um triângulo é menor do que a soma dos outros
 * dois lados.
 * • Chama-se equilátero o triângulo que tem três lados iguais.
 * • Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais.
 * • Recebe o nome de escaleno o triângulo que tem os três lados diferentes.
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
    double a,b,c; scanf("%lf %lf %lf",&a,&b,&c); if(a<=0||b<=0||c<=0||a>=b+c||b>=a+c||c>=a+b) puts("Nao forma triangulo"); else if(a==b&&b==c) puts("Equilatero"); else if(a==b||a==c||b==c) puts("Isosceles"); else puts("Escaleno");
    return 0;
}
