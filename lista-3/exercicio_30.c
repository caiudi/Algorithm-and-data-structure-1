/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 30
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int n;
    long long a=0,b=0,c=0;
    if(scanf("%d",&n)!=1||n<=0)return 1;
    for(int i=1;i<=n;i++)a+=i;
    for(int i=1;i<=2*n-1;i++)b+=(i%2?i:-i);
    for(int i=1;i<=n;i++)c+=2*i-1;
    printf("Serie 1: %lld\\nSerie 2: %lld\\nSerie 3: %lld\\n",a,b,c);
    return 0;
}
