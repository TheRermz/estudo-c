#include <stdio.h>
// FaÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂ§a um programa que calcule o IMC 15 pessoas. O programa deve solicitar a altura e o peso da pessoa. Para calcular o IMC utilize a fÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂ³rmula
// (IMC = peso/(altura*altura).  Com base no cÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂ¡lculo do IMC, informe ao usuÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂ¡rio sua situaÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂ§ÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂÃÂ£o:
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
