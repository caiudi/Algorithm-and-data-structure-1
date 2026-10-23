/*
 * UFU / FACOM - Lista C03: Comandos de Repeticao
 * Exercicio 62
 * Solucao em linguagem C.
 */

#include <stdio.h>

int main(void) {
    int unidades[]= {
        0,2,4,4,6,5,4,4,4,4,3,4,4,5,8,6,9,9,7,8
    };
    int dezenas[]= {
        0,0,5,5,7,8,8,9,7,8
    };
    int centenas[]= {
        0,5,8,9,12,10,10,10,10,10
    };
    int total=0;
    for(int n=1;n<=1000;n++) {
        if(n==1000) {
            total+=3;
            continue;
        }     int c=n/100,r=n%100;
        if(c) {
            if(c==1&&r==0)total+=3;         else total+=centenas[c];         if(r)total+=1;
        }
        if(r<20)total+=unidades[r];
        else {
            total+=dezenas[r/10];
            if(r%10)total+=1+unidades[r%10];
        }
    }
    printf("Total de letras: %d\\n",total);
    return 0;
}
