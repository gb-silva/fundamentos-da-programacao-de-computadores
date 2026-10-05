#include <stdio.h>

int main()
{
    float valor_produto = 0.0f;

    printf("Informe o valor do produto: ");
    scanf("%f", &valor_produto);

    float valor_com_desconto = valor_produto + (valor_produto * 0.1);

    printf("O novo valor do produto apos o desconto eh %.2f", valor_com_desconto);

    return 0;
}