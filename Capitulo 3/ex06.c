#include <stdio.h>

int main()
{
    float salario_fixo, valor_vendas, comissao, salario_final;

    printf("Digite o salario fixo: ");
    scanf("%f", &salario_fixo);
    printf("Digite o valor das vendas: ");
    scanf("%f", &valor_vendas);

    comissao = valor_vendas * 0.04;
    salario_final = salario_fixo + comissao;

    printf("Comissao: R$ %.2f\n", comissao);
    printf("Salario final: R$ %.2f\n", salario_final);

    return 0;
}