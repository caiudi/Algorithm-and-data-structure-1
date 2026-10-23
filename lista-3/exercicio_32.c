/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 32
 * Solucao em linguagem C.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int n;
    if(scanf("%d",&n)!=1||n<0)return 1;
    srand((unsigned)time(NULL));
    for(int i=0;i<n;i++) {
        int a=rand()%6+1,b=rand()%6+1;
        printf("%d %c %d\n",a,a>b?'>':a<b?'<':'=',b);
    }
    return 0;
}
