#include <stdio.h>

int main()
{
    int segundos;
    int horas;
    int minutos;
    int segundos_restantes;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundos_restantes = segundos % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos_restantes);

    return 0;
}