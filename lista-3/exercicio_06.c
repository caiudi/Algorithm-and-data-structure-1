/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 06
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int x;
    long long s=0;
    for(int i=0;i<10;i++) {
        if(scanf("%d",&x)!=1)return 1;
        s+=x;
    }
    printf("Media: %.2f\n",s/10.0);
    return 0;
}
