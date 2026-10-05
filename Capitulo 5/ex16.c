#include <stdio.h>

int main()
{
    int idade;
    double soma = 0, qtd = 0, media = 0;

    printf("Informe sua idade (ou 0 para sair): ");
    scanf("%d", &idade);

    while (idade != 0)
    {
        soma = soma + idade;
        qtd++;

        printf("Informe sua idade (ou 0 para sair): ");
        scanf("%d", &idade);
    }

    if (qtd > 0)
    {
        media = soma / qtd;
        printf("\nA media das idades digitadas foi de: %.2lf\n", media);
    }
    else
    {
        printf("\nNenhuma idade valida foi digitada.\n");
    }

    return 0;
}
