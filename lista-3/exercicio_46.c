/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 46
 * Solucao em linguagem C.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int secreto,chute,tentativas=0;
    srand((unsigned)time(NULL));
    secreto=rand()%1000+1;
    do {
        printf("Chute (1 a 1000): ");
        if(scanf("%d",&chute)!=1)return 1;
        tentativas++;
        if(chute<secreto)puts("Maior.");
        else if(chute>secreto)puts("Menor.");
    }
    while(chute!=secreto);
    printf("Acertou em %d tentativas!\n",tentativas);
    return 0;
}
