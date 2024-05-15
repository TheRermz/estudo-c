#include <stdio.h>

int main()
{
    int entrada;
    printf("Digite um valor inteiro\n");
    scanf("%d", &entrada);
    float valor = 1.23;

    for (valor; valor < entrada; valor += 1.98)
    {
        printf("%.2f\n", valor);
    }
}
