#include <stdio.h>

int main()
{
    int numero, resultado;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (int contador = 0; contador <= 10; contador++)
    {
        resultado = numero * contador;
        printf("%d x %d = %d\n", numero, contador, resultado);
    }

    return 0;
}