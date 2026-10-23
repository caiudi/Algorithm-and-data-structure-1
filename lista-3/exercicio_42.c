/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 42
 * Solucao em linguagem C.
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    double x;
    while(scanf("%lf",&x)==1&&x>0)printf("Quadrado: %.4f Cubo: %.4f Raiz: %.4f\n",x*x,x*x*x,sqrt(x));
    return 0;
}
