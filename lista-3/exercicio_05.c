/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 05
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    double x,s=0;
    for(int i=0;i<10;i++) {
        printf("Valor %d: ",i+1);
        if(scanf("%lf",&x)!=1)return 1;
        s+=x;
    }
    printf("Soma: %.2f\n",s);
    return 0;
}
