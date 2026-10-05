#include <stdio.h>

int main()
{
    int opcao = 0, em_execucao = 1;
    double nota1, nota2, nota3, soma, peso1, peso2, peso3, media;
    nota1 = nota2 = nota3 = soma = peso1 = peso2 = peso3 = media = 0;

    printf("Menu de opcoes:\n1. Media aritmetica\n2. Media Ponderada\n3. Sair\n");

    while (em_execucao == 1)
    {
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Informe a primeira nota: ");
            scanf("%lf", &nota1);
            printf("Informe a segunda nota: ");
            scanf("%lf", &nota2);

            media = (nota1 + nota2) / 2;
            printf("Media aritmetica dos numeros: %.2lf\n", media);
            break;
        case 2:
            printf("Informe a primeira nota: ");
            scanf("%lf", &nota1);
            printf("Informe a segunda nota: ");
            scanf("%lf", &nota2);
            printf("Informe a terceira nota: ");
            scanf("%lf", &nota3);

            printf("Informe o peso da primeira nota: ");
            scanf("%lf", &peso1);
            printf("Informe o peso da segunda nota: ");
            scanf("%lf", &peso2);
            printf("Informe o peso da terceira nota: ");
            scanf("%lf", &peso3);

            media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);
            printf("A media ponderada eh: %.2lf\n", media);
            break;
        case 3:
            em_execucao = 0;
            break;
        default:
            em_execucao = 0;
            printf("Opcao invalida! Encerrando o programa...");
            break;
        }
    }

    return 0;
}