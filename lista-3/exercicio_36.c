/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 36
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    long long soma=0,quadrados=0;
    for(int i=1;i<=100;i++) {
        soma+=i;
        quadrados+=(long long)i*i;
    }
    printf("Diferenca: %lld\n",soma*soma-quadrados);
    return 0;
}
