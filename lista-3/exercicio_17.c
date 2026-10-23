/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 17
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int n;
    long long s=0;
    if(scanf("%d",&n)!=1||n<=0)return 1;
    for(int i=1;i<=n;i++)s+=i;
    printf("Soma: %lld\n",s);
    return 0;
}
