/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 29
 * Enunciado (resumo): Prova de cinco somas com numeros aleatorios.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    int a[5],b[5],r[5],acertos=0;
    srand((unsigned)time(NULL));
    for(int i=0;i<5;i++) {
        a[i]=1+rand()%100;
        b[i]=1+rand()%100;
        printf("Quanto e %d + %d? ",a[i],b[i]);
        scanf("%d",&r[i]);
        if(r[i]==a[i]+b[i])acertos++;
    }
    for(int i=0;i<5;i++)printf("%d + %d = %d (sua resposta: %d)\n",a[i],b[i],a[i]+b[i],r[i]);
    printf("Acertos: %d/5\n",acertos);

    return 0;
}
