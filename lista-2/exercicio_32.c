/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 32
 * Enunciado (resumo): Calcule valor de pedido da lanchonete.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    int codigo,qtd;
    double preco;
    scanf("%d %d",&codigo,&qtd);
    if(qtd<=0) {
        puts("Quantidade invalida.");

        return 0;
    }
    switch(codigo) {
        case 100:case 103:preco=1.20;
        break;
        case 101:preco=1.30;
        break;
        case 102:preco=1.50;
        break;
        case 104:preco=1.70;
        break;
        case 105:preco=2.20;
        break;
        case 106:preco=1.00;
        break;
        default:puts("Codigo invalido.");

        return 0;
    }
    printf("Total: R$ %.2f\n",preco*qtd);

    return 0;
}
