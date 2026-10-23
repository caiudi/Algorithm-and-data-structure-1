/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 23
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int n;
    if(scanf("%d",&n)!=1||n<=0)return 1;
    for(int i=1;i<=n;i++)if(n%i==0)printf("%d ",i);
    puts("");
    return 0;
}
