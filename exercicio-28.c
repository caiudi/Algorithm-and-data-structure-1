/*
 * UFU / FACOM - Lista C02 - Exercicio 28
 * ENUNCIADO (extraido do PDF fornecido):
 * Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
 * seguintes médias de acordo com um valor numérico digitado pelo usuário:
 * √
 * (a) Geométrica: 3 x ∗ y ∗ z
 * (b) Ponderada: x+2∗y+3∗z
 * (c) Harmônica: 1 + 11 + 1
 * x   y   z
 * (d) Aritmética: x+y+z
 *
 * RESOLUCAO: usa comandos condicionais e imprime o resultado.
 * OBSERVACAO: A expressão da média harmônica aparece diagramada como 1/(1/x + 1/y + 1/z); para a média harmônica usual de três números foi usado 3/(1/x + 1/y + 1/z).
 * ENTRADA: forneca os valores solicitados, separados por espaco ou Enter.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main(void) {
    // Leitura, processamento e exibicao do resultado.
    double x,y,z,res;int op;scanf("%lf %lf %lf %d",&x,&y,&z,&op);if(x<=0||y<=0||z<=0){puts("Numeros devem ser positivos");return 0;}switch(op){case 1:res=cbrt(x*y*z);break;case 2:res=(x+2*y+3*z)/6;break;case 3:res=3/(1/x+1/y+1/z);break;case 4:res=(x+y+z)/3;break;default:puts("Opcao invalida: 1=geometrica 2=ponderada 3=harmonica 4=aritmetica");return 0;}printf("Media: %.4f\n",res);
    return 0;
}
