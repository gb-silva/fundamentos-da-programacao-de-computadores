#include <stdio.h>
#include <math.h>

int main()
{
    float angulo_graus, distancia, angulo_rad, escada;

    printf("Digite o angulo formado (em graus) e a distancia da parede: ");
    scanf("%f %f", &angulo_graus, &distancia);

    angulo_rad = angulo_graus * M_PI / 180.0;
    escada = distancia / cos(angulo_rad);

    printf("Medida da escada: %.2f\n", escada);

    return 0;
}