/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 44
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    long long n,a=0,b=1;
    if(scanf("%lld",&n)!=1||n<=0)return 1;
    while(1) {
        printf("%lld ",a);
        if(a>n)break;
        long long prox=a+b;
        a=b;
        b=prox;
    }
    puts("");
    return 0;
}
