#include <stdio.h>

int main()
{
    float salario;
    float salario_reajustado;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario < 500)
    {
        salario_reajustado = salario + salario * 0.30;
        printf("Salario reajustado: R$ %.2f\n", salario_reajustado);
    }
    else
    {
        printf("Funcionario nao tem direito ao aumento.\n");
    }

    return 0;
}