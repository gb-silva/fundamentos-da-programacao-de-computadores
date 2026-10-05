#include <stdio.h>

int main()
{
    int idade;
    float peso;
    int grupo_risco;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o peso: ");
    scanf("%f", &peso);

    if (idade < 20)
    {
        if (peso <= 60)
        {
            grupo_risco = 9;
        }
        else if (peso <= 90)
        {
            grupo_risco = 8;
        }
        else
        {
            grupo_risco = 7;
        }
    }
    else if (idade <= 50)
    {
        if (peso <= 60)
        {
            grupo_risco = 6;
        }
        else if (peso <= 90)
        {
            grupo_risco = 5;
        }
        else
        {
            grupo_risco = 4;
        }
    }
    else
    {
        if (peso <= 60)
        {
            grupo_risco = 3;
        }
        else if (peso <= 90)
        {
            grupo_risco = 2;
        }
        else
        {
            grupo_risco = 1;
        }
    }

    printf("Grupo de risco: %d\n", grupo_risco);

    return 0;
}