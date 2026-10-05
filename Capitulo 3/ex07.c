#include <stdio.h>

int main()
{
    float peso, novo_peso_mais, novo_peso_menos;

    printf("Digite o peso da pessoa (kg): ");
    scanf("%f", &peso);

    novo_peso_mais = peso * 1.15;
    novo_peso_menos = peso * 0.80;

    printf("Novo peso se engordar 15: %.2f kg\n", novo_peso_mais);
    printf("Novo peso se emagrecer 20: %.2f kg\n", novo_peso_menos);

    return 0;
}