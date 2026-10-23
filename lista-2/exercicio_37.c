/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 37
 * Enunciado (resumo): Calcule tarifa de estacionamento com arredondamento.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    int hc,mc,hs,ms,inicio,fim,minutos,horas;
    double total=0;
    scanf("%d %d %d %d",&hc,&mc,&hs,&ms);
    if(hc<0||hc>23||hs<0||hs>23||mc<0||mc>59||ms<0||ms>59) {
        puts("Horario invalido.");

        return 0;
    }
    inicio=hc*60+mc;
    fim=hs*60+ms;
    if(fim<inicio)fim+=1440;
    minutos=fim-inicio;
    horas=(minutos+59)/60;
    if(horas==0)horas=1;
    for(int i=1;i<=horas;i++)total+=i<=2?1.0:i<=4?1.4:2.0;
    printf("Horas cobradas: %d\nTotal: R$ %.2f\n",horas,total);

    return 0;
}
