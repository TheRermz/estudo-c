#include <stdio.h>
#include <math.h>
int main()
{
    // Escreva um programa que imprima o quadrado de todos os inteiros de 1 a 20.
    int i = 0;
    int numero = 0;

    while (i <= 20)
    {
        printf("%i\n", numero * numero);
        numero++;
        i++;
    }
}
