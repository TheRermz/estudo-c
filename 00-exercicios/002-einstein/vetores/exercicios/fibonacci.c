#include <stdio.h>

int main()
{
    // A série de Fibonacci é formada pela seguinte sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, etc. Escreva um algoritmo que gere a série de Fibonacci até o vigésimo termo.
    int a = 12;
    int fibo = 1;
    printf("A sequência de fibonacci é dada pelos seguintes valores:\n");

    for (int i = 0; i <= 20; i++)
    {
        printf("%i", fibo);
        fibo = fibo + i;
    }
}
