/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 60
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int x,cont=0,pares=0,maior=0,menor=0;
    long long soma=0,somaPares=0;
    while(scanf("%d",&x)==1&&x!=0) {
        if(!cont||x>maior)maior=x;
        if(!cont||x<menor)menor=x;
        soma+=x;
        cont++;
        if(x%2==0) {
            somaPares+=x;
            pares++;
        }
    }
    if(!cont) {
        puts("Nenhum numero.");
        return 0;
    }
    printf("Soma: %lld\nQuantidade: %d\nMedia: %.2f\nMaior: %d\nMenor: %d\n",soma,cont,(double)soma/cont,maior,menor);
    if(pares)printf("Media dos pares: %.2f\n",(double)somaPares/pares);
    else puts("Nao ha numeros pares.");
    return 0;
}
