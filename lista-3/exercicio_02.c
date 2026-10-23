/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 02
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int i;
    for (i=1;i<=100;i++) printf("%d ",i);
    puts("");
    i=1;
    while(i<=100) {
        printf("%d ",i);
        i++;
    }
    puts("");
    i=1;
    do {
        printf("%d ",i);
        i++;
    }
    while(i<=100);
    puts("");
    return 0;
}
