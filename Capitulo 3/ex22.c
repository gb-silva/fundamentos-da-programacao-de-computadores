#include <stdio.h>

int main()
{
    float n_lados, diagonais;

    printf("Digite o numero de lados do poligono: ");
    scanf("%f", &n_lados);

    diagonais = (n_lados * (n_lados - 3)) / 2;

    printf("Numero de diagonais: %.0f\n", diagonais);

    return 0;
}