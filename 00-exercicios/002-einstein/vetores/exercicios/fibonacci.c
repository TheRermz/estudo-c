#include <stdio.h>

int main()
{
    // A s�rie de Fibonacci � formada pela seguinte sequ�ncia: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, etc.
    // Escreva um algoritmo que gere a s�rie de Fibonacci at� o vig�simo termo.
    int anterior = 0, fibonacci = 1, temp;

    printf("A sequ�ncia de Fibonacci at� o vig�simo termo �:\n");

    for (int i = 1; i <= 20; i++)
    {
        printf("%d\n", fibonacci);
        temp = fibonacci;
        fibonacci = fibonacci + anterior;
        anterior = temp;
    }

    return 0;
}
