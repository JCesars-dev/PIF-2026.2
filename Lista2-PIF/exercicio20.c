#include <stdio.h>
#include <math.h>

int main(void) {
    double lado_a;
    double lado_b;
    double hipotenusa;

    printf("Digite o valor do cateto a: ");
    scanf("%lf", &lado_a);

    printf("Digite o valor do cateto b: ");
    scanf("%lf", &lado_b);

    hipotenusa = sqrt(lado_a * lado_a + lado_b * lado_b);

    printf("Hipotenusa: %.2f\n", hipotenusa);

    return 0;
}
/* Compilacao utilizando GCC: gcc questao20.c -o questao20 -lm */