/*
 * UFU / FACOM - Lista C02 - Exercicio 13
 * ENUNCIADO (extraido do PDF fornecido):
 * Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e
 * a segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno
 * e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou
 * superior a 60 pontos.
 *
 * RESOLUCAO: usa comandos condicionais e imprime o resultado.
 * OBSERVACAO: A aprovação é definida em 60 pontos, conforme o enunciado; as notas devem estar na mesma escala.
 * ENTRADA: forneca os valores solicitados, separados por espaco ou Enter.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main(void) {
    // Leitura, processamento e exibicao do resultado.
    double a,b,c; scanf("%lf %lf %lf",&a,&b,&c); double media=(a+b+2*c)/4; printf("Media: %.2f\n%s\n",media,media>=60?"Aprovado":"Reprovado");
    return 0;
}
