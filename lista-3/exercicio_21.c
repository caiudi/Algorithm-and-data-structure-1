/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 21
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int a,b,t;
    long long soma=0,produto=1;
    int tem=0;
    if(scanf("%d%d",&a,&b)!=2)return 1;
    if(a>b) {
        t=a;
        a=b;
        b=t;
    }
    for(int i=a;i<=b;i++) {
        if(i%2==0)soma+=i;
        else {
            produto*=i;
            tem=1;
        }
    }
    printf("Soma pares: %lld\n",soma);
    if(tem)printf("Produto impares: %lld\n",produto);
    else puts("Nao ha impares.");
    return 0;
}
