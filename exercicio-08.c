/*
 * UFU / FACOM - Lista C02 - Exercicio 08
 * ENUNCIADO (extraido do PDF fornecido):
 * Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e
 * exiba na tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um
 * valor entre 0.0 e 10.0, onde caso a nota não possua um valor válido, este fato deve ser
 * informado ao usuário e o programa termina.
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
    double a,b; scanf("%lf %lf",&a,&b); if(a<0||a>10||b<0||b>10) puts("Nota invalida"); else printf("Media: %.2f\n",(a+b)/2);
    return 0;
}
