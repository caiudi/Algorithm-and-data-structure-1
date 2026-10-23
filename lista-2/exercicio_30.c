/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 30
 * Enunciado (resumo): Ordene tres numeros em ordem crescente.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    double a,b,c,t;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a>b) {
        t=a;
        a=b;
        b=t;
    }
    if(a>c) {
        t=a;
        a=c;
        c=t;
    }
    if(b>c) {
        t=b;
        b=c;
        c=t;
    }
    printf("%.2f %.2f %.2f\n",a,b,c);

    return 0;
}
