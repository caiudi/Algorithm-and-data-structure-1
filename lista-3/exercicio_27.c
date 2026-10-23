/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 27
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int n;
    double h=0;
    if(scanf("%d",&n)!=1||n<=0)return 1;
    for(int i=1;i<=n;i++)h+=1.0/i;
    printf("H(%d) = %.10f\n",n,h);
    return 0;
}
