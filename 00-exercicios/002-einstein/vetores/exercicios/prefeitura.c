#include <stdio.h>

int main()
{
    // A prefeitura de uma cidade fez uma pesquisa com 200 pessoas, coletando dados sobre o sal�rio e o n�mero de filhos. A prefeitura deseja saber: ? A m�dia do sal�rio dessas pessoas ? A m�dia do n�mero de filhos ? O maior sal�rio

    float salario, mediaSalario, totalSalario, maiorSalario;
    float mediaFilhos, totalFilho;
    int filhos, i = 0;

    printf("Ola!!! Bem vindo ao sistema da prefeitura para censo!!! insira os seguintes dados:\nO seu salario e a quantidade de filhos\n");

    while (i < 5)
    {
        printf("Insira o sal�rio\n");
        scanf("%f", &salario);
        printf("Insira a quantidade de filhos\n");
        scanf("%i", &filhos);
        totalFilho += (float)filhos;
        totalSalario += salario;

        if (maiorSalario < salario)
        {
            maiorSalario = salario;
        }

        i++;
    }

    mediaSalario = totalSalario / 5;
    mediaFilhos = totalFilho / 5;

    printf("O maior sal�rio �: %2.f\n", maiorSalario);
    printf("A m�dia de sal�rio: %2.f\n", totalSalario);
    printf("A m�dia de filhos �: %2.f", mediaFilhos);
}
