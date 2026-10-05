#include <stdio.h>

int main()
{
    float custo_fabrica;
    float percentual_distribuidor;
    float percentual_impostos;
    float preco_consumidor;

    printf("Digite o custo de fabrica: ");
    scanf("%f", &custo_fabrica);

    if (custo_fabrica <= 12000)
    {
        percentual_distribuidor = 0.05;
        percentual_impostos = 0;
    }
    else if (custo_fabrica <= 25000)
    {
        percentual_distribuidor = 0.10;
        percentual_impostos = 0.15;
    }
    else
    {
        percentual_distribuidor = 0.15;
        percentual_impostos = 0.20;
    }

    preco_consumidor = custo_fabrica + custo_fabrica * percentual_distribuidor + custo_fabrica * percentual_impostos;

    printf("Preco ao consumidor: R$ %.2f\n", preco_consumidor);

    return 0;
}