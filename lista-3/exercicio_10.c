/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 10
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int soma=0;
    for(int i=1;i<=50;i++)soma+=2*i;
    printf("Soma: %d\n",soma);
    return 0;
}
