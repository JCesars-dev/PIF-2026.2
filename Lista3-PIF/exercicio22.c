#include <stdio.h>

int main() {

    int N, linha, coluna;
    int numero = 1;

    printf("Digite o numero de linhas: ");
    scanf("%d", &N);

    for (linha = 1; linha <= N; linha++) {

        for (coluna = 1; coluna <= linha; coluna++) {
            printf("%d ", numero);
            numero++;
        }

        printf("\n");
    }

    return 0;
}