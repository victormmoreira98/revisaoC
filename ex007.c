/*
Crie um programa que declare uma base e um expoente e, em seguida, mostre o valor da potência.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main(){

        int base, exp, resultado;

        printf("digite a base do numero: ");
        scanf("%i", &base);
        fflush(stdin);
        printf("digite o exponte: ");
        scanf("%i", &exp);
        fflush(stdin);

        resultado = pow(base, exp);

        printf("resultado: %i",resultado);
        return 0;
    }