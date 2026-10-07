#include <stdio.h>

int main() {

    int numero, digito, invertido = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    while (numero > 0) {

        digito = numero % 10;

        invertido = invertido * 10 + digito;

        numero = numero / 10;
    }

    printf("Numero invertido: %d\n", invertido);

    return 0;
}