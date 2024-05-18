#include <stdio.h>

int main()
{
    // A prefeitura de uma cidade fez uma pesquisa com 200 pessoas, coletando dados sobre o salário e o número de filhos. A prefeitura deseja saber: ? A média do salário dessas pessoas ? A média do número de filhos ? O maior salário

    float salario, mediaSalario, totalSalario, maiorSalario;
    float mediaFilhos, totalFilho;
    int filhos, i = 0;

    printf("Ola!!! Bem vindo ao sistema da prefeitura para censo!!! insira os seguintes dados:\nO seu salario e a quantidade de filhos\n");

    while (i < 5)
    {
        printf("Insira o salário\n");
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

    printf("O maior salário é: %2.f\n", maiorSalario);
    printf("A média de salário: %2.f\n", totalSalario);
    printf("A média de filhos é: %2.f", mediaFilhos);
}
