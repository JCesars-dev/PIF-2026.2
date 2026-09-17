#include <stdio.h>

int main(void) {
    int horas, minutos, segundos;
    int duracao;
    int horario_inicio;
    int horario_final;
    int horas_final, minutos_final, segundos_final;

    printf("Digite a hora de inicio: ");
    scanf("%d", &horas);
    printf("Digite os minutos de inicio: ");
    scanf("%d", &minutos);
    printf("Digite os segundos de inicio: ");
    scanf("%d", &segundos);
    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracao);

    horario_inicio = horas * 3600 + minutos * 60 + segundos;
    horario_final = (horario_inicio + duracao) % (24 * 3600);
    horas_final = horario_final / 3600;
    horario_final %= 3600;
    minutos_final = horario_final / 60;
    segundos_final = horario_final % 60;

    printf("Horario de termino: %02d:%02d:%02d\n", horas_final, minutos_final, segundos_final);
    return 0;
}