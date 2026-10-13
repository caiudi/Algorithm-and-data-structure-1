/*
 * UFU / FACOM - Lista C02 - Exercicio 29
 * ENUNCIADO (extraido do PDF fornecido):
 * Faça uma prova de matemática para crianças que estão aprendendo a somar números
 * inteiros menores do que 100. Escolha números aleatórios entre 1 e 100, e mostre na
 * tela a pergunta: qual é a soma de a + b, onde a e b são os números aleatórios. Peça a
 * resposta. Faça cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas
 * corretas, além de quantas vezes o aluno acertou.
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
    int acertos=0;int a[5],b[5],respostas[5];srand((unsigned)time(NULL));for(int i=0;i<5;i++){a[i]=1+rand()%100;b[i]=1+rand()%100;printf("Quanto e %d + %d? ",a[i],b[i]);if(scanf("%d",&respostas[i])!=1)return 1;if(respostas[i]==a[i]+b[i])acertos++;}for(int i=0;i<5;i++)printf("%d + %d = %d (sua resposta: %d)\n",a[i],b[i],a[i]+b[i],respostas[i]);printf("Acertos: %d/5\n",acertos);
    return 0;
}
