/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 31
 * Enunciado (resumo): Classifique altura e peso conforme tabela.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    double h,p;
    int linha,coluna;
    char tabela[3][3]= {
        {
            'A','D','G'
        },
        {
            'B','E','H'
        },
        {
            'C','F','I'
        }
    };
    scanf("%lf %lf",&h,&p);
    if(h<=0||p<=0) {
        puts("Valores invalidos.");

        return 0;
    }
    linha=h<1.20?0:h<=1.70?1:2;
    coluna=p<60?0:p<=90?1:2;
    printf("Classificacao: %c\n",tabela[linha][coluna]);

    return 0;
}
