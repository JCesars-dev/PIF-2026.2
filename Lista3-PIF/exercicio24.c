#include <stdio.h>

int main() {

    int N, linha, coluna;

    printf("Digite um numero impar entre 3 e 19: ");
    scanf("%d", &N);

    if (N < 3 || N > 19 || N % 2 == 0) {
        printf("Valor invalido!\n");
        return 0;
    }

    for (linha = 1; linha <= N; linha++) {

        for (coluna = 1; coluna <= N; coluna++) {

            if (coluna == linha || coluna == N - linha + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}