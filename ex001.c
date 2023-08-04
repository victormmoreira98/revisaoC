/*
Um programa que contém duas variáveis inteiras e cada uma destas variáveis deve ter um valor atribuído. Escrever um programa que mostre os seguintes resultados:

a) A soma das duas variáveis.

b) A diferença entre as duas variáveis.

c) O dobro da primeira mais o triplo da segunda variável.

d) A multiplicação das duas variáveis.

*/

#include <stdio.h>
#include <stdlib.h>

    int main(){

        int n1=2,n2=3;

        printf("A soma das duas variaveis : %i.\n",n1+n2);
        printf("A diferença entre as duas variaveis: %i\n", n1-n2);
        printf("O dobro da primeira mais o triplo da segunda variavel: %i\n",(n1*2)+(n2*3));
        printf("A multiplicação das duas variáveis: %i\n", n1*n2);


        return 0;
    }