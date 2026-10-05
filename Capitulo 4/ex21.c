#include <stdio.h>

int main()
{
    float preco;
    int codigo_origem;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite o codigo de origem: ");
    scanf("%d", &codigo_origem);

    printf("Preco: R$ %.2f\n", preco);

    if (codigo_origem == 1)
    {
        printf("Procedencia: Sul\n");
    }
    else if (codigo_origem == 2)
    {
        printf("Procedencia: Norte\n");
    }
    else if (codigo_origem == 3)
    {
        printf("Procedencia: Leste\n");
    }
    else if (codigo_origem == 4)
    {
        printf("Procedencia: Oeste\n");
    }
    else if (codigo_origem == 5 || codigo_origem == 6)
    {
        printf("Procedencia: Nordeste\n");
    }
    else if (codigo_origem >= 7 && codigo_origem <= 9)
    {
        printf("Procedencia: Sudeste\n");
    }
    else if (codigo_origem >= 10 && codigo_origem <= 20)
    {
        printf("Procedencia: Centro-oeste\n");
    }
    else if (codigo_origem >= 21 && codigo_origem <= 30)
    {
        printf("Procedencia: Nordeste\n");
    }
    else
    {
        printf("Codigo de origem invalido.\n");
    }

    return 0;
}