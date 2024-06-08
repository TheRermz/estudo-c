#include <stdio.h>

int main()
{
    // A serie de Fibonacci e formada pela seguinte sequencia: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, etc.
    // Escreva um algoritmo que gere a serie de Fibonacci ate o vigesimo termo.
    int anterior = 0, fibonacci = 1, temp;

    printf("A sequencia de Fibonacci ate o vigesimo termo e:\n");

    for (int i = 1; i <= 20; i++)
    {
        printf("%d\n", fibonacci);
        temp = fibonacci;
        fibonacci = fibonacci + anterior;
        anterior = temp;
    }

    return 0;
}
