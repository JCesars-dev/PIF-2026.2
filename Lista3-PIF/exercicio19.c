#include <stdio.h>

int main() {

    int N, i;
    long long a = 1, b = 1, proximo;

    printf("Digite o numero do termo desejado: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Valor invalido!\n");
        return 0;
    }

    printf("Sequencia: ");

    if (N >= 1) {
        printf("%lld ", a);
    }

    if (N >= 2) {
        printf("%lld ", b);
    }

    for (i = 3; i <= N; i++) {

        proximo = a + b;

        printf("%lld ", proximo);

        a = b;
        b = proximo;
    }

    printf("\n");

    if (N == 1) {
        printf("O termo %d da sequencia e: %lld\n", N, a);
    } else {
        printf("O termo %d da sequencia e: %lld\n", N, b);
    }

    return 0;
}