/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 45
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int op;
    double v;
    do {
        puts("1 - km/h para m/s\n2 - m/s para km/h\n3 - Sair");
        if(scanf("%d",&op)!=1)return 1;
        if(op==3)break;
        if(op!=1&&op!=2) {
            puts("Opcao invalida.");
            continue;
        }
        if(scanf("%lf",&v)!=1)return 1;
        printf("Resultado: %.4f\n",op==1?v/3.6:v*3.6);
    }
    while(1);
    return 0;
}
