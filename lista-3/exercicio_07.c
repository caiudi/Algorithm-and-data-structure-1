/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 07
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int x,cont=0;
    long long soma=0;
    while(cont<10) {
        printf("Inteiro positivo %d: ",cont+1);
        if(scanf("%d",&x)!=1)return 1;
        if(x<=0)continue;
        soma+=x;
        cont++;
    }
    printf("Media: %.2f\n",soma/10.0);
    return 0;
}
