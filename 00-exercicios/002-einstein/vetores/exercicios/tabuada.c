#include <stdio.h>

int main()
{
    int entrada, valorTabuada;
    printf("Ol�!! Por gentileza, insira um n�mero :D\n");
    scanf("%i", &entrada);

    for (int i = 0; i <= 10; i++)
    {
        valorTabuada = entrada * i;
        printf("Valor de %i * %i � %i\n", entrada, i, valorTabuada);
    }
}
