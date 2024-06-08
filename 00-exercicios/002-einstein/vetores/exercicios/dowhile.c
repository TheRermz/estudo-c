
int main()
{
    int valor[20], maiorValor = 0, menorValor, total, i = 0;
    float media;

    do
    {
        printf("Insira o um numero:\n");
        scanf("%i", &valor[i]);

        total += valor[i];

        if (i == 0)
        {
            maiorValor = valor[i];
            menorValor = valor[i];
        }

        if (maiorValor < valor[i])
        {
            maiorValor = valor[i];
        }
        else if (menorValor > valor[i])
        {
            menorValor = valor[i];
        }
        i++;
    } while (i < 20);

    media = (float)total / 20;
    printf("Maior Valor: %i\n", maiorValor);
    printf("Menor valor: %i\n", menorValor);
    printf("Media: %f", media);
}
