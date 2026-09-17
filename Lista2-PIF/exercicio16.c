#include <stdio.h>
#include <math.h>

int main(void) {
    double altura_degrau_cm;
    double altura_total_m;
    double altura_total_cm;
    int quantidade_degraus; 

    printf("Digite a altura de cada degrau em cm: ");
    scanf("%lf", &altura_degrau_cm);

    printf("Digite a altura total desejada em metros: ");
    scanf("%lf", &altura_total_m);

    if (altura_degrau_cm <= 0.0) {
        printf("Altura do degrau deve ser positiva.\n");
        return 1;
    }

    altura_total_cm = altura_total_m * 100.0;
    quantidade_degraus = (int)ceil(altura_total_cm / altura_degrau_cm);

    printf("Numero minimo de degraus: %d\n", quantidade_degraus);
    return 0;
}