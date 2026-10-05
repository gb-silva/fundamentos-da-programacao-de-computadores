#include <stdio.h>
#include <math.h>

int main()
{
    float raio, comprimento, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    comprimento = 2 * M_PI * raio;
    area = M_PI * raio * raio;
    volume = 0.75 * M_PI * raio * raio * raio;

    printf("Comprimento: %.2f\n", comprimento);
    printf("Area: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}