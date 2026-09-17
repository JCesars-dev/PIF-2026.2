#include <stdio.h>

int main(void) {
    int dias;
    double salario_bruto;
    double desconto;
    double salario_liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    salario_bruto = dias * 30.0;
    desconto = salario_bruto * 0.08;
    salario_liquido = salario_bruto - desconto;

    printf("Salario bruto: R$ %.2f\n", salario_bruto);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Salario liquido: R$ %.2f\n", salario_liquido);

    return 0;
}