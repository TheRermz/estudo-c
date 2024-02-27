#include <stdio.h>

int main()
{
    // Fazer um programa para ler um número inteiro, e depois dizer se este número é negativo ou não
    int num;
    printf("Insira um valor e o programa dira se ele e positivo ou negativo:\n");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Negativo!\n");
    }
    else
    {
        printf("Positivo!\n");
    }

    return 0;
}
