#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int validarNumerico(const char *entrada)
{
    while (*entrada)
    {
        if (!isdigit(*entrada) && *entrada != '.' && *entrada != '-' && *entrada != ',')
        {
            return 0; // Retorna 0 se encontrar um caractere nao e permitido
        }
        entrada++;
    }
    return 1; // Retorna 1 se toda a string contiver apenas digito, um ponto decimal ou um sinal de menos
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, media;
    char pimba[100], pimba2[100];
    int i = 0;
    char menu[100] = "Ola tudo bem com voce? Pressione 1 para calcular a media e pressione 2 para sair!!\n";

    while (i != 2)

    {
        printf(menu);
        scanf("%i", &i);

        switch (i)
        {
        case 1:
            printf("Insira uma nota :]\n");
            scanf("%s", pimba);

            printf("Insira a segunda nota :]\n");
            scanf("%s", pimba2);

            if (!validarNumerico(pimba))
            {
                printf("Por favor insira uma nota valida >:[");
                return 1;
            }
            else
            {
                nota1 = atof(pimba);
            }

            if (!validarNumerico(pimba2))
            {
                printf("Por favor insira uma nota valida >:[");

                return 1;
            }
            else
            {
                nota2 = atof(pimba2);
            }

            media = (nota1 + nota2) / 2;
            printf("A media sera %.2f\n", media);

            break;

        default:
            break;
        }
    }
}
