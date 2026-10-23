/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 40
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int x,menor=0,maior=0,cont=0;
    while(scanf("%d",&x)==1&&x>=0) {
        if(cont==0||x<menor)menor=x;
        if(cont==0||x>maior)maior=x;
        cont++;
    }
    if(cont)printf("Menor: %d; Maior: %d\n",menor,maior);
    else puts("Nenhum valor informado.");
    return 0;
}
