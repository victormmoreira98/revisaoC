/*
Se a taxa de juros composto de uma determinada aplicação vale 1,25% ao mês, calcular a taxa equivalente no período de um ano. Se um valor de R$ 1.000,00 for aplicado com esta taxa, qual será o valor final após um ano?
*/
// M = C . (1 + i)t
        
                                    
#include <stdio.h>
#include <stdlib.h>
#define taxa  0.0125

    int main(){

        float montante;
        float tempo = 1;
        float salario = 1000; 
        int i; 
        float final =0 ;                
         
         
         for ( i=1; i<13; i++){

            final = final + montante;

            montante = salario * ((1 + taxa) * tempo) ;
            

         }
         
         
         

         printf ("resultado final %f\n", final);

         return 0;                      

        
    }