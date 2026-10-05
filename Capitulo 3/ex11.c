#include <stdio.h>

int main()
{
    float diagonal_maior, diagonal_menor, area;

    printf("Digite a diagonal maior e a diagonal menor: ");
    scanf("%f %f", &diagonal_maior, &diagonal_menor);

    area = (diagonal_maior * diagonal_menor) / 2;

    printf("Area do losango: %.2f\n", area);

    return 0;
}