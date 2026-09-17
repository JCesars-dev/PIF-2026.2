#include <stdio.h>

int main(void) {
    double salario_base;
    double gratificacao;
    double imposto;
    double salario_liquido;

    printf("Digite o salario-base: R$ ");
    scanf("%lf", &salario_base);

    gratificacao = salario_base * 0.05;
    imposto = salario_base * 0.07;
    salario_liquido = salario_base + gratificacao - imposto;

    printf("Gratificacao: R$ %.2f\n", gratificacao);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salario_liquido);

    /* Formula: salario_liquido = salario_base + (salario_base * 0.05) - (salario_base * 0.07);
       Portanto: salario_liquido = salario_base * 0.98 */
    return 0;
}