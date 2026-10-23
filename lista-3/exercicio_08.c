/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 08
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    double x,menor,maior;
    for(int i=0;i<10;i++) {
        if(scanf("%lf",&x)!=1)return 1;
        if(i==0||x<menor)menor=x;
        if(i==0||x>maior)maior=x;
    }
    printf("Menor: %.2f; Maior: %.2f\n",menor,maior);
    return 0;
}
