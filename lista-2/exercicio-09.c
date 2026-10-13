/*
 * UFU / FACOM - Lista C02 - Exercicio 09
 * ENUNCIADO (extraido do PDF fornecido):
 * Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a
 * prestação for maior que 20% do salário imprima: Empréstimo n~
 * ao concedido, caso
 * contrário imprima: Empréstimo concedido.
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
    double salario,prestacao; scanf("%lf %lf",&salario,&prestacao); if(salario<=0||prestacao<0) puts("Valores invalidos"); else puts(prestacao>salario*0.2?"Emprestimo nao concedido":"Emprestimo concedido");
    return 0;
}
