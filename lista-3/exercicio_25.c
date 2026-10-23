/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 25
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    long long soma=0;
    for(int i=1;i<1000;i++)if(i%3==0||i%5==0)soma+=i;
    printf("Soma: %lld\n",soma);
    return 0;
}
