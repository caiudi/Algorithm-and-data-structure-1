/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 48
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    long long a=0,b=1,soma=0;
    while(a<=4000000) {
        if(a%2==0)soma+=a;
        long long p=a+b;
        a=b;
        b=p;
    }
    printf("Soma: %lld\n",soma);
    return 0;
}
