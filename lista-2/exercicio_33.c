/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 33
 * Enunciado (resumo): Calcule aumento e classifique novo preco.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    double preco,novo;
    scanf("%lf",&preco);
    if(preco<0) {
        puts("Preco invalido.");

        return 0;
    }
    novo=preco*(preco<=50?1.05:preco<=100?1.10:1.15);
    printf("Novo preco: R$ %.2f\n",novo);
    puts(novo<=80?"Barato":novo<=120?"Normal":novo<=200?"Caro":"Muito caro");

    return 0;
}
