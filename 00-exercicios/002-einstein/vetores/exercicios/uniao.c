#include <stdio.h>

//  Construa um programa em C que permita informar dados para 2 vetores inteiros de 20 posições e apresente o conjunto de união dos vetores. Lembrando que conjunto de união são todos os elementos que existem em ambos os vetores, mas sem repetição (cada número pode aparecer uma única vez no resultado).

int main()
{
    int vetorA[5], vetorB[5], vetorC[10];

    for (int i = 0; i < 5; i++)
    {
        printf("Ola!! Por favor, insira um valor\n");
        scanf("%i", &vetorA[i]);
        vetorC[i] = vetorA[i];
        printf("Por gentileza, insira mais um valor\n");
        scanf("%i", &vetorB[i]);
        vetorC[i + 5] = vetorB[i];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%i", vetorC[i]);
    }
}
