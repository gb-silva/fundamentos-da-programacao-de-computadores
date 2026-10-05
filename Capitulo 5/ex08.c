#include <stdio.h>

int main()
{
    int idade, contador = 0, qtd1 = 0, qtd2 = 0, qtd3 = 0;
    double peso, altura, soma = 0.0, media = 0.0, porcentagem = 0.0;
    char cor_dos_olhos, cor_dos_cabelos;

    for (int i = 0; i < 6; i++)
    {
        printf("Pessoa %d\n", i + 1);
        printf("Informe a idade: ");
        scanf("%d", &idade);
        printf("Informe o peso: ");
        scanf("%lf", &peso);
        printf("Informe a altura: ");
        scanf("%lf", &altura);
        printf("Informe a cor dos olhos: ");
        scanf(" %c", &cor_dos_olhos);
        printf("Informe a cor dos cabelos: ");
        scanf(" %c", &cor_dos_cabelos);

        if (idade > 50 && peso < 60)
        {
            contador++;
        }

        if (altura < 1.5)
        {
            soma = soma + idade;
            qtd1++;
        }

        if (cor_dos_olhos == 'A')
        {
            qtd2++;
        }

        if (cor_dos_cabelos == 'R' && cor_dos_olhos != 'A')
        {
            qtd3++;
        }
    }

    if (qtd1 > 0)
    {
        media = soma / qtd1;
    }

    porcentagem = (qtd2 / 6.0) * 100;

    printf("A quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg: %d\n", contador);
    printf("Media das idades das pessoas com altura inferior a 1,50 m: %lf\n", media);
    printf("Porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas: %.2lf\n", porcentagem);
    printf("Quantidade de pessoas ruivas e que nao possuem olhos azuis: %d\n", qtd3);

    return 0;
}
