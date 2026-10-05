#include <stdio.h>

int main()
{
    float angulo1, angulo2, angulo3;

    printf("Digite a medida de dois angulos do triangulo: ");
    scanf("%f %f", &angulo1, &angulo2);

    angulo3 = 180 - (angulo1 + angulo2);

    printf("Medida do terceiro angulo: %.2f graus\n", angulo3);

    return 0;
}