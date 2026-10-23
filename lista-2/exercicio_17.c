/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 17
 * Enunciado (resumo): Calcule a area de um trapezio.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    double maior,menor,h;
    scanf("%lf %lf %lf",&maior,&menor,&h);
    if(maior<=0||menor<=0||h<=0||maior<menor) puts("Medidas invalidas.");
    else printf("Area: %.2f\n",(maior+menor)*h/2);

    return 0;
}
