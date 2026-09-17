#include <stdio.h>

int main(void) {
    char caractere;
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);
    printf("Caractere: %c\n", caractere);
    printf("Codigo ASCII: %d\n", caractere);
    /* O valor inteiro representa o codigo associado ao caractere na tabela ASCII. */
    return 0;
}