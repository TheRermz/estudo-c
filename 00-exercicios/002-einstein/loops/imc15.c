#include <stdio.h>
// Faca um programa que calcule o IMC de 15 pessoas. O programa deve solicitar a altura e o peso da pessoa. Para Calcular o IMC utilize a formula (IMC = peso /(altura*altura)). Com base no calculo do IMC, informe ao usuario a sua situacao
int main()
{
    int count = 0;
    float peso, altura, imc;

    do
    {
        printf("Por favor, insira seu peso:\n");
        scanf("%f", &peso);

        printf("Agora, insira sua altura:\n");
        scanf("%f", &altura);

        imc = peso / (altura * altura);
        printf("Seu imc e %f\n", imc);

        if (imc < 17)
        {
            printf("Muito abaixo do peso\n");
        }
        else if (imc < 18.49)
        {
            printf("Abaixo do peso\n");
        }
        else if (imc < 24.99)
        {
            printf("peso normal\n");
        }
        else if (imc < 29.99)
        {
            printf("acima do peso\n");
        }
        else if (imc < 34.99)
        {
            printf("obesidade 1\n");
        }
        else if (imc < 39.99)
        {
            printf("Obesidade 2\n");
        }
        else
        {
            printf("Obesidade 3\n");
        }
        count++;

    } while (count <= 15);
}
