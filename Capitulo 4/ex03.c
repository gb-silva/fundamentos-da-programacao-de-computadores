#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int menor;

    printf("Informe um número: ");
    scanf("%d", &num1);
    printf("Informe um segundo número: ");
    scanf("%d", &num2);

    if (num1 < num2)
    {
        menor = num1;
    }
    else
    {
        menor = num2;
    }

    printf("O menor numero eh %d", menor);

    return 0;
}