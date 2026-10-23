/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 19
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int n;
    if(scanf("%d",&n)!=1||n<100||n>999)return 1;
    printf("%d %d %d\n",n/100,(n/10)%10,n%10);
    return 0;
}
