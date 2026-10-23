/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 33
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int n,i,j,cont=0;
    if(scanf("%d%d%d",&n,&i,&j)!=3||n<0||i<=0||j<=0)return 1;
    for(int x=0;cont<n;x++)if(x%i==0||x%j==0) {
        printf("%d ",x);
        cont++;
    }
    puts("");
    return 0;
}
