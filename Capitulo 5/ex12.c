#include <stdio.h>

int main()
{
    int numero, contador_primos;
    numero = contador_primos = 0;

    for (int i = 0; i < 10; i++)
    {
        int eh_primo = 1;

        printf("Informe o %d numero: ", i + 1);
        scanf("%d", &numero);

        if (numero <= 1)
        {
            eh_primo = 0;
        }
        else
        {
            for (int j = 2; j < numero; j++)
            {
                if (numero % j == 0)
                {
                    eh_primo = 0;
                    break;
                }
            }

            if (eh_primo == 1)
            {
                contador_primos++;
            }
        }
    }

    printf("Quantidade de numeros primos digitados: %d", contador_primos);
}