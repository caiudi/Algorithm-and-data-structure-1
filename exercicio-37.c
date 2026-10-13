/*
 * UFU / FACOM - Lista C02 - Exercicio 37
 * ENUNCIADO (extraido do PDF fornecido):
 * As tarifas de certo parque de estacionamento são as seguintes:
 * • 1a e 2a hora - R$ 1,00 cada
 * • 3a e 4a hora - R$ 1,40 cada
 * • 5a hora e seguintes - R$ 2,00 cada
 * O número de horas a pagar é sempre inteiro e arredondado por excesso. Deste modo,
 * quem estacionar durante 61 minutos pagará por duas horas, que é o mesmo que pagaria
 * se tivesse permanecido 120 minutos. Os momentos de chegada ao parque e partida
 * deste são apresentados na forma de pares de inteiros, representando horas e minutos.
 * Por exemplo, o par 12 50 representará “dez para a uma da tarde”. Pretende-se criar um
 * programa que, lidos pelo teclado os momentos de chegada e de partida, escreva na tela
 * o preço cobrado pelo estacionamento. Admite-se que a chegada e a partida se dão com
 * intervalo não superior a 24 horas. Portanto, se uma dada hora de chegada for superior
 * à da partida, isso não é uma situação de erro, antes significará que a partida ocorreu no
 * dia seguinte ao da chegada.
 *
 * RESOLUCAO: usa comandos condicionais e imprime o resultado.
 * OBSERVACAO: Horários iguais foram interpretados como duração zero; o enunciado não diferencia zero de 24 horas.
 * ENTRADA: forneca os valores solicitados, separados por espaco ou Enter.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main(void) {
    // Leitura, processamento e exibicao do resultado.
    int hc,mc,hs,ms;scanf("%d %d %d %d",&hc,&mc,&hs,&ms);if(hc<0||hc>23||hs<0||hs>23||mc<0||mc>59||ms<0||ms>59){puts("Horario invalido");return 0;}int chegada=hc*60+mc,saida=hs*60+ms;if(saida<chegada)saida+=24*60;int minutos=saida-chegada,horas=(minutos+59)/60;double valor=0;for(int i=1;i<=horas;i++)valor+=i<=2?1.0:i<=4?1.4:2.0;printf("Duracao: %d min | Horas cobradas: %d | Total: R$ %.2f\n",minutos,horas,valor);
    return 0;
}
