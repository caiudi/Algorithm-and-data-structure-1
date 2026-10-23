/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 27
 * Enunciado (resumo): Classifique nadador por idade.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    int idade;
    scanf("%d",&idade);
    if(idade>=5&&idade<=7)puts("Infantil A");
    else if(idade<=10&&idade>=8)puts("Infantil B");
    else if(idade<=13&&idade>=11)puts("Juvenil A");
    else if(idade<=17&&idade>=14)puts("Juvenil B");
    else if(idade>=18)puts("Senior");
    else puts("Sem categoria.");

    return 0;
}
