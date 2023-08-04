/*
Escrever um programa que mostre no vídeo a tabuada do 2, do 3 e do 5
*/

#include <stdlib.h>
#include <stdio.h>
#define dois 2
#define tres 3
#define cinco 5


    int main(){

        int i, resultado;

        for(i=1;i<11;i++){

            resultado = dois * i;
            
            printf("2x %i = %i\n",i,resultado);

        }

        printf("\n");

        for(i=1;i<11;i++){

            resultado = tres * i;
            
            printf("3x %i = %i\n",i,resultado);

        }

        printf("\n");


        for(i=1;i<11;i++){

            resultado = cinco * i;
            
            printf("5x %i = %i\n",i,resultado);

        }


    }