#include <stdio.h>

int main()
{
    // Fazer um programa para ler um número inteiro e dizer se este número é par ou ímpar
    int num;

    printf("Escreva um numero e o programa dira se e par ou impar\n");
    scanf("%d", &num);

    int mod = num % 2;
    printf("mod %d\n", mod);
    if (mod)
    {
        printf("impar");
    }
    else
    {
        printf("par");
    }
    return 0;
}
