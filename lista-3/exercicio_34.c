/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 34
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    long long mmc=1;
    for(int n=2;n<=20;n++) {
        long long a=mmc,b=n;
        while(b) {
            long long r=a%b;
            a=b;
            b=r;
        }
        mmc=mmc/a*n;
    }
    printf("MMC de 1 a 20: %lld\n",mmc);
    return 0;
}
