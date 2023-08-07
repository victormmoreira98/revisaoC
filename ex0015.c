#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100], string3[100];
    int len1, len2, len3;

    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);
    len1 = strlen(string1) - 1; // Desconsiderar o caractere de nova linha

    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);
    len2 = strlen(string2) - 1; // Desconsiderar o caractere de nova linha

    printf("Digite a terceira string: ");
    fgets(string3, sizeof(string3), stdin);
    len3 = strlen(string3) - 1; // Desconsiderar o caractere de nova linha

    printf("Quantidade de caracteres da primeira string: %d\n", len1);
    printf("Quantidade de caracteres da segunda string: %d\n", len2);
    printf("Quantidade de caracteres da terceira string: %d\n", len3);

    return 0;
}