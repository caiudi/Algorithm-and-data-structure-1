/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 43
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int idade,cont=0;
    long long soma=0;
    while(scanf("%d",&idade)==1&&idade!=0) {
        if(idade<0) {
            puts("Idade invalida.");
            continue;
        }
        soma+=idade;
        cont++;
    }
    if(cont)printf("Media: %.2f\n",(double)soma/cont);
    else puts("Nenhuma idade informada.");
    return 0;
}
