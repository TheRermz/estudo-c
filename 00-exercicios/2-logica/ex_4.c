#include <stdio.h>
#include <locale.h>

// Com base na tabela abaixo, escreva um programa que leia o c√≥digo de um item e a quantidade deste item. A
// seguir, calcule e mostre o valor da conta a pagar
/*
    C√ìDIGO      ESPECIFICA√á√ÉO           Pre√ßo
        1       Cachorro Quente         4.00
        2       X-Salada                4.50
        3       X-Bacon                 5.00
        4       Torrada Simples         2.00
        5       Refrigerante            1.50
*/

int main()
{
    setlocale(LC_ALL, "portuguese");
    int cod, qt;
    double total;
    printf("Digite o cÛdigo do produto e a quantidade desejada:\n");
    scanf("%d %d", &cod, &qt);

    switch (cod)
    {
    case 1:
        total = qt * 4.00;
        printf("O total do pedido È R$%.2lf", total);
        break;

    case 2:
        total = qt * 4.50;
        printf("O total do pedido È R$%.2lf", total);
        break;

    case 3:
        total = qt * 5.00;
        printf("O total do pedido È R$%.2lf", total);
        break;

    case 4:
        total = qt * 2.00;
        printf("O total do pedido È R$%.2lf", total);
        break;

    case 5:
        total = qt * 1.50;
        printf("O total do pedido È R$%.2lf", total);
        break;

    default:
        break;
    }

    return 0;
}
