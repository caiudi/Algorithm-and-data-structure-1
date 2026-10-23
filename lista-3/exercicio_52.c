/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 52
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int saque,notas[]= {
        100,50,20,10,5,2,1
    };
    if(scanf("%d",&saque)!=1||saque<0)return 1;
    for(int i=0;i<7;i++) {
        printf("Notas de %d: %d\n",notas[i],saque/notas[i]);
        saque%=notas[i];
    }
    return 0;
}
