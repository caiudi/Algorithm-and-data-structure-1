/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 61
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int maior=0,fator1=0,fator2=0;
    for(int a=100;a<=999;a++)for(int b=a;b<=999;b++) {
        int n=a*b,inv=0,temp=n;
        while(temp) {
            inv=inv*10+temp%10;
            temp/=10;
        }
        if(n==inv&&n>maior) {
            maior=n;
            fator1=a;
            fator2=b;
        }
    }
    printf("%d = %d x %d\n",maior,fator1,fator2);
    return 0;
}
