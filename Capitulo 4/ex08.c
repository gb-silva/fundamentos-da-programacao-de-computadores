#include <stdio.h>

int main()
{
    float salario;
    float salario_reajustado;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario <= 300)
    {
        salario_reajustado = salario + salario * 0.35;
    }
    else
    {
        salario_reajustado = salario + salario * 0.15;
    }

    printf("Salario reajustado: R$ %.2f\n", salario_reajustado);

    return 0;
}