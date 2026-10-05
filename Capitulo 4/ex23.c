#include <stdio.h>

int main()
{
    int codigo_produto;
    int quantidade;
    float preco_unitario;
    float preco_total;
    float percentual_desconto;
    float valor_desconto;
    float preco_final;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo_produto);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    if (codigo_produto >= 1 && codigo_produto <= 10)
    {
        preco_unitario = 10;
    }
    else if (codigo_produto <= 20)
    {
        preco_unitario = 15;
    }
    else if (codigo_produto <= 30)
    {
        preco_unitario = 20;
    }
    else if (codigo_produto <= 40)
    {
        preco_unitario = 30;
    }
    else
    {
        printf("Codigo de produto invalido.\n");
        return 0;
    }

    preco_total = preco_unitario * quantidade;

    if (preco_total <= 250)
    {
        percentual_desconto = 0.05;
    }
    else if (preco_total <= 500)
    {
        percentual_desconto = 0.10;
    }
    else
    {
        percentual_desconto = 0.15;
    }

    valor_desconto = preco_total * percentual_desconto;
    preco_final = preco_total - valor_desconto;

    printf("Preco unitario: R$ %.2f\n", preco_unitario);
    printf("Preco total: R$ %.2f\n", preco_total);
    printf("Valor do desconto: R$ %.2f\n", valor_desconto);
    printf("Preco final: R$ %.2f\n", preco_final);

    return 0;
}