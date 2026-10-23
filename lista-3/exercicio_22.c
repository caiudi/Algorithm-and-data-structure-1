/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 22
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    double nota,soma=0;
    int cont=0;
    while(scanf("%lf",&nota)==1&&nota>=10&&nota<=20) {
        soma+=nota;
        cont++;
    }
    if(cont)printf("Media: %.2f\n",soma/cont);
    else puts("Nenhuma nota valida.");
    return 0;
}
