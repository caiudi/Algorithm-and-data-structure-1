/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 24
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int n;
    long long soma=0;
    if(scanf("%d",&n)!=1||n<=0)return 1;
    for(int i=1;i<=n/2;i++)if(n%i==0)soma+=i;
    printf("Soma: %lld\n",soma);
    return 0;
}
