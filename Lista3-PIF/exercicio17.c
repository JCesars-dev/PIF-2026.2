#include <stdio.h>

int main() {

    float nota;
    float soma = 0;
    float maior, menor, media;
    int quantidade = 0;

    printf("Digite uma nota de 0 a 10 (-1 para encerrar): ");
    scanf("%f", &nota);

    while (nota != -1.0) {

        if (quantidade == 0) {
            maior = nota;
            menor = nota;
        } else {

            if (nota > maior) {
                maior = nota;
            }

            if (nota < menor) {
                menor = nota;
            }
        }

        soma = soma + nota;
        quantidade++;

        printf("Digite uma nota de 0 a 10 (-1 para encerrar): ");
        scanf("%f", &nota);
    }

    if (quantidade > 0) {

        media = soma / quantidade;

        printf("\nTotal de alunos: %d\n", quantidade);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media da turma: %.2f\n", media);

    } else {
        printf("Nenhuma nota foi informada.\n");
    }

    return 0;
}