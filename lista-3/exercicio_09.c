/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 09
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int n;
    if(scanf("%d",&n)!=1||n<0)return 1;
    for(int i=0;i<n;i++)printf("%d ",2*i+1);
    puts("");
    return 0;
}
