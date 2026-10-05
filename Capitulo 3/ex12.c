#include <stdio.h>

int main()
{
    float salario_minimo, salario_funcionario, qtd_salarios;

    printf("Digite o valor do salario minimo e o salario do funcionario: ");
    scanf("%f %f", &salario_minimo, &salario_funcionario);

    qtd_salarios = salario_funcionario / salario_minimo;

    printf("O funcionario recebe %.2f salarios minimos.\n", qtd_salarios);

    return 0;
}