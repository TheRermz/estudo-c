#include <stdio.h>

int main()
{
    int entrada, valorTabuada;
    printf("Ola!! Por gentileza, insira um numero :D\n");
    scanf("%i", &entrada);

    for (int i = 0; i <= 10; i++)
    {
        valorTabuada = entrada * i;
        printf("Valor de %i * %i e %i\n", entrada, i, valorTabuada);
    }
}
