/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 10
 * Enunciado (resumo): Calcule peso ideal a partir de altura e sexo.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    double h;
    char sexo;
    scanf("%lf %c",&h,&sexo);
    if(h<=0) puts("Altura invalida.");
    else if(sexo=='M'||sexo=='m') printf("Peso ideal: %.2f\n",72.7*h-58);
    else if(sexo=='F'||sexo=='f') printf("Peso ideal: %.2f\n",62.1*h-44.7);
    else puts("Sexo invalido.");

    return 0;
}
