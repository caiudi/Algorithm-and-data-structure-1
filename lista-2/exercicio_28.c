/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 28
 * Enunciado (resumo): Calcule a media escolhida pelo usuario.
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    int op;
    double x,y,z,m;
    scanf("%lf %lf %lf %d",&x,&y,&z,&op);
    if(x<=0||y<=0||z<=0) {
        puts("Valores invalidos.");

        return 0;
    }
    switch(op) {
        case 1:m=cbrt(x*y*z);
        break;
        case 2:m=(x+2*y+3*z)/6;
        break;
        case 3:m=3/(1/x+1/y+1/z);
        break;
        case 4:m=(x+y+z)/3;
        break;
        default:puts("Opcao invalida.");

        return 0;
    }
    printf("Media: %.4f\n",m);

    return 0;
}
