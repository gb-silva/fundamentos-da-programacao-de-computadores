#include <stdio.h>

int main()
{
    int tipo_investimento;
    float valor_investimento;
    float valor_corrigido;

    printf("Digite o tipo de investimento (1 ou 2): ");
    scanf("%d", &tipo_investimento);

    printf("Digite o valor do investimento: ");
    scanf("%f", &valor_investimento);

    switch (tipo_investimento)
    {
    case 1:
        valor_corrigido = valor_investimento + valor_investimento * 0.03;
        break;

    case 2:
        valor_corrigido = valor_investimento + valor_investimento * 0.04;
        break;

    default:
        printf("Tipo de investimento invalido.\n");
        return 0;
    }

    printf("Valor corrigido: R$ %.2f\n", valor_corrigido);

    return 0;
}