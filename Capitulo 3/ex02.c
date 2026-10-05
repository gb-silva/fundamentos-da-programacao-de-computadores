#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite um segundo numero: ");
    scanf("%d", &num2);
    printf("Digite um terceiro numero: ");
    scanf("%d", &num3);
    printf("A multiplicacao dos numeros eh %d", num1 * num2 * num3);
}