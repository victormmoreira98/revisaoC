/*
Crie um programa que incremente uma variável inteira iniciando em 0 e terminando em 50, mostrando os valores múltiplos de 8, o número da ocorrência em cada exibição e quantas vezes o múltiplo ocorreu.
*/

#include <stdio.h>
#include <stdlib.h>

    int main(){

        float  valor, multiplos;
        int i;

        for(i=0; i<=50; i++){

            if(i %8 == 0){
                valor = i;
                multiplos++;
                printf(" %.1f e o %.1f multiplo de 8\n ",valor, multiplos);

            }

        }

        printf("cabou\n");

        return 0;
    }