#include <stdio.h>

int main()
{
    float horas_trabalhadas, salario_minimo, horas_extras;
    float valor_hora_trab, valor_hora_extra, salario_bruto, valor_extras, salario_receber;

    printf("Digite as horas trabalhadas, o salario minimo e as horas extras: ");
    scanf("%f %f %f", &horas_trabalhadas, &salario_minimo, &horas_extras);

    valor_hora_trab = salario_minimo / 8.0;
    valor_hora_extra = salario_minimo / 4.0;
    salario_bruto = horas_trabalhadas * valor_hora_trab;
    valor_extras = horas_extras * valor_hora_extra;
    salario_receber = salario_bruto + valor_extras;

    printf("Salario a receber: R$ %.2f\n", salario_receber);

    return 0;
}