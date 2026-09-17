#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    double kmh;
    double ms;
    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &kmh);
    ms = kmh / 3.6;
    printf("Velocidade em m/s: %.2f\n", ms);
    return 0;
}