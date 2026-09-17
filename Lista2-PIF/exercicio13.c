#include <stdio.h>
#include <math.h>

int main(void) {
    double lado;
    double base;
    double altura;
    double area_quadrado;
    double area_retangulo;
    double area_triangulo;

    printf("Digite o lado do quadrado: ");
    scanf("%lf", &lado);

    printf("Digite a base do retangulo: ");
    scanf("%lf", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%lf", &altura);

    area_quadrado = lado * lado;
    area_retangulo = base * altura;
    area_triangulo = (base * altura) / 2.0;

    printf("Area do quadrado: %.2f\n", area_quadrado);
    printf("Area do retangulo: %.2f\n", area_retangulo);
    printf("Area do triangulo retangulo: %.2f\n", area_triangulo);

    return 0;
}