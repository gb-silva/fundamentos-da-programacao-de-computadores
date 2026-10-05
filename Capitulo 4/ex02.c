#include <stdio.h>

int main()
{
    float nota1 = 0.0f;
    float nota2 = 0.0f;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    float media = (nota1 + nota2) / 2.f;

    if (media >= 0 && media < 3)
    {
        printf("Reprovado!");
    }
    else if (media >= 3 && media < 7)
    {
        printf("Exame");
    }
    else
    {
        printf("Aprovado!");
    }

    return 0;
}