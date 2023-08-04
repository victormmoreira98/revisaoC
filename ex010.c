/*
Elaborar um programa que mostre os 10 primeiros termos da série de Fibonacci. Esta série é definida pela seguinte regra: A partir do terceiro elemento, cada termo é a soma dos dois anteriores.

1 2 3 5 8 13 ...
*/


/*
F(n) = F(n-1) + F(n-2)

onde:

F(n) é o n-ésimo número da sequência de Fibonacci.
F(n-1) é o número que vem antes de F(n) na sequência de Fibonacci.
F(n-2) é o número que vem dois lugares antes de F(n) na sequência de Fibonacci.
*/

#include <stdio.h>
#include <stdlib.h>

    int main(){  

        int n1 = 0, n2 = 1, r; 
        int i;

            for(i = 0; i < 10; i++){
                if(i<=1){
                    r=i;

                }else{
                    r=n1+n2;
                    n1=n2;
                    n2=r;
                }
                printf("%i, ",r);
            }


       
    

            return  0;
    }