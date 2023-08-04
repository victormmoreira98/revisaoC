#include <stdlib.h>
#include <stdio.h>
#define dois 2
#define tres 3
#define cinco 5

int main() {
    int i, resultado;

    for (i = 1; i < 11; i++) {
        resultado = dois * i;
        printf("2x %i = %i\t", i, resultado);

        resultado = tres * i;
        printf("3x %i = %i\t", i, resultado);

        resultado = cinco * i;
        printf("5x %i = %i\n", i, resultado);
    }

    return 0;
}