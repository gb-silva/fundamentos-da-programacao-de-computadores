#include <stdio.h>

int main()
{
    float salario;
    float percentual_aumento;
    float valor_aumento;
    float novo_salario;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario <= 300)
    {
        percentual_aumento = 0.15;
    }
    else if (salario <= 600)
    {
        percentual_aumento = 0.10;
    }
    else if (salario <= 900)
    {
        percentual_aumento = 0.05;
    }
    else
    {
        percentual_aumento = 0;
    }

    valor_aumento = salario * percentual_aumento;
    novo_salario = salario + valor_aumento;

    printf("Valor do aumento: R$ %.2f\n", valor_aumento);
    printf("Novo salario: R$ %.2f\n", novo_salario);

    return 0;
}