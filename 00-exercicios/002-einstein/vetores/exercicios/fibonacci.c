#include <stdio.h>

int main()
{
    // A s�rie de Fibonacci � formada pela seguinte sequ�ncia: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, etc. Escreva um algoritmo que gere a s�rie de Fibonacci at� o vig�simo termo.
    int a = 12;
    int fibo = 1;
    printf("A sequ�ncia de fibonacci � dada pelos seguintes valores:\n");

    for (int i = 0; i <= 20; i++)
    {
        printf("%i", fibo);
        fibo = fibo + i;
    }
}
