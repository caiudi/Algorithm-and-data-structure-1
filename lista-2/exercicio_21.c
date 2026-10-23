/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 21
 * Enunciado (resumo): Menu de soma, diferenca, produto ou divisao.
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    int op;
    double a,b;
    printf("1-Soma 2-Diferenca 3-Produto 4-Divisao: ");
    scanf("%d",&op);
    if(op<1||op>4) {
        puts("Opcao invalida.");

        return 0;
    }
    scanf("%lf %lf",&a,&b);
    switch(op) {
        case 1:printf("%.2f\n",a+b);
        break;
        case 2:printf("%.2f\n",fabs(a-b));
        break;
        case 3:printf("%.2f\n",a*b);
        break;
        case 4:if(b==0)puts("Denominador invalido.");
        else printf("%.2f\n",a/b);
        break;
    }
    return 0;
}
