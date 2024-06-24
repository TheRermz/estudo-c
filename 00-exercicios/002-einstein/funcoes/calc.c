#include <stdio.h>

float soma(float i, float y)
{
    float soma;
    soma = i + y;
    return printf("%f", soma);
}

float subtracao(float i, float y)
{
    float subtracao;
    subtracao = i - y;
    return printf("%f", subtracao);
}

float multiplicacao(float i, float y)
{
    float multiplicacao;
    multiplicacao = i * y;
    return printf("%f", multiplicacao);
}

float divisao(float i, float y)
{
    float divisao;
    divisao = i / y;
    return printf("%f", divisao);
}

int main()
{
    float i, y;
    int operacao;
    printf("Insira o primeiro valor");
    scanf("%f", &i);
    printf("Insira o segundo valor");
    scanf("%f", &y);

    printf("Selecione o tipo de operacao - 1 soma, 2 subtracao, 3 multiplicacao, 4 divisao");
    scanf("%i", &operacao);

    switch (operacao)
    {
    case 1:
        soma(i, y);
        break;

    case 2:
        subtracao(i, y);
        break;

    case 3:
        multiplicacao(i, y);
        break;

    case 4:
        divisao(i, y);
        break;

    default:
        printf("Selecione um valor válido");
    }
}
