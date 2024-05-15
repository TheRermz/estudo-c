#include <stdio.h>

int main()
{
    // Tendo como entrada de dados a altura e o sexo de uma pessoa, construa um algoritmo que calcule o peso ideal, utilizando as seguintes fórmulas: Homens: (72.7 * h) ? 58    Mulheres: (62.1 * h) - 44.7

    float h, pesoIdeal;
    int s;
    printf("Insira sua altura e seu sexo.");
    printf("Insira a altura");
    scanf("%f", &h);
    print("Para homem digite 1, para mulher digite 2");
    scanf("%i", &s);
    switch (s)
    {
    case 1:
        pesoIdeal = (72.7 * h) - 58;
        printf("Seu peso ideal e: %.2f", pesoIdeal);
        break;

    case 2:
        pesoIdeal = (62.1 * h) - 44.7;
        printf("Seu peso ideal e: %.2f", pesoIdeal);
        break;

    default:
        printf("Insira um valor valido");
        break;
    }
}
