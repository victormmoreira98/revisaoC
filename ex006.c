/*
6) Considerando o problema anterior, criar um novo programa que incremente uma variável com a mesma faixa de valores, e mostre no vídeo somente os números pares ou múltiplos de 6.
*/

#include <stdio.h>
#include <stdlib.h>

    int main(){

        int i;
        
        for (i = 0 ; i <101 ; i++){
            if(i %6 == 0){
            printf("%i, ",i);
        }}

        return 0;
    }