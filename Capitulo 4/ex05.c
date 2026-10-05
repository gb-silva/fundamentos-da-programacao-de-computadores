#include <stdio.h>

int main()
{
    float num1;
    float num2;
    int escolha;

    printf("Informe uma opção de 1 a 4: ");
    scanf("%d", escolha);

    if (escolha == 1)
    {
        float media = (num1 + num2) / 2.f;
        printf("Media dos numeros: %.2f", media);
    }
    else if (escolha == 2)
    {
        int maior, menor;

        if (num1 < num2)
        {
            menor = num1;
            maior = num2;
        }
        else
        {
            menor = num2;
            maior = num1;
        }
        float diferenca = maior - menor;
        printf("Diferenca do maior pelo menor: %.2f", diferenca);
    }
    else if (escolha == 3)
    {
        float produto = num1 * num2;
        printf("Produto entre os numeros: %.2f", produto);
    }
    else if (escolha == 4)
    {
        float divisao;

        if (num2 == 0)
        {
            printf("O segundo numero deve ser diferente de zero!");
        }
        else
        {
            divisao = num1 / num2;
            printf("A divisao do primeiro pelo segundo eh: %f", divisao);
        }
    }
    else
    {
        printf("Opcao invalida!");
    }

    return 0;
}