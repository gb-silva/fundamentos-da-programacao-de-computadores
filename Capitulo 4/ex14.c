#include <stdio.h>

int main()
{
    float salario;
    float percentual_aumento;
    float novo_salario;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario <= 300)
    {
        percentual_aumento = 0.50;
    }
    else if (salario <= 500)
    {
        percentual_aumento = 0.40;
    }
    else if (salario <= 700)
    {
        percentual_aumento = 0.30;
    }
    else if (salario <= 800)
    {
        percentual_aumento = 0.20;
    }
    else if (salario <= 1000)
    {
        percentual_aumento = 0.10;
    }
    else
    {
        percentual_aumento = 0.05;
    }

    novo_salario = salario + salario * percentual_aumento;

    printf("Novo salario: R$ %.2f\n", novo_salario);

    return 0;
}