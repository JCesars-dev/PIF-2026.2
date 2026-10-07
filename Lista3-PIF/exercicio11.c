#include <stdio.h>

int main() {

    int A, B, i;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    if (A <= B) {

        for (i = A; i <= B; i++) {
            printf("%d\n", i);
        }

    } else {

        for (i = A; i >= B; i--) {
            printf("%d\n", i);
        }
    }

    return 0;
}