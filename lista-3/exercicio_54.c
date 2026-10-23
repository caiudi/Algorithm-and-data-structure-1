/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 54
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    long long n;
    int primo=1;
    if(scanf("%lld",&n)!=1||n<=1)return 1;
    for(long long i=2;i<=n/i;i++)if(n%i==0) {
        primo=0;
        break;
    }
    puts(primo?"Primo":"Nao primo");
    return 0;
}
