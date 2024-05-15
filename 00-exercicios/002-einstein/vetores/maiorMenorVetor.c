#include <stdio.h>

int main()
{
    int vetor[3], x = 0;
    float media, somaTotal;
    int maior = vetor[0], menor = vetor[0];

    for (x = 0; x < 3; x++)
    {
        printf("\nindice\nvariavel", x);
        scanf("%i", &vetor[x]);

        somaTotal += vetor[x];

        if (maior < vetor[x])
        {
            maior = vetor[x];
        }
        else
        {
            menor = vetor[x];
        }
    }
    media = somaTotal / 3;
    printf("media e: %.2f\n", media);
    printf("o maior valor e %i", maior);
    printf("o menor vlor e %i", menor);
}
