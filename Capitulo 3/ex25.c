#include <stdio.h>

int main()
{
    float horas, minutos, total_minutos, total_segundos;

    printf("Digite a hora e os minutos separados por espaco: ");
    scanf("%f %f", &horas, &minutos);

    float horas_em_minutos = horas * 60;
    total_minutos = horas_em_minutos + minutos;
    total_segundos = total_minutos * 60;

    printf("Hora convertida em minutos: %.0f min\n", horas_em_minutos);
    printf("Total dos minutos: %.0f min\n", total_minutos);
    printf("Total de minutos convertidos em segundos: %.0f s\n", total_segundos);

    return 0;
}