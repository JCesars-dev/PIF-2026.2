#include <stdio.h>
#include <math.h>

int main(void) {
    double comprimento;
    double largura;
    double preco_metro;
    double perimetro;
    double metros_arame;
    double custo_total;

    printf("Digite o comprimento do terreno em metros: ");
    scanf("%lf", &comprimento);
    printf("Digite a largura do terreno em metros: ");
    scanf("%lf", &largura);
    printf("Digite o preco por metro de arame: R$ ");
    scanf("%lf", &preco_metro);

    perimetro = 2.0 * (comprimento + largura);
    metros_arame = perimetro * 3.0;
    custo_total = metros_arame * preco_metro;

    printf("Metros de arame necessarios: %.2f m\n", metros_arame);
    printf("Custo total: R$ %.2f\n", custo_total);

    return 0;
}