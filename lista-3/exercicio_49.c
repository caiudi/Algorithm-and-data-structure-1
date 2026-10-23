/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 49
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    double carlos=3000,joao=carlos/3;
    int meses=0;
    while(joao<carlos) {
        carlos*=1.02;
        joao*=1.05;
        meses++;
    }
    printf("Meses: %d\n",meses);
    return 0;
}
