/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 20
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int x,cont=0,pares=0;
    while(1) {
        if(scanf("%d",&x)!=1)return 1;
        if(x==1000)break;
        cont++;
        if(x%2==0)pares++;
        printf("%d: %s\n",x,x%2==0?"par":"impar");
    }
    printf("Lidos: %d; Pares: %d\n",cont,pares);
    return 0;
}
