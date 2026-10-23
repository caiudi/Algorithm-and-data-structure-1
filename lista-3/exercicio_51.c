/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 51
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int ano;
    double salario=2000,taxa=0.015;
    if(scanf("%d",&ano)!=1||ano<1995)return 1;
    for(int y=1996;y<=ano;y++) {
        salario*=1+taxa;
        taxa*=2;
    }
    printf("Salario em %d: R$ %.2f\n",ano,salario);
    return 0;
}
