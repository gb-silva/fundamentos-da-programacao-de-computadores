#include <stdio.h>

int main()
{
    float dim1, dim2, area, potencia;

    printf("Digite as duas dimensoes do comodo (em metros): ");
    scanf("%f %f", &dim1, &dim2);

    area = dim1 * dim2;
    potencia = area * 18;

    printf("Area do comodo: %.2f m2\n", area);
    printf("Potencia de iluminacao necessaria: %.2f W\n", potencia);

    return 0;
}