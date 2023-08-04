/*
3) Uma folha de pagamento simplificada contém os itens: Nome do Funcionário, Salário e Taxa de Desconto de INSS. Criar um programa que considere uma taxa de desconto de 8% e mostre no vídeo:

a) Nome do Funcionário.

b) Salário bruto

c) Valor do INSS

d) Salário líquido.
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

        salarioLiquido = salario - (salario * inss);
        printf("\n");

        printf("FOLHA DE PAGAMENTO\n");
        printf("nome: %s\n",nome);
        printf("salario bruto: %.2f\n",salario);
        printf("taxa: %.2f\n", inss);
        printf("salario final: %.2f",salarioLiquido);

        return 0;

    }