/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 29
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    double s=0,fat=1;
    for(int i=1;i<=4;i++) {
        fat*=(2*i-1)*(2*i);
        s+=(double)i/fat;
    }
    printf("S (5 termos, incluindo zero) = %.10f\n",s);
    return 0;
}
