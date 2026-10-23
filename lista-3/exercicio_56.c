/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 56
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    long long soma=0;
    for(int x=2;x<2000000;x++) {
        int primo=1;
        for(int d=2;d<=x/d;d++)if(x%d==0) {
            primo=0;
            break;
        }
        if(primo)soma+=x;
    }
    printf("Soma: %lld\n",soma);
    return 0;
}
