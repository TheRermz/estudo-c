#include <stdio.h>

int main()
{
    // Faca um programa que imprima a quantidade de numeros pares de 1 a 30.
    int i = 0;
    while (i <= 30)
    {
        if (i % 2 == 0)
        {
            printf("%i\n", i);
        }
        i++;
    }
}
