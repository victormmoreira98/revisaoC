/*
Escrever um programa que calcule o número fatorial de um número.
*/

#include<stdio.h>
#include <stdlib.h>

    int main(){

        int i, numero , resultado = 1;

        printf("digite um numero para saber o fatorial: ");
        scanf("%i", &numero);

        for(i = 1; i<= numero; i++){
            resultado = resultado * i;
        }

        printf("resutado: %i",resultado);


        

        return 0;
    }