/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 04
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int i=0;
    while(i<=100000) {
        printf("%d\n",i);
        i+=1000;
    }
    return 0;
}
