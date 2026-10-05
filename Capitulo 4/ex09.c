#include <stdio.h>

int main()
{
    float saldo_medio;
    float valor_credito;

    printf("Digite o saldo medio: ");
    scanf("%f", &saldo_medio);

    if (saldo_medio > 400)
    {
        valor_credito = saldo_medio * 0.30;
    }
    else if (saldo_medio >= 300)
    {
        valor_credito = saldo_medio * 0.25;
    }
    else if (saldo_medio >= 200)
    {
        valor_credito = saldo_medio * 0.20;
    }
    else
    {
        valor_credito = saldo_medio * 0.10;
    }

    printf("Saldo medio: R$ %.2f\n", saldo_medio);
    printf("Valor do credito: R$ %.2f\n", valor_credito);

    return 0;
}