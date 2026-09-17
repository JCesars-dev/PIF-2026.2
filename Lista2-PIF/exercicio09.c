#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int num1, num2;
    int soma, subtracao, multiplicacao;
    double divisao;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;

    if (num2 != 0) {
        divisao = (double)num1 / num2;
        printf("Divisao: %.2f\n", divisao);
    } else {
        printf("Divisao: impossivel dividir por zero.\n");
    }

    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);

    /* Para evitar matematicamente a divisao por zero, devemos verificar se o denominador e diferente de zero antes de realizar a divisao. */
    return 0;
}