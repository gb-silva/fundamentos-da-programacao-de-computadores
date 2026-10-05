#include <stdio.h>
#include <math.h> // funções aritméticas elementares como potenciação

int main()
{
    double num1, num2, potencia, raizq1, raizq2, raizc1, raizc2;
    int opcao;

    printf("Digite um numero: ");
    scanf("%lf", &num1);
    printf("Digite um segundo numero: ");
    scanf("%lf", &num2);
    printf("Informe uma opcao de 1 a 3: ");
    scanf("%lf", &opcao);

    switch (opcao)
    {
    case 1:
        potencia = pow(num1, num2);
        printf("O primeiro numero ellevado ao segundo eh %lf", potencia);
        break;
    case 2:
        raizq1 = sqrt(num1);
        raizq2 = sqrt(num2);
        printf("Raiz quadrada de %lf e %lf sao %.2lf, %.2lf", num1, num2, raizq1, raizq2);
        break;
    case 3:
        raizc1 = pow(num1, 1.0 / 3.0); // elevar um numero a uma fração é o mesmo que tirar a raiz enésima desse número
        raizc2 = pow(num2, 1.0 / 3.0);
        printf("Raiz quadrada de %lf e %lf sao %.2lf, %.2lf", num1, num2, raizc1, raizc2);
        break;
    default:
        printf("Opcao invalida");
        break;
    }

    return 0;
}