#include <stdio.h>

// Fazer um programa para ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o
// código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Calcule e mostre o valor a ser pago.

int main()
{
    int c1, pc1, c2, pc2;
    double price1, price2, total;

    printf("insira o codigo do primeiro produto e a quantidade:\n");
    printf("Codigo Produto 1:\n");
    scanf("%d", &c1);

    printf("Quantidade de pecas do produto 1\n");
    scanf("%d", &pc1);

    printf("Valor unitario do produto 1:\n");
    scanf("%lf", &price1);

    printf("Codigo Produto 2:\n");
    scanf("%d", &c2);

    printf("Quantidade de pecas do Produto 2\n");
    scanf("%d", &pc2);

    printf("Valor unitario do Produto 2:\n");
    scanf("%lf", &price2);

    total = (pc1 * price1) + (pc2 * price2);

    printf("O valor total dos produtos foi R$%.2lf:\n", total);

    return 0;
}
