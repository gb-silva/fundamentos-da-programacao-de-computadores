#include <stdio.h>

int main()
{
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade < 5)
    {
        printf("Idade inferior a 5 anos.\n");
    }
    else if (idade <= 7)
    {
        printf("Categoria: Infantil\n");
    }
    else if (idade <= 10)
    {
        printf("Categoria: Juvenil\n");
    }
    else if (idade <= 15)
    {
        printf("Categoria: Adolescente\n");
    }
    else if (idade <= 30)
    {
        printf("Categoria: Adulto\n");
    }
    else
    {
        printf("Categoria: Senior\n");
    }

    return 0;
}