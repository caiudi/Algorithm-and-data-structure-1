/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 26
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int n;
    if(scanf("%d",&n)!=1)return 1;
    long long x=(long long)n+1;
    while(x%11&&x%13&&x%17)x++;
    printf("Primeiro multiplo: %lld\n",x);
    return 0;
}
