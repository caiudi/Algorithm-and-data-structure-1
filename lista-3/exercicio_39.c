/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 39
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    double base,altura;
    do {
        printf("Base positiva: ");
        if(scanf("%lf",&base)!=1)return 1;
    }
    while(base<=0);
    do {
        printf("Altura positiva: ");
        if(scanf("%lf",&altura)!=1)return 1;
    }
    while(altura<=0);
    printf("Area: %.2f\n",base*altura/2);
    return 0;
}
