/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 50
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    double chico=1.50,ze=1.10;
    int anos=0;
    while(ze<=chico) {
        chico+=0.02;
        ze+=0.03;
        anos++;
    }
    printf("Anos: %d\n",anos);
    return 0;
}
