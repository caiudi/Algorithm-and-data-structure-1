/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 38
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    for(int a=1;a<1000;a++)for(int b=a+1;b<1000-a;b++) {
        int c=1000-a-b;
        if(c>b&&a*a+b*b==c*c)printf("a=%d b=%d c=%d produto=%d\n",a,b,c,a*b*c);
    }
    return 0;
}
