#include <stdio.h>

int main()
{
    int idade = 0, contador_pessoas = 0, contador_mulheres = 0, menor_idade = 0, maior_idade = 0, menor_salario_idade = 0;
    char sexo, menor_salario_sexo;
    double salario = 0, soma = 0, media = 0, menor_salario = 0;

    printf("Informe a idade (digite um valor negativo para encerrar): ");
    scanf("%d", &idade);
    printf("Informe o sexo (M para Masculino ou F para Feminino): ");
    scanf(" %c", &sexo);
    printf("Informe o salario: ");
    scanf("%lf", &salario);

    menor_idade = idade;
    maior_idade = idade;
    menor_salario = salario;
    menor_salario_idade = idade;
    menor_salario_sexo = sexo;

    while (true)
    {
        soma += salario;
        contador_pessoas++;

        if (sexo == 'F' && salario <= 200)
        {
            contador_mulheres++;
        }

        printf("Informe a idade (digite um valor negativo para encerrar): ");
        scanf("%d", &idade);

        if (idade < 0)
        {
            break;
        }
        else
        {
            printf("Informe o sexo (M para Masculino ou F para Feminino): ");
            scanf(" %c", &sexo);
            printf("Informe o salario: ");
            scanf("%lf", &salario);
        }

        if (idade < menor_idade)
        {
            menor_idade = idade;
        }

        if (idade > maior_idade)
        {
            maior_idade = idade;
        }

        if (salario < menor_salario)
        {
            menor_salario = salario;
            menor_salario_idade = idade;
            menor_salario_sexo = sexo;
        }
    }

    media = soma / contador_pessoas;

    printf("Media dos salarios: %.2lf\n", media);
    printf("Maior e a menor idade do grupo: %d e %d\n", maior_idade, menor_idade);
    printf("Quantidade de mulheres com salario de ate 200 reais: %d\n", contador_mulheres);
    printf("Idade e o sexo da pessoa que possui o menor salario: %d e %c", menor_salario_idade, menor_salario_sexo);

    return 0;
}