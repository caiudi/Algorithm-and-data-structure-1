/*
 * UFU / FACOM - Lista C02: Comandos condicionais
 * Exercicio 41
 * Enunciado (resumo): Calcule IMC e classifique conforme a tabela.
 */
#include <stdio.h>

int main(void) {
    // Leitura dos valores e resolucao do exercicio.
    double peso,altura,imc;
    scanf("%lf %lf",&peso,&altura);
    if(peso<=0||altura<=0) {
        puts("Valores invalidos.");

        return 0;
    }
    imc=peso/(altura*altura);
    printf("IMC: %.2f\n",imc);
    puts(imc<18.5?"Abaixo do peso":imc<25?"Saudavel":imc<30?"Peso em excesso":imc<35?"Obesidade Grau I":imc<40?"Obesidade Grau II (severa)":"Obesidade Grau III (morbida)");

    return 0;
}
