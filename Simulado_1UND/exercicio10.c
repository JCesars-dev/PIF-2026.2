#include <stdio.h>
#include <math.h>

int main(){

    int segundos, horas, minutos, segundos_restantes;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    horas = segundos/3600;

    segundos = segundos % 3600;

    minutos = segundos / 60;

    segundos_restantes = segundos % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos_restantes);
    
return 0;
}