#include <stdio.h>

int main()
{
    float preco_atual;
    float percentual_desconto;
    float valor_desconto;
    float novo_preco;

    printf("Digite o preco atual: ");
    scanf("%f", &preco_atual);

    if (preco_atual <= 30)
    {
        percentual_desconto = 0;
    }
    else if (preco_atual <= 100)
    {
        percentual_desconto = 0.10;
    }
    else
    {
        percentual_desconto = 0.15;
    }

    valor_desconto = preco_atual * percentual_desconto;
    novo_preco = preco_atual - valor_desconto;

    printf("Valor do desconto: R$ %.2f\n", valor_desconto);
    printf("Novo preco: R$ %.2f\n", novo_preco);

    return 0;
}