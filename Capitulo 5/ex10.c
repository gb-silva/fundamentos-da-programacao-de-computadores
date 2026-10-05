#include <stdio.h>

int main()
{
    int numero, soma_par = 0, soma_primo = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Informe o %d numero: ", i + 1);
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            soma_par = soma_par + numero;
        }

        int eh_primo = 1;

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
        }

        if (eh_primo == 1)
        {
            soma_primo = soma_primo + numero;
        }
    }

    printf("Soma dos numeros pares: %d\n", soma_par);
    printf("Soma dos numeros primos: %d\n", soma_primo);

    return 0;
}
