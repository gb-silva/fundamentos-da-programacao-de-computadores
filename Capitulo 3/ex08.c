#include <stdio.h>

int main()
{
    float peso_kg, peso_gramas;

    printf("Digite o peso em quilos: ");
    scanf("%f", &peso_kg);

    peso_gramas = peso_kg * 1000;

    printf("Peso em gramas: %.2f g\n", peso_gramas);

    return 0;
}