#include <stdio.h>
#include <string.h>

int main()
{
    float preco, aumento, imposto, novo_preco, valor_aumento, valor_imposto;
    int categoria;
    char situacao;
    char classificacao[10];

    printf("Informe o preco do produto: ");
    scanf("%f", &preco);
    printf("Informe a categoria do produto (1 - limpeza; 2 - alimentacao; ou 3 - vestuario): ");
    scanf("%d", &categoria);
    printf("Informe a situacao do produto (R - produtos que necessitam de refrigeracao; e N - sem refrigeracao): ");
    scanf(" %c", &situacao);

    if (preco <= 25)
    {
        switch (categoria)
        {
        case 1:
            aumento = 0.05f;
            break;
        case 2:
            aumento = 0.08f;
            break;
        case 3:
            aumento = 0.1f;
            break;
        }
    }
    else if (preco > 25)
    {
        switch (categoria)
        {
        case 1:
            aumento = 0.12f;
            break;
        case 2:
            aumento = 0.15f;
            break;
        case 3:
            aumento = 0.18f;
            break;
        }
    }

    if (categoria == 2 || situacao == 'R' || situacao == 'r')
    {
        imposto = 0.05f;
    }
    else
    {
        imposto = 0.08f;
    }

    valor_aumento = preco * aumento;
    valor_imposto = preco * imposto;
    novo_preco = preco + valor_aumento - valor_imposto;

    if (novo_preco <= 50)
    {
        strcpy(classificacao, "Barato");
    }
    else if (novo_preco > 50 && novo_preco < 120)
    {
        strcpy(classificacao, "Normal");
    }
    else
    {
        strcpy(classificacao, "Caro");
    }

    // Exibição dos resultados formatados
    printf("\n--- RESULTADOS ---\n");
    printf("Valor do aumento: R$ %.2f\n", valor_aumento);
    printf("Valor do imposto: R$ %.2f\n", valor_imposto);
    printf("Novo preco: R$ %.2f\n", novo_preco);
    printf("Classificacao: %s\n", classificacao);

    return 0;
}
