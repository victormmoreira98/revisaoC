/*
4) Baseando no item anterior, escreva um programa que define uma taxa de desconto de acordo com o seguinte critério:

a) Salário até R$ 1.000,00 – desconto de 8%

b) Salário entre R$ 1.000,01 e 1.500,00 – desconto de 8,5%

c) Salário acima de R$ 1.500,00 – desconto de 9%

d) O programa deve mostrar o salário em consideração e mostrar sua taxa de desconto, bem como o valor do desconto.
*/

#include <stdio.h>
#include <stdlib.h>
const float inss = 0.08;

    int main(){

        char nome[20];
        float salario,salarioLiquido;
        

        printf("digite o nome do funcionario: ");
        gets(nome);
        fflush(stdin);
        printf("digite o salario: ");
        scanf("%f",&salario);

        if(salario <= 1000){
            float taxa = 0.08;
            float valorTaxa = salario * taxa;

            salarioLiquido = salario - (salario * taxa);

            printf("FOLHA DE PAGAMENTO\n");
            printf("nome: %s\n",nome);
            printf("salario bruto: %.2f\n",salario);
            printf("taxa: %.3f\n", taxa);
            printf("salario final: %.2f\n",salarioLiquido);
            printf("valor descontado: %f\n", valorTaxa);

        }else if(salario >1000 && salario <= 1500){
            float taxa = 0.085;
            float valorTaxa = salario * taxa;

            salarioLiquido = salario - (salario * taxa);

            printf("FOLHA DE PAGAMENTO\n");
            printf("nome: %s\n",nome);
            printf("salario bruto: %.2f\n",salario);
            printf("taxa: %.3f\n", taxa);
            printf("salario final: %.2f\n",salarioLiquido);
            printf("valor descontado: %f\n", valorTaxa);

        }else {
            float taxa = 0.09;
            float valorTaxa = salario * taxa;

            salarioLiquido = salario - (salario * taxa);

            printf("FOLHA DE PAGAMENTO\n");
            printf("nome: %s\n",nome);
            printf("salario bruto: %.2f\n",salario);
            printf("taxa: %.3f\n", taxa);
            printf("salario final: %.2f\n",salarioLiquido);
            printf("valor descontado: %f\n", valorTaxa);
        }

        return 0;

    }