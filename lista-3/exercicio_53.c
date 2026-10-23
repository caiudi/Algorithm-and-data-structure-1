/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 53
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int n,valor=1;
    if(scanf("%d",&n)!=1||n<=0)return 1;
    for(int i=1;i<=n;i++) {
        for(int j=0;j<i;j++)printf("%d ",valor++);
        puts("");
    }
    return 0;
}
