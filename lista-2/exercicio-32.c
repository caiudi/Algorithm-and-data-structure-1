/*
 * UFU / FACOM - Lista C02 - Exercicio 32
 * ENUNCIADO (extraido do PDF fornecido):
 * Escrever um programa que leia o código do produto escolhido do cardápio de uma lan-
 * chonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche.
 * Considere que a cada execução somente será calculado um pedido. O cardápio da lan-
 * chonete segue o padrão abaixo:
 * Especificação        Código   Preço
 * Cachorro Quente         100      1.20
 * Bauru Simples           101      1.30
 * Bauru com Ovo           102      1.50
 * Hamburguer              103      1.20
 * Cheeseburguer           104      1.70
 * Suco                    105      2.20
 * Refrigerante            106      1.00
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
    int codigo,qtd;double preco;scanf("%d %d",&codigo,&qtd);if(qtd<=0){puts("Quantidade invalida");return 0;}switch(codigo){case 100:preco=1.20;break;case 101:preco=1.30;break;case 102:preco=1.50;break;case 103:preco=1.20;break;case 104:preco=1.70;break;case 105:preco=2.20;break;case 106:preco=1.00;break;default:puts("Codigo invalido");return 0;}printf("Total: R$ %.2f\n",preco*qtd);
    return 0;
}
