#include <stdio.h>

int main()
{
    float lado, area;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);

    area = lado * lado;

    printf("Area do quadrado: %.2f\n", area);

    return 0;
}