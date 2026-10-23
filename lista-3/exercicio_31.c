/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 31
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    double s=0;
    for(int i=1;i<=50;i++)s+=(2.0*i-1)/i;
    printf("S = %.10f\n",s);
    return 0;
}
