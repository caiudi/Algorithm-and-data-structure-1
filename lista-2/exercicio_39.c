/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 39
 * Enunciado (resumo): Calcule reajuste salarial e bonus por tempo de servico.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    double salario,taxa,bonus;
    int anos;
    scanf("%lf %d",&salario,&anos);
    if(salario<=0||anos<0) {
        puts("Dados invalidos.");

        return 0;
    }
    taxa=salario<=500?.25:salario<=1000?.20:salario<=1500?.15:salario<=2000?.10:0;
    bonus=anos<1?0:anos<=3?100:anos<=6?200:anos<=10?300:500;
    if(taxa==0&&bonus==0)puts("Sem direito a aumento.");
    else printf("Salario reajustado: R$ %.2f\n",salario*(1+taxa)+bonus);

    return 0;
}
