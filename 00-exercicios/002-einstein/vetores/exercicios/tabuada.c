#include <stdio.h>

int main()
{
    int entrada, valorTabuada;
    printf("Olá!! Por gentileza, insira um número :D\n");
    scanf("%i", &entrada);

    for (int i = 0; i <= 10; i++)
    {
        valorTabuada = entrada * i;
        printf("Valor de %i * %i é %i\n", entrada, i, valorTabuada);
    }
}
