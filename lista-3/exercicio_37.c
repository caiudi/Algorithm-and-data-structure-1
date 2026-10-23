/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 37
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    for(int n=1000;n<=9999;n++) {
        int s=n/100+n%100;
        if(s*s==n)printf("%d\n",n);
    }
    return 0;
}
