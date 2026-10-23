/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 13
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int n;
    if(scanf("%d",&n)!=1||n<=0||n%2)return 1;
    for(int i=0;i<=n;i+=2)printf("%d ",i);
    puts("");
    return 0;
}
