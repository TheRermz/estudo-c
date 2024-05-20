#include <stdio.h>

int main()
{
    // A série de Fibonacci é formada pela seguinte sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, etc.
    // Escreva um algoritmo que gere a série de Fibonacci até o vigésimo termo.
    int anterior = 0, fibonacci = 1, temp;

    printf("A sequência de Fibonacci até o vigésimo termo é:\n");

    for (int i = 1; i <= 20; i++)
    {
        printf("%d\n", fibonacci);
        temp = fibonacci;
        fibonacci = fibonacci + anterior;
        anterior = temp;
    }

    return 0;
}
