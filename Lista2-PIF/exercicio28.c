#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double horas_normais;
    double horas_extras;
    double salario_bruto;
    double imposto;
    double salario_liquido;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%lf", &horas_normais);
    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%lf", &horas_extras);

    salario_bruto = (horas_normais * 10.0) + (horas_extras * 15.0);
    imposto = salario_bruto > 12000.0 ? (salario_bruto - 12000.0) * 0.10 : 0.0;
    salario_liquido = salario_bruto - imposto;

    printf("Salario anual bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario anual liquido: R$ %.2f\n", salario_liquido);

    return 0;
}