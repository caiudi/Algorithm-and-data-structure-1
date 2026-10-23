/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 55
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int n,cont=0;
    long long soma=0;
    if(scanf("%d",&n)!=1||n<0)return 1;
    for(int x=2;cont<n;x++) {
        int primo=1;
        for(int d=2;d<=x/d;d++)if(x%d==0) {
            primo=0;
            break;
        }
        if(primo) {
            soma+=x;
            cont++;
        }
    }
    printf("Soma: %lld\n",soma);
    return 0;
}
