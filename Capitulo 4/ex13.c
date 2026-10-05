#include <stdio.h>

int main()
{
    float preco;
    float percentual_aumento;
    float novo_preco;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    if (preco <= 50)
    {
        percentual_aumento = 0.05;
    }
    else if (preco <= 100)
    {
        percentual_aumento = 0.10;
    }
    else
    {
        percentual_aumento = 0.15;
    }

    novo_preco = preco + preco * percentual_aumento;

    printf("Novo preco: R$ %.2f\n", novo_preco);

    if (novo_preco <= 80)
    {
        printf("Classificacao: Barato\n");
    }
    else if (novo_preco <= 120)
    {
        printf("Classificacao: Normal\n");
    }
    else if (novo_preco <= 200)
    {
        printf("Classificacao: Caro\n");
    }
    else
    {
        printf("Classificacao: Muito caro\n");
    }

    return 0;
}