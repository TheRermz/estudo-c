#include <stdio.h>

int main()
{
    int valor[30], resultado[30];

    for (int i = 0; i < 30; i++)
    {
        printf("Digite um valor:\n");
        scanf("%i", &valor[i]);

        if (valor[i] % 2 == 0)
        {
            resultado[i] = valor[i] * 2;
        }
        else
        {
            resultado[i] = valor[i] * 3;
        }
    }
    for (int i = 0; i < 30; i++)
    {

        if (valor[i] % 2 == 0)
        {
            printf("Dobro de %i e %i\n", valor[i], resultado[i]);
        }
        else
        {
            printf("Triplo de %i e %i\n", valor[i], resultado[i]);
        }
    }
}
