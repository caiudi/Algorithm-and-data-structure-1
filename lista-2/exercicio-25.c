/*
 * UFU / FACOM - Lista C02 - Exercicio 25
 * ENUNCIADO (extraido do PDF fornecido):
 * Calcule as raı́zes da equação de 2o grau.
 * Lembrando que:
 * √
 * −b ± ∆
 * x=
 * 2a
 * Onde
 * ∆ = B 2 − 4ac
 * E ax2 + bx + c = 0 representa uma equação de 2o grau.
 * A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não
 * é equação de segundo grau”.
 * • Se ∆ < 0, não existe real. Imprima a mensagem N~
 * ao existe raiz.
 * • Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem Raiz única.
 * • Se ∆ ≥ 0, imprima as duas raı́zes reais.
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
    double a,b,c;scanf("%lf %lf %lf",&a,&b,&c);if(a==0){puts("Nao e equacao de segundo grau");return 0;}double delta=b*b-4*a*c;if(delta<0)puts("Nao existe raiz real");else if(delta==0)printf("Raiz unica: %.4f\n",-b/(2*a));else printf("Raizes: %.4f e %.4f\n",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
    return 0;
}
