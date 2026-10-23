/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 47
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int op;
    double a,b;
    do {
        puts("1 Soma\n2 Subtracao\n3 Multiplicacao\n4 Divisao\n5 Sair");
        if(scanf("%d",&op)!=1)return 1;
        if(op==5)break;
        if(op<1||op>4) {
            puts("Opcao invalida.");
            continue;
        }
        if(scanf("%lf%lf",&a,&b)!=2)return 1;
        if(op==4&&b==0) {
            puts("Divisao por zero.");
            continue;
        }
        switch(op) {
            case 1:printf("%.2f\n",a+b);
            break;
            case 2:printf("%.2f\n",a-b);
            break;
            case 3:printf("%.2f\n",a*b);
            break;
            case 4:printf("%.2f\n",a/b);
            break;
        }
    }
    while(1);
    return 0;
}
