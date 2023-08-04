/*
Escrever um programa que incremente uma variável iniciando em 0 e terminando em 200. A cada passagem pela variável, se o valor for par, este deverá ser acumulado em uma variável e, se for impar, acumulado em outra.
*/


#include <stdio.h>
#include <stdlib.h>

    int main(){

        float  impar, par;
        int i;

        for (i = 0; i <= 200; i++){

            if ( i %2 == 0){
                par = i;
            }else{
                impar = i;
            }
        }

        printf("tem %.1f numeros pares e %.1f numeros impares.\n", par, impar);

        return 0;
    }