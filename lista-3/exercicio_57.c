/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 57
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int a,b,cont=0;
    if(scanf("%d%d",&a,&b)!=2)return 1;
    if(a>b) {
        int t=a;
        a=b;
        b=t;
    }
    for(int x=a;x<=b;x++) {
        if(x<2)continue;
        int primo=1;
        for(int d=2;d<=x/d;d++)if(x%d==0) {
            primo=0;
            break;
        }
        if(primo)cont++;
    }
    printf("Quantidade: %d\n",cont);
    return 0;
}
