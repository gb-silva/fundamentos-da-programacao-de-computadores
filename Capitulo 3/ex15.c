#include <stdio.h>

int main()
{
    float salario, conta1, conta2, total_restante;

    printf("Digite o salario e o valor das duas contas: ");
    scanf("%f %f %f", &salario, &conta1, &conta2);

    total_restante = salario - ((conta1 * 1.02) + (conta2 * 1.02));

    printf("Restara do salario: R$ %.2f\n", total_restante);

    return 0;
}