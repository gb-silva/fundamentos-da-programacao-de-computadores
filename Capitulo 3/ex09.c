#include <stdio.h>

int main()
{
    float base_maior, base_menor, altura, area;

    printf("Digite a base maior, a base menor e a altura: ");
    scanf("%f %f %f", &base_maior, &base_menor, &altura);

    area = ((base_maior + base_menor) * altura) / 2;

    printf("Area do trapezio: %.2f\n", area);

    return 0;
}