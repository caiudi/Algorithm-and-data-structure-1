/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 28
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int n;
    double e=1,fat=1;
    if(scanf("%d",&n)!=1||n<=0)return 1;
    for(int i=1;i<=n;i++) {
        fat*=i;
        e+=1/fat;
    }
    printf("E = %.10f\n",e);
    return 0;
}
