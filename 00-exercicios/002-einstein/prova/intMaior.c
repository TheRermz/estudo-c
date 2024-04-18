#include <stdio.h>

int main()
{
    // 2.	Faca um programa em C, que receba dois numeros inteiros e mostre na tela o maior valor.

    int n1, n2;

    printf("Buenas! Digite dois valores e lhe mostrarei o maior:\n");
    scanf("%i %i", &n1, &n2);

    if (n1 > n2)
    {
        printf("%i", n1);
    }

    else
    {
        printf("%i", n2);
    }
}
