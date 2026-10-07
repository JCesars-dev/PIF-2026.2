#include <stdio.h>

int main() {

    int A, B, numero, i;
    int divisores;
    int soma = 0;

    printf("Digite A: ");
    scanf("%d", &A);

    printf("Digite B: ");
    scanf("%d", &B);

    if (A <= 0 || B <= 0 || A >= B) {
        printf("Valores invalidos!\n");
        return 0;
    }

    for (numero = A; numero <= B; numero++) {

        divisores = 0;

        for (i = 1; i <= numero; i++) {

            if (numero % i == 0) {
                divisores++;
            }
        }

        if (numero > 1 && divisores == 2) {
            printf("%d\n", numero);
            soma = soma + numero;
        }
    }

    printf("Soma dos numeros primos: %d\n", soma);

    return 0;
}