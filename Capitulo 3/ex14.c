#include <stdio.h>

int main()
{
    int ano_nascimento, ano_atual, idade_anos, idade_meses, idade_dias, idade_semanas;

    printf("Digite o ano de nascimento e o ano atual: ");
    scanf("%d %d", &ano_nascimento, &ano_atual);

    idade_anos = ano_atual - ano_nascimento;
    idade_meses = idade_anos * 12;
    idade_dias = idade_anos * 365;
    idade_semanas = idade_dias / 7;

    printf("Idade em anos: %d\n", idade_anos);
    printf("Idade em meses: %d\n", idade_meses);
    printf("Idade em dias: %d\n", idade_dias);
    printf("Idade em semanas: %d\n", idade_semanas);

    return 0;
}