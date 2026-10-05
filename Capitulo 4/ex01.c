#include <stdio.h>

int main()
{
    float nota1 = 0.0f;
    float nota2 = 0.0f;
    float nota3 = 0.0f;
    float nota4 = 0.0f;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    float media = (nota1 + nota2 + nota3 + nota4) / 4.f;

    if (media > 7)
    {
        printf("Aprovado!");
    }
    else
    {
        printf("Reprovado!");
    }

    return 0;
}