/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 35
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int a,b;
    long long s=0;
    if(scanf("%d%d",&a,&b)!=2)return 1;
    if(a>b) {
        puts("Intervalo de valores invalido");
        return 0;
    }
    for(int i=a;i<=b;i++)if(i%2!=0)s+=i;
    printf("Soma dos impares: %lld\n",s);
    return 0;
}
