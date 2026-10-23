/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 16
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int n;
    if(scanf("%d",&n)!=1||n<=0||n%2==0)return 1;
    for(int i=n;i>=1;i-=2)printf("%d ",i);
    puts("");
    return 0;
}
