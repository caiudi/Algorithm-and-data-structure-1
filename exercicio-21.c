/*
 * UFU / FACOM - Lista C02 - Exercicio 21
 * ENUNCIADO (extraido do PDF fornecido):
 * Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação esco-
 * lhida. Escreva uma mensagem de erro se a opção for inválida.
 * Escolha a opç~
 * ao:
 * 1- Soma de 2 números.
 * 2- Diferença entre 2 números (maior pelo menor).
 * 3- Produto entre 2 números.
 * 4- Divis~
 * ao entre 2 números (o denominador n~ao pode ser zero).
 * Opç~
 * ao
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
    int op;double a,b;puts("1-Soma 2-Diferenca maior-menor 3-Produto 4-Divisao");scanf("%d %lf %lf",&op,&a,&b);switch(op){case 1:printf("%.2f\n",a+b);break;case 2:printf("%.2f\n",fabs(a-b));break;case 3:printf("%.2f\n",a*b);break;case 4:if(b==0) puts("Denominador nao pode ser zero");else printf("%.2f\n",a/b);break;default:puts("Opcao invalida");}
    return 0;
}
