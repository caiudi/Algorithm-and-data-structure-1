/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 09
 * Enunciado (resumo): Verifique concessao de emprestimo.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    double salario,prestacao;
    scanf("%lf %lf",&salario,&prestacao);
    if(salario<=0||prestacao<0) puts("Valores invalidos.");
    else puts(prestacao>0.2*salario?"Emprestimo nao concedido.":"Emprestimo concedido.");

    return 0;
}
