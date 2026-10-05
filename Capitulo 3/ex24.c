#include <stdio.h>

int main()
{
    float reais, dolares, marcos, libras;

    printf("Digite a quantidade de dinheiro em reais: ");
    scanf("%f", &reais);

    dolares = reais / 1.80;
    marcos = reais / 2.00;
    libras = reais / 3.57;

    printf("Dolares: US$ %.2f\n", dolares);
    printf("Marcos alemaes: DM %.2f\n", marcos);
    printf("Libras esterlinas: £ %.2f\n", libras);

    return 0;
}