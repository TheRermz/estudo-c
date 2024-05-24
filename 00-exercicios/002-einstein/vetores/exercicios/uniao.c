#include <stdio.h>

//  Construa um programa em C que permita informar dados para 2 vetores inteiros de 20 posicoes e apresente o conjunto de uniAo dos vetores. Lembrando que conjunto de uniao sAo todos os elementos que existem em ambos os vetores, mas sem repeticao (cada umero pode aparecer uma unica vez no resultado).

int main()
{
    int vetorA[5], vetorB[5], vetorC[10];
    int tamUniao = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Ola!! Por favor insira um valor para o vetorA[%i]\n", i);
        scanf("%i", &vetorA[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Boa! Agora, por favor insira um valor para o vetorB[%i]\n", i);
        scanf("%i", &vetorB[i]);
    }

    // itens vetor a em vetor c
    for (int i = 0; i < 10; i++)
    {
        int repete = 0;
        for (int j = 0; j < tamUniao; j++)
        {
            if (vetorC[j] == vetorA[i])
            {
                repete = 1;
                break;
            }
        }
        if (!repete)
        {
            vetorC[tamUniao++] = vetorA[i];
        }
    }

    // itens vetor b em vetor c

    for (int i = 0; i < 10; i++)
    {
        int repete = 0;
        for (int j = 0; j < tamUniao; j++)
        {
            if (vetorC[j] == vetorB[i])
            {
                repete = 1;
                break;
            }
        }
        if (!repete)
        {
            vetorC[tamUniao++] = vetorB[i];
        }
    }

    printf("Conjunto de uniao:\n");
    for (int i = 0; i < tamUniao; i++)
    {
        printf("%i\n", vetorC[i]);
    }
}
