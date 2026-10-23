/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 41
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    double a,b;
    while(1) {
        printf("R1 e R2: ");
        if(scanf("%lf%lf",&a,&b)!=2)return 1;
        if(a==0||b==0)break;
        if(a<0||b<0) {
            puts("Resistencias invalidas.");
            continue;
        }
        printf("Equivalente: %.4f\n",a*b/(a+b));
    }
    return 0;
}
