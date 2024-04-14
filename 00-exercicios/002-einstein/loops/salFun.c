#include <stdio.h>

int main()
{
    int bonus;
    float salario;
    int count = 0;

    while (count < 20)
    {
        printf("Insira o salario e o total de pontos arrecadados\n");
        printf("Salario:\n");
        scanf("%f", &salario);
        printf("Pontos:\n");
        scanf("%i", &bonus);

        if (bonus >= 1000)
        {
            salario += 500.00;
            printf("Seu salario final e: %.2f\n", salario);
        }
        else if (bonus >= 500)
        {
            salario += 300.00;
            printf("Seu salario final e: %.2f\n", salario);
        }
        else if (bonus >= 100)
        {
            salario += 100.00;
            printf("Seu salario final e: %.2f\n", salario);
        }
        else
        {
            salario += 25.00;
            printf("Seu salario final e: %.2f\n", salario);
        }
        count++;
    }
}
