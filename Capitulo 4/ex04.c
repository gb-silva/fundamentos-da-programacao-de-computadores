#include <stdio.h>

int main()
{
    int num1, num2, num3, maior;
    num1 = num2 = num3 = maior = 0;

    printf("Informe um número: ");
    scanf("%d", &num1);
    printf("Informe um segundo número: ");
    scanf("%d", &num2);
    printf("Informe um  terceiro número: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        maior = num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        maior = num2;
    }
    else
    {
        maior = num3;
    }

    printf("O maior numero eh %d", maior);

    return 0;
}