#include <stdio.h>
#include <locale.h>

/*
    Fazer um programa para ler quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto
    de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D)
 */

int main()
{
    setlocale(LC_ALL, "");
    int a, b, c, d, result;
    printf("Digite os valores para a diferenca de produtos:\n");
    printf("Digite o valor de a:\n");
    scanf("%d", &a);

    printf("Digite o valor de b:\n");
    scanf("%d", &b);
    // opa teste

    printf("Digite o valor de c:\n");
    scanf("%d", &c);

    printf("Digite o valor de d:\n");
    scanf("%d", &d);

    result = (a * b) - (c * d);

    printf("O resultado da equacao e %d", result);

    return 0;
}
