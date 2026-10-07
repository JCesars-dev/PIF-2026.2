#include <stdio.h>

int main() {

    int NUM, i;
    int encontrou = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &NUM);

    for (i = 1; i <= NUM; i++) {

        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d\n", i);
            encontrou = 1;
        }
    }

    if (encontrou == 0) {
        printf("Nenhum numero satisfaz a condicao.\n");
    }

    return 0;
}