#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Existem alguns tipos de loops\n");
    printf("for, while e do...while\n");
    printf("todo loop precisa de uma inicialização (variavel) \n");
    printf("uma comparação \n");
    printf("e um update\n");

    // exemplo básico
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", i);
    }

    // exemplo

    int ages[] = {12, 46, 54, 3, 4, 55, 6, 7, 87, 12};
    int ageLength = sizeof(ages) / sizeof(ages[0]); // método não funciona dentro de uma função
    for (int i = 0; i < ageLength; i++)

    {
        printf("ages[i] = %d\n", ages[i]);
    }

    // loops dentro de loops

    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    // while loops

    int uai = 0;
    while (uai < 10)
    {
        // code
        printf("%d ", uai);
        uai++;
    }

    // do...while

    int input;
    do
    {
        printf("Escolha um número entre 0 e 9: ");
        scanf("%d", &input);
        if (input > 0 && input < 9)
        {
            printf("nice");
        }
    } while (input < 0 || input > 9);

    return 0;
}
