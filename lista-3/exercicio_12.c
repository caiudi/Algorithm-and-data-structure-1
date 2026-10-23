/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 12
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int n;
    if(scanf("%d",&n)!=1||n<=0)return 1;
    for(int i=n;i>=0;i--)printf("%d ",i);
    puts("");
    return 0;
}
