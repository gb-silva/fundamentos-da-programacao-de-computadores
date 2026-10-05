#include <stdio.h>

int main()
{
    float h, num_horas_extras, num_horas_falta, premio;

    printf("Informe o numero de horas extras: ");
    scanf("%f", &num_horas_extras);
    printf("Informe o numero de horas que faltou ao trabalho: ");
    scanf("%f", &num_horas_falta);

    num_horas_extras = num_horas_extras * 60;
    num_horas_falta = num_horas_falta * 60;

    h = (num_horas_extras - ((2.0 / 3.0) * (num_horas_falta)));

    if (h >= 2400)
    {
        premio = 500;
    }
    else if (h > 1800 && h < 2400)
    {
        premio = 400;
    }
    else if (h >= 1200 && h < 1800)
    {
        premio = 300;
    }
    else if (h >= 600 && h < 1200)
    {
        premio = 200;
    }
    else
    {
        premio = 100;
    }

    printf("Valor do premio: %.2f", premio);

    return 0;
}
