#include <stdio.h>

int main()
{
    int v1[5], v2[5], v3[5], soma = 0;

    for (int i = 0; i < 2; i++)
    {
        printf("Digite a o valor:\n");
        scanf("%i", &v1[i]);

        printf("Digite um segundo valor:\n");
        scanf("%i", &v2[i]);

        soma = v1[i] + v2[i];
        v3[i] = soma;
    }
    for (int i = 0; i < 2; i++)
    {
        //
        printf("\nv1: %i", v1[i]);
        printf("\nv2: %i", v2[i]);
        printf("\nv3(soma v1 + v2): %i", v3[i]);
    }
}
