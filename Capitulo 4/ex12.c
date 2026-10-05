#include <stdio.h>

int main()
{
    float salario_bruto;
    float gratificacao;
    float salario_com_gratificacao;
    float imposto;
    float valor_receber;

    printf("Digite o salario bruto: ");
    scanf("%f", &salario_bruto);

    if (salario_bruto <= 350)
    {
        gratificacao = 100;
    }
    else if (salario_bruto <= 600)
    {
        gratificacao = 75;
    }
    else if (salario_bruto <= 900)
    {
        gratificacao = 50;
    }
    else
    {
        gratificacao = 35;
    }

    salario_com_gratificacao = salario_bruto + gratificacao;
    imposto = salario_com_gratificacao * 0.07;
    valor_receber = salario_com_gratificacao - imposto;

    printf("Valor da gratificacao: R$ %.2f\n", gratificacao);
    printf("Valor a receber: R$ %.2f\n", valor_receber);

    return 0;
}