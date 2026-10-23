/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 22
 * Enunciado (resumo): Verifique as condicoes de aposentadoria da lista.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    int idade,anos;
    scanf("%d %d",&idade,&anos);
    if(idade<0||anos<0)puts("Dados invalidos.");
    else puts(idade>=65||anos>=30||(idade>=60&&anos>=25)?"Pode se aposentar.":"Nao pode se aposentar.");

    return 0;
}
