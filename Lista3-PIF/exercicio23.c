#include <stdio.h>

int main() {

    int L, linha, coluna;

    printf("Digite o lado do quadrado entre 3 e 20: ");
    scanf("%d", &L);

    if (L < 3 || L > 20) {
        printf("Valor invalido!\n");
        return 0;
    }

    for (linha = 1; linha <= L; linha++) {

        for (coluna = 1; coluna <= L; coluna++) {

            if (linha == 1 || linha == L ||
                coluna == 1 || coluna == L) {

                printf("X");

            } else {

                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}