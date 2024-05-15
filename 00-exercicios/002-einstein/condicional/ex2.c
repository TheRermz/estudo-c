#include <stdio.h>

int main()
{
    // Crie um algoritmo que leia quatro valores digitados pelo usuário: n, a, b, c. a) Se n = 1 imprimir os três valores a, b, c em ordem crescente.  b) Se n = 2 escrever os três valores a, b, c em ordem decrescente.  c) Se n = 3 escrever os três valores a, b, c de forma que o maior fique no meio

    int n, a, b, c;
    printf("Insira um valor entre 1 para crescente, 2 para decrescente e 3 para o maior no meio\n");
    scanf("%i", &n);
    printf("Insira qualquer valor\n");
    scanf("%i", &a);
    printf("Insira mais um valor\n");
    scanf("%i", &b);
    printf("Insira o ultimo valor\n");
    scanf("%i", &c);

    switch (n)
    {
    case 1:
        // decrescente
        if (a > b && b > c)
        {
            printf("Os valores sao %i, %i, %i\n", c, b, a);
        }
        else if (b > a && a > c)
        {
            printf("Os valores sao %i, %i, %i\n", c, a, b);
        }
        else if (c > a && a > b)
        {
            printf("Os valores sao %i, %i, %i\n", b, a, c);
        }
        else if (b > c && c > a)
        {
            printf("Os valores sao %i, %i, %i\n", a, c, b);
        }
        else
        {
            printf("Os valores sao %i, %i, %i\n", a, b, c);
        }
        break;
    case 2:
        // crescente
        if (a > b && b > c)
        {
            printf("Os valores sao %i, %i, %i\n", a, b, c);
        }
        else if (b > a && a > c)
        {
            printf("Os valores sao %i, %i, %i\n", b, a, c);
        }
        else if (c > a && a > b)
        {
            printf("Os valores sao %i, %i, %i\n", c, a, b);
        }
        else if (b > c && c > a)
        {
            printf("Os valores sao %i, %i, %i\n", b, c, a);
        }
        else
        {
            printf("Os valores sao %i, %i, %i\n", c, b, a);
        }
        break;

    case 3:
        // maior no meio
        if (a > b && b > c) // a > b > c
        {
            printf("Os valores sao %i, %i, %i\n", c, a, b);
        }
        else if (b > a && a > c) // b > a > c
        {
            printf("Os valores sao %i, %i, %i\n", c, b, a);
        }
        else if (c > a && a > b) // c > a > b
        {
            printf("Os valores sao %i, %i, %i\n", b, c, a);
        }
        else if (b > c && c > a) // b > c > a
        {
            printf("Os valores sao %i, %i, %i\n", a, b, c);
        }
        else
        {
            printf("Os valores sao %i, %i, %i\n", a, c, b);
        }
        break;
    }
}
