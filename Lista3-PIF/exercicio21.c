#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    char secreta, tentativa;
    int contador = 0;

    srand(time(NULL));

    secreta = rand() % 26 + 'a';

    do {
        printf("Digite uma letra de a ate z: ");
        scanf(" %c", &tentativa);

        contador++;

        if (tentativa < secreta) {
            printf("A letra secreta vem depois no alfabeto.\n");
        }
        else if (tentativa > secreta) {
            printf("A letra secreta vem antes no alfabeto.\n");
        }
        else {
            printf("Parabens! Voce acertou!\n");
            printf("Total de tentativas: %d\n", contador);
        }

    } while (tentativa != secreta);

    return 0;
}