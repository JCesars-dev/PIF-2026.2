#include <stdio.h>

int main() {

    float valor, soma = 0, media;
    int quantidade = 0;

    printf("Digite um valor positivo ou um valor negativo para encerrar: ");
    scanf("%f", &valor);

    while (valor >= 0) {

        soma = soma + valor;
        quantidade++;

        printf("Digite outro valor ou um valor negativo para encerrar: ");
        scanf("%f", &valor);
    }

    if (quantidade > 0) {
        media = soma / quantidade;

        printf("Quantidade: %d\n", quantidade);
        printf("Soma: %.2f\n", soma);
        printf("Media: %.2f\n", media);
    }

    return 0;
}
