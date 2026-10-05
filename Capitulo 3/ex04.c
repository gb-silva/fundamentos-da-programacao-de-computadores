#include <stdio.h>

int main()
{
    float nota1 = 0.0f;
    float nota2 = 0.0f;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    float resultado = ((nota1 * 2) + (nota2 * 3)) / 5.0f;
    printf("A media do aluno foi de %.2f", resultado); // exibe a variável resultado com apenas duas casas decimais

    return 0;
}