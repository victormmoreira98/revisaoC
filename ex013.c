/*
Se a taxa de juros composto de uma determinada aplicação vale 1,25% ao mês, calcular a taxa equivalente no período de um ano. Se um valor de R$ 1.000,00 for aplicado com esta taxa, qual será o valor final após um ano?
*/
// M = C . (1 + i)t
        
                                    
#include <stdio.h>
#include <math.h>

int main() {
    double valorInicial = 1000.0;
    double taxaMensal = 0.0125;
    int numeroMeses = 12;

    // Calculando a taxa equivalente no período de um ano
    double taxaAnual = 1.0;
    for (int i = 0; i < numeroMeses; i++) {
        taxaAnual = taxaAnual * (1 + taxaMensal);
    }
    taxaAnual = (taxaAnual - 1) * 100;

    // Calculando o valor final após um ano
    double valorFinal = valorInicial;
    for (int i = 0; i < numeroMeses; i++) {
        valorFinal *= (1 + taxaMensal);
    }

    printf("Taxa equivalente no período de um ano: %.2lf%%\n", taxaAnual);
    printf("Valor final após um ano: R$ %.2lf\n", valorFinal);

    return 0;
}
