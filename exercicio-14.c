/*
 * UFU / FACOM - Lista C02 - Exercicio 14
 * ENUNCIADO (extraido do PDF fornecido):
 * A nota final de um estudante é calculada a partir de três notas atribuı́das entre o intervalo
 * de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral
 * e a um exame final. A média das três notas mencionadas anteriormente obedece aos
 * pesos: Trabalho de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo
 * com o resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9), de
 * recuperação (entre 3 e 4,9) ou se foi aprovado. Faça todas as verificações necessárias.
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
    double a,b,c; scanf("%lf %lf %lf",&a,&b,&c); if(a<0||a>10||b<0||b>10||c<0||c>10){puts("Notas invalidas");return 0;} double media=(2*a+3*b+5*c)/10; printf("Media: %.2f\n",media); puts(media<3?"Reprovado":media<5?"Recuperacao":"Aprovado");
    return 0;
}
