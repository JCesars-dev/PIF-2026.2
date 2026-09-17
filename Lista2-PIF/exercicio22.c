#include <stdio.h>

int main(void) {
    char maiuscula;
    char minuscula;
    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &maiuscula);
    minuscula = maiuscula + ('a' - 'A');
    printf("Letra minuscula: %c\n", minuscula);
    return 0;
}