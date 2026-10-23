/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 59
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int n,codigo;
    double kwh,consumo,maior=0,menor=0,soma=0,total[3]= {
        0
    };
    if(scanf("%d%lf",&n,&kwh)!=2||n<=0||kwh<0)return 1;
    for(int i=0;i<n;i++) {
        if(scanf("%lf%d",&consumo,&codigo)!=2||consumo<0||codigo<1||codigo>3)return 1;
        if(i==0||consumo<menor)menor=consumo;
        if(i==0||consumo>maior)maior=consumo;
        soma+=consumo;
        total[codigo-1]+=consumo;
    }
    printf("Maior: %.2f\nMenor: %.2f\nMedia: %.2f\n",maior,menor,soma/n);
    for(int i=0;i<3;i++)printf("Categoria %d: %.2f kWh\n",i+1,total[i]);
    printf("Valor do kWh: R$ %.2f\n",kwh);
    return 0;
}
