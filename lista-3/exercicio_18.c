/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 18
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int n,x,maior=0,vezes=0;
    if(scanf("%d",&n)!=1||n<=0)return 1;
    for(int i=0;i<n;i++) {
        if(scanf("%d",&x)!=1)return 1;
        if(i==0||x>maior) {
            maior=x;
            vezes=1;
        }
        else if(x==maior)vezes++;
    }
    printf("Maior: %d; Ocorrencias: %d\n",maior,vezes);
    return 0;
}
