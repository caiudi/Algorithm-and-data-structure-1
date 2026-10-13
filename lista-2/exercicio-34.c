/*
 * UFU / FACOM - Lista C02 - Exercicio 34
 * ENUNCIADO (extraido do PDF fornecido):
 * Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo com a
 * tabela abaixo, quando o aluno tem mais de 20 faltas ocorre uma redução de conceito.
 * PREÇO NOVO                           MENSAGEM
 * até R$ 80                              Barato
 * entre R$ 80 e R$ 120 (inclusive)        Normal
 * entre R$ 120 e R$ 200 (inclusive)        Caro
 * acima de R$ 200                        Muito caro
 * NOTA            CONCEITO (ATÉ 20 FALTAS)        CONCEITO (MAIS DE 20 FALTAS)
 * 9.0 até 10.0              A                                 B
 * 7.5 até 8.9               B                                 C
 * 5.0 até 7.4               C                                 D
 * 4.0 até 4.9               D                                 E
 * 0.0 até 3.9               E                                 E
 *
 * RESOLUCAO: usa comandos condicionais e imprime o resultado.
 * ENTRADA: forneca os valores solicitados, separados por espaco ou Enter.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main(void) {
    // Leitura, processamento e exibicao do resultado.
    double nota;int faltas;scanf("%lf %d",&nota,&faltas);if(nota<0||nota>10||faltas<0){puts("Valores invalidos");return 0;}char conceito=nota>=9?'A':nota>=7.5?'B':nota>=5?'C':nota>=4?'D':'E';if(faltas>20&&conceito<'E')conceito++;printf("Conceito: %c\n",conceito);
    return 0;
}
