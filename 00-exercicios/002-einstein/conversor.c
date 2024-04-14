#include <stdio.h>
int main()
{
    int i;
    float dolar, real, euro, libra, peso;
    printf("Bem vindo ao conversor de moedas\n");
    printf("Digite 1 para converter de Real para Dolar\n");
    ;
    printf("Digite 2 para converter de Real para Euro\n");
    printf("Digite 3 para converter de Real para Libra\n");
    printf("Digite 4 para converter de Real para Peso\n");
    printf("Digite 5 para sair\n");
    scanf("%i", &i);

    while (i != 5)
    {
        switch (i)
        {
        case 1:
            printf("Insira o valor em real a ser convertido\n");
            scanf("%f", &real);
            printf("Insira a cotacao do dolar do dia\n");
            scanf("%f", &dolar);
            printf("O valor convertido e: %f\n", real / dolar);
            break;

        case 2:
            printf("Insira o valor em real a ser convertido\n");
            scanf("%f", &real);
            printf("Insira a cotacao do dolar do dia\n");
            scanf("%f", &euro);
            printf("O valor convertido e: %f\n", real / euro);
            break;

        case 3:
            printf("Insira o valor em real a ser convertido\n");
            scanf("%f", &real);
            printf("Insira a cotacao do dolar do dia\n");
            scanf("%f", &libra);
            printf("O valor convertido e: %f\n", real / libra);
            break;

        case 4:
            printf("Insira o valor em real a ser convertido\n");
            scanf("%f", &real);
            printf("Insira a cotacao do dolar do dia\n");
            scanf("%f", &libra);
            printf("O valor convertido e: %f\n", real / libra);
            break;

        case 5:
            printf("Saindo...\n");

            break;

        default:

            printf("Insira um valor valido");
            break;
        }
    }
}
